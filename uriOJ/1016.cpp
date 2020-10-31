#include<iostream>
using namespace std;
#define pi 3.14159
int main(){
    double A,B,C;
    cin>> A >> B >> C;
    printf("TRIANGULO: %.3f\n",(A*C)/2);
    printf("CIRCULO: %.3f\n",pi*C*C);
    printf("TRAPEZIO: %.3f\n",((A+B)*C)/2);
    printf("QUADRADO: %.3f\n",B*B);
    printf("RECTANGULO: %.3f\n",A*B);
    return 0;
}