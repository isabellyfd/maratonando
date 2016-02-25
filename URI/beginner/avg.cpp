#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main(){
    double a =0.0, b =0.0, min =3.5, max =7.5;
    
    scanf("%lf\n%lf", &a, &b);
    printf("MEDIA = %.5lf\n", (a*min +b*max)/11);
    
    return 0;
}
