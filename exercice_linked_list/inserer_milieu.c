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
while (e != NULL){
    printf(" %d ",e->val);
    e = e->suivant ;
}
}
//----------------------------------------------------
elem* insert_middle (int n,elem *e){
elem *mid = (elem*)malloc(sizeof(elem));
int i ;
printf("veuillez saisir un element :");
scanf("%d",&mid->val);
elem *temp = e ;
for(i = 1;i<n -1;i++){
    temp = temp->suivant ;
}
mid->suivant = temp->suivant ;
temp->suivant = mid ;
return e ;
}
//----------------------------------------------------
int main(){
    elem *liste ;
    int cnt ;
    liste  = creer(5);
    afficher(liste);
    printf("veuillez saisir la position ou vous voulez inserer l'element :");
    scanf("%d",&cnt);
    liste= insert_middle(cnt,liste);
    afficher(liste);
}

