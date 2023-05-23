#include<stdlib.h>
#include<stdio.h>
#include<stdbool.h>

int x[4] = {-1,-1,-1,-1};

bool place(int k,int i){
    for(int j=1;j<k;j++){
       if((x[j] == i) || abs (x[j]-i) == abs(j-k)){
           return false;
       }        
           }
           return true;
}

void nqueen(int k,int n){
    for(int i=0;i<n;i++){
        if(place(k,i) == true) {
            x[k] = i;
            if(k == n){
                int j=0;
                for(int j=1;j<=n;j++){
                    printf(" %d  ",x[j]);
                }
            
                printf("\n");
            }
            else
            nqueen(k+1,n);
        }
    }
}

void main(){
    int n=4,k=1;
    nqueen(k,n);
}
