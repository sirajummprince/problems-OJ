#include<bits/stdc++.h>
int main(){
    float A,B,C,R1,R2;
    scanf("%f %f %f", &A,&B,&C);
    R1 = (-B+sqrt((B*B)-(4*A*C)))/(2*A);
    R2 = (-B-sqrt((B*B)-(4*A*C)))/(2*A);
    if(A==0 || ((B*B)-(4*A*C))<0){
        printf("Impossivel calcular\n");
    }
    else printf("R1 = %.5f\nR2 = %.5f\n",R1,R2);
    return 0;
}