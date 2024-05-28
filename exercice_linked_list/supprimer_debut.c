
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct Element {
    int val ;
    struct Element *suivant;
}elem ;
 elem* ajouter(elem *tete ,int val){
    elem *temp = (elem*)malloc(sizeof(elem));
    temp->val = val ;
    temp->suivant = tete ;
    tete = temp ;
    return tete ;
}
elem * supprimer_debut(elem * tete){
elem *temp ;
if(tete==NULL){
    printf("la liste est vide impossible de supprimer .\n");
}
else{
    temp = tete ;
    tete= tete->suivant;
    free(temp);
}
return tete ;
}
void afficher(elem *tete){
    elem *e = tete;
if(tete == NULL){
    printf("liste vide .\n");
}
else{
    while(e!=NULL){
        printf("%d-->",e->val);
        e = e->suivant ;
}
}

}
int main (){
    elem *t = NULL ;
    srand(time(NULL));
    for(int i=0;i<5;i++){
       int n = rand() % (10 +1);
       t = ajouter(t,n);
    }
    afficher(t);
    printf("\nla liste apres la supprission.\n");
    t=supprimer_debut(t);
    afficher(t);
}
