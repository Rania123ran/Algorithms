/*1. Write a program in C to create and display a Singly Linked List.
Test Data :
Input the number of nodes : 3
Input data for node 1 : 5
Input data for node 2 : 6
Input data for node 3 : 7
Expected Output :

 Data entered in the list :
 Data = 5
 Data = 6
 Data = 7 */
 #include <stdlib.h>
 #include <stdio.h>
 typedef struct Element{
 int val ;
 struct Element *suivant ;
 }elem ;
 elem* create(int n ,elem *e  ){
     int i ;
     elem *tete ,*temp ;
     //creation de la tete :
     tete = (elem*)malloc(sizeof(elem));
     printf("Input data of node 1:");
     scanf("%d",&tete->val);
     tete->suivant = NULL ;
     e = tete ;
     for (i = 2 ; i<= n ; i++){
        temp= (elem*)malloc(sizeof(elem));
        printf("Input data of node %d:",i);
        scanf("%d",&temp->val);
        temp -> suivant = NULL ;
        e->suivant = temp;
        e = temp ;}
        e = tete ;
        return e  ;
 }
 void afficher(elem *e){
 elem *tete ;
 tete = e ;
 printf("Data entered in the list :\n");
 while (tete!=NULL){
    printf("\nData : %d",tete->val);
    tete = tete->suivant;
 }}
 int main(){
     elem *liste , *tete ;
     int nbr ;
     printf("Input the number of nodes :");
     scanf("%d",&nbr);
     liste =  create(nbr,tete);
     afficher(liste);

 }
