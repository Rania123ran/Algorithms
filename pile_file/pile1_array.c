#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 10
//structure :
typedef struct {
int top ;
int pile[MAX_SIZE];
}mypile ;
//empiler :
void empiler(mypile *p,int val){
    if(p->top == MAX_SIZE ){
        printf("Stack over flow !\n"); return -1;}
      p->pile[p->top ++]=val;}
//depiler :
int depiler(mypile *p){
    if(p->top == -1){
        printf("Stack inderflow !\n");
        return -1 ;
    }
return p->pile[-- p->top];
}
int estVide(mypile p){
if(p.top == 0)return 1;
else return 0;

}


int main(){
mypile pp ;
pp.top = 0;
srand(time(NULL));
for(int i =0 ;i<MAX_SIZE;i++){
    int n = rand()%(10+1);
    empiler(&pp,n);
}
while(estVide(pp) == 0){
    printf("%d ",depiler(&pp));
}


}
