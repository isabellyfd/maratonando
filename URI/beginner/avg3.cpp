#include <bits/stdc++.h>
#include <cstdio>

using namespace std;

int main() {
    double a =0.0, b =0.0, c=0.0, d=0.0, media = 0.0, x =0.0;
    
    scanf("%lf %lf %lf %lf", &a, &b, &c, &d);
    
    media = (a*2 + b*3 + c*4 + d*1)/10;
    printf("Media: %.1lf\n", media);
    
    if (media  >= 7.0){
        printf("Aluno aprovado.\n");
    } else if (media < 5.0){
        printf("Aluno reprovado.\n");
    } else if (media <= 6.9 && media >= 5.0){
        printf("Aluno em exame.\n");
        scanf("%lf", &x);
        printf("%.1lf\n", x);
        media = (x+media)/2;
        ( media >= 5.0) ? printf("Aluno aprovado.\nMedia final: %.1lf\n", media) : printf("Aluno aprovado.\nMedia final: %.1lf\n", media);
        
    }
    
    
    return 0;
}
