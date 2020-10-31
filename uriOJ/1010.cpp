#include<bits/stdc++.h>
int main(){
    int code1, code2, unit1, unit2;
    float unit_price1, unit_price2;
    scanf("%d %d %f\n%d %d %f", &code1, &unit1, &unit_price1,&code2, &unit2, &unit_price2);
    printf("VALOR A PAGAR: R$ %.2f\n", unit1*unit_price1 + unit2*unit_price2);
    return 0;
}