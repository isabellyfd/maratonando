#include <bits/stdc++.h>
#include <cstdio>

int my_abs(int a, int b){
    if (a>b) return a-b;
    else return b-a;
}

int main(){
    
    int maior = 0,a =0, b=0, c=0;
    
    scanf("%d %d %d", &a , &b, &c);
    maior = (a + b + my_abs(a,b))/2;
    maior = (maior + c + my_abs(maior, c))/2;
    printf("%d eh o maior\n", maior);
    
    return 0;
}
