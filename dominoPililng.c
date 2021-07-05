#include<stdio.h>
#include<stdlib.h>

int main(){
    int M,N;
    scanf("%d",&M);
    scanf("%d",&N);
    if(M>=1 && N<=16 && M<=N)
    {
        int result=(M*N)/(2*1);
        printf("%d",result);
    }
}