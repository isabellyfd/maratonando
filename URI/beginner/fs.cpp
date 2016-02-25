#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main(){
    int time =0, speed = 0;
    
    scanf("%d\n%d", &time, &speed);
    printf("%.3lf\n", (time*speed)/12.0);
    
    return 0;
}
