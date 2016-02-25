#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main(){
    int n = 0, cem =0, cin =0, vin =0, dez =0, cinc =0, dois = 0, um = 0;
    
    
    scanf("%d", &n);
    printf("%d\n",n);
    while (n >= 100) {cem++; n -= 100;}
    while (n >= 50) {cin++; n -= 50;}
    while (n >= 20) {vin++; n -= 20;}
    while (n >= 10) {dez++; n -= 10;}
    while (n >= 5) {cinc++; n -= 5;}
    while (n >= 2) {dois++; n -= 2;}
    while (n >= 1) {um++; n -= 1;}
    
    printf("%d nota(s) de R$ 100,00\n%d nota(s) de R$ 50,00\n%d nota(s) de R$ 20,00\n%d nota(s) de R$ 10,00\n%d nota(s) de R$ 5,00\n%d nota(s) de R$ 2,00\n%d nota(s) de R$ 1,00\n", cem, cin, vin, dez, cinc, dois, um );
    
       
    
    return 0;
}
