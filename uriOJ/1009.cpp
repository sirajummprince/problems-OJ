#include<bits/stdc++.h>
#include<string>
using namespace std;
int main(){
    string name;
    double s,v;
    cin >> name >> s>> v;
    printf("TOTAL = R$ %.2lf\n", s+.15*v);
    return 0;
}