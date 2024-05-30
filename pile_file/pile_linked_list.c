#include <stdio.h>
#include <stdlib.h>
#include <time.h>

typedef struct Pile{
int val ;
struct Pile *suivant ;
}mypile;

mypile* Empiler(mypile *p,int val){
mypile *temp = (mypile*)malloc(sizeof(mypile));
temp->val = val ;
if(p ==NULL){
    temp ->suivant = NULL ;}
else {temp ->suivant = p ;}
p = temp ;
return p ;
}

mypile* Depiler(mypile *p){
if(p == NULL ){printf("la pile est vide."); exit(0);}
else{
    mypile *temp = p ;
    p = p->suivant ;
    printf("les valeurs a supprimer sont : %d ",temp->val);
    free(temp);
}
return p ;}

void Afficher(mypile *p){
mypile *temp = p ;
if(temp == NULL){printf("la pile est vide.");}
else{while(temp->suivant != NULL){
    printf("%d",temp->val);
    temp = temp->suivant ;
}}}

int main (){
srand(time(NULL));
mypile *pp = NULL;
for(int i = 0 ;i<10;i++){
        int n = rand() % (10+1);
    pp = Empiler(pp,n);
}
Afficher(pp);
pp = Depiler(pp);
Afficher(pp);



}
