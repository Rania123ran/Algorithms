/*Exercice 1 (Création d’une liste):
#En vous inspirant des exemples du cours, écrire un programme qui construit une
#liste de 100 éléments contenant des nombres entiers choisis aléatoirement dans
#l’intervalle [0;100[.*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct Element{
int val ;
struct Element *suivant ;
}Liste ;
Liste *newElem (int val){
    Liste *newElem = (Liste*)malloc(sizeof(Liste));
    newElem -> val = val ;
    newElem -> suivant = NULL ;
    return newElem ;
    }
/*Exercice 2 (Recherche de valeur):
En utilisant le programme précédent pour la création de la liste, écrire une
fonction qui recherche une valeur donnée dans une liste, et fournit un résultat
booléen selon que la valeur recherchée existe ou pas (0 ou 1). Quelle est la
complexité de votre algorithme?*/
/*-----------------------------------------------*/
int chercher(Liste *tete ,int n){
    Liste *L = tete ;
    while(L != NULL){
        if(L->val == n){
            return 1 ;}
        else {L = L->suivant ;}
    }
    return 0;
}
//------------------------------------------------
/*Exercice 3 (Suppression d’un élément):
En utilisant le programme de création de liste, écrire une fonction qui recherche
et supprime le nœud comportant la valeur minimale de la liste.*/
//------------------------------------------------
void supp(){
int max;
if (tete != NULL) {
    max = tete->val;
    Liste *t = tete->suivant;
    while (t != NULL) {
        if (t->val > max) {
            max = t->val;
        }
        t = t->suivant;   }

}
int main(){
    srand(time(NULL));
    Liste *tete = NULL ;

    for(int i=0;i<100;i++){
        Liste* nvElem = newElem( rand() % 100);
        nvElem ->suivant = tete ;
        tete = nvElem ;
    }
    /*affichage*/
    int j = 1 ;
    Liste *t = tete;
    while(t != NULL ){

        printf("Element %d : %d \n",j,t->val);
        j++ ;
         Liste* elem = tete;
        t = t->suivant ;
    }
    int n ,m ;
    printf("veuillez saisir une valeur a chercher :");
    scanf("%d",&n);
    m = chercher(tete,n);
    if(m ==1){
        printf("la valeur existe dans la liste .\n");
    }
    else {
        printf("la valeur n'existe pas  dans la liste .\n");
    }


}



