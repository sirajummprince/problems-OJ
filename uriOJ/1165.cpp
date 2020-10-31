#include<bits/stdc++.h>
int main(){
    int N,X,i,j,isPrime=0;
    scanf("%d", &N);
    for(i=1 ; i<=N ; i++){
        scanf("%d", &X);
        for(j=1, isPrime=0; j < X ; j++){
            if(X%j==0){
                isPrime++;
            }
        }
        if(isPrime==1){
            printf("%d eh primo\n", X);
        }
        else{
            printf("%d nao eh primo\n", X);
        }
    }
    return 0;
}