#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main (){
    int age =0, ano = 0, mes = 0;
    scanf("%d", &age);
    while ( age >= 365) {
        ano++;
        age -= 365;
    }
    
    while ( age >= 30 ) { mes++; age -= 30; }
    
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", ano, mes, age);
    
    return 0;
}
