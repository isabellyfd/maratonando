#include <bits/stdc++.h>
#include <cstdio>

int main(){
    int num = 0, hrs = 0;
    double perhs = 0.0;
    
    scanf("%d\n%d\n%lf", &num, &hrs, &perhs);
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", num, (hrs*perhs));
    
    return 0;
}
