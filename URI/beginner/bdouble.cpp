#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main (){
    double n =0.0;    
    int cem = 0, cin = 0, vin =0, dez = 0, cinc = 0, dois = 0, rum = 0, ccin =0, cvinc =0, cdez = 0, ccinc = 0, cum = 0;
    
    scanf("%lf", &n);
    while (n >= 100.0) { cem++; n -= 100.0;}
    while (n >= 50.0) { cin++; n -= 50.0;}
    while (n >= 20.0) { vin++; n -= 20.0;}
    while (n >= 10.0) { dez++; n -= 10.0;}
    while (n >= 5.0) { cinc++; n -= 5.0;}
    while (n >= 2.0) { dois++; n -= 2.0;}
    while (n >= 1.0) { rum++; n -= 1.0;}
    while (n >= 0.5) { ccin++; n -= 0.5;}
    while (n >= 0.25) { cvinc++; n -= 0.25;}
    while (n >= 0.10) { cdez++; n -= 0.1;}
    while (n >= 0.05) { ccinc++; n -= 0.5;}
    while (n >= 0.01) { cum++; n -= 0.01;}
    
    printf("NOTAS:\n%d nota(s) de R$ 100.00\n%d nota(s) de R$ 50.00\n%d nota(s) de R$ 20.00\n%d nota(s) de R$ 10.00\n%d nota(s) de R$ 5.00\n%d nota(s) de R$ 2.00\nMOEDAS:\n%d moeda(s) de R$ 1.00\n%d moeda(s) de R$ 0.50\n%d moeda(s) de R$ 0.25\n%d moeda(s) de R$ 0.10\n%d moeda(s) de R$ 0.05\n%d moeda(s) de R$ 0.01\n", cem, cin,vin, dez, cinc, dois, rum, ccin, cvinc, cdez, ccinc, cum);
    return 0 ;
}
