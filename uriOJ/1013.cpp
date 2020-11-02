#include<bits/stdc++.h>
int main(){
    int a,b,c,m_ab,m_abc;
    scanf("%d %d %d",&a,&b,&c);
    m_ab = (a+b+abs(a-b))/2;
    m_abc = (m_ab+c+abs(m_ab-c))/2;
    printf("%d eh o maior\n",m_abc);
    return 0;
}