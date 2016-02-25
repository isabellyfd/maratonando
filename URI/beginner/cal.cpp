#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main(){
    int cod = 0, qtd1 = 0, qtd2 = 0;
    double pc1 = 0.0, pc2 = 0.0;
    
    scanf("%d %d %lf", &cod, &qtd1, &pc1);
    scanf("%d %d %lf", &cod, &qtd2, &pc2);
    printf("VALOR A PAGAR: R$ %.2lf\n", (qtd1*pc1 +qtd2*pc2));
    return 0;
}
