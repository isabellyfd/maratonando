#include <bits/stdc++.h>
#include <cstdio>


using namespace std;

int main(){
    char name[101];
    double sal =0.0, gain =0.0; 
    scanf("%100s\n%lf\n%lf", name, &sal, &gain);
    printf("TOTAL = R$ %.2lf\n", (sal + 0.15*gain) );
    return 0;
}
