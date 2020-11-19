#include<bits/stdc++.h>
int main(){
    float n1,n2,n3,n4,avg,inExamScore,finalScore;
    scanf("%f %f %f %f",&n1,&n2,&n3,&n4);
    avg = (n1*2+n2*3+n3*4+n4)/10;
    printf("Media: %.1f\n",avg);
    if(avg >= 7.0) printf("Aluno aprovado.\n");
    if(avg < 5.0) printf("Aluno reprovado.\n");
    if(avg >= 5.0 && avg <= 6.9){
        printf("Aluno em exame.\n");
        scanf("%f",&inExamScore);
        printf("Nota do exame: %.1f\n", inExamScore);
        finalScore = (avg+inExamScore)/2;
        if(finalScore >= 5.0){
            printf("Aluno aprovado.\n");
        }
        if(finalScore <= 4.9){
            printf("Aluno reprovado.\n");
        } 
        printf("Media final: %.1f\n", finalScore);
    }
    return 0;
}