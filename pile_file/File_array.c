#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAX_SIZE 10
typedef struct {
int queue ;
int tete ;
int file[MAX_SIZE];
}myfile;

int estVide(myfile f ){return f.queue == f.tete;}

int estPleine(myfile f){return f.queue == MAX_SIZE;}

void Emfiler(myfile *f,int val){
f->file[f->queue ++]=val ;
}

int Defiler(myfile *f){
return f->file[f->tete ++];
}
int main(){
srand(time(NULL));
myfile pp ;
int queue = 0;
int tete = 0;
while(!estPleine(pp)){
  for(int i = 0 ;i<10;i++){
        int n = rand() % (10+1);
        Emfiler(&pp,n);
}
}
while(!estVide(pp)){
    printf("%d ",Defiler(&pp));
}



}
