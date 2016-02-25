#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main(){
    int in =0, h=0, m=0, s=0;
    
    scanf("%d", &in);
    h = in/3600;
    m = (in - h*3600)/60;
    s = (in - h*3600 - m*60);
    printf("%d:%d:%d\n", h, m, s);
    
    return 0;
}
