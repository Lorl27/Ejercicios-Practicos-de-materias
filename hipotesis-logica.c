// sea f:a->bxc , g:c->d. hacer h:a->d


#include <stdio.h>

typedef struct {
    int b;
    int c;
} Par;

Par f(int a){
    Par p;

    p.b=10+a;
    p.c=20;
    return p;
}

int primero(Par p){
    return p.b;
}

int g(int c){
    Par p=f(c);
    int d=primero(p);
    return d;
}

int h(int a){
    int d;
    d=g(a);
    return d;
}

int main(void){
    int a=10;
    printf("%d\n", h(a));
    return 0;
}