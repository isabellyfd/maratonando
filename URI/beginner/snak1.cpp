#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main(){
    
    int code =0, qtd =0;
    
    scanf("%d %d", &code, &qtd);
    double total = 0.0;
    switch(code){
        case 1:
            total = qtd*4.0;
            break;   
        case 2:
            total = qtd*4.5;
            break;
        case 3:
            total = qtd*5.0;
            break;
        case 4:
            total = qtd*2.0;
            break;
        case 5:
            total = qtd*1.5;
            break;
    }
    
    printf("Total: R$ %.2lf\n", total);
    
    
    return 0;
}
