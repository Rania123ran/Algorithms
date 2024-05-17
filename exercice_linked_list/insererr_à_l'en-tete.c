//inserer un element dans l'en-tete de la liste -chainée :
#include <stdio.h>
#include <stdlib.h>
typedef struct Element {
int val ;
struct Element *suivant ;
}elem ;

elem* creer(int nbr){
elem *temp , *tete, *e ;
tete = (elem*)malloc(sizeof(elem));
printf("Valeur 1 :");
scanf("%d",&tete->val);
tete->suivant = NULL ;
e= tete ;
for(int i=2;i<=nbr;i++){
    temp = (elem*)malloc(sizeof(elem));
    printf("\nvaleur %d : ",i);
    scanf("%d",&temp->val);
    temp -> suivant = NULL ;
    e -> suivant = temp ;
    e = temp ;
    }
    e = tete ;
    return e ;
}
void afficher(elem *e){
printf("Les valeurs sont :");
while (e != NULL){
    printf(" %d ",e->val);
    e = e->suivant ;
}
}
//--------------------------------------------------
elem* inserer_tete(elem *e ){
elem *deb = (elem*)malloc(sizeof(elem));
printf("\ninserer une valeur :");
scanf("%d",&deb->val);
deb->suivant=e;
e= deb ;
return e ;
}
//----------------------------------------------------
int main(){
    elem *liste ;
    int nbr = 5 ;
    liste  = creer(5);
    afficher(liste);
    liste = inserer_tete(liste);
    afficher(liste);
}
