#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>

using namespace std;

int main (){
    double a = 0.0, b = 0.0 , c = 0.0, raiz_delta = 0.0;
    
    scanf("%lf %lf %lf", &a, &b, &c);
       
    if (a != 0){
        raiz_delta = sqrt(pow(b,2) - 4 * a * c);
        if (raiz_delta >= 0){
            printf("R1 = %.5lf\nR2 = %.5lf\n", (-b + raiz_delta)/(2*a), (-b - raiz_delta)/(2*a));
        }else{
            printf("Impossivel calcular\n");
        }    
    }else{
        printf("Impossivel calcular\n");
    }
    return 0;
    
}
