#include <bits/stdc++.h>
#include <cstdio>
#include <cmath>

using namespace std;

int main(){
    double x1 =0.0, y1 = 0.0, x2 = 0.0, y2 = 0.0;
    
    scanf("%lf %lf\n%lf %lf", &x1, &y1, &x2, &y2);
    printf("%.4lf\n", sqrt(pow(x1-x2,2) + pow(y1-y2,2)));
    
    return 0;
}
