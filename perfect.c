#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#define n 28

int i;
bool ok;

int u[n+1]; //axm4

void init() {
    ok = false; //act1
    i = 1; //act2
    u[0] = 0; //axm6 or act 3
    for (int k=1; k<n; k++){
        u[k] = -1;
    }
}

void computing() {
    if (
        (u[n-1] != -1) &&  //grd1
        (u[n-1] == n)      //grd2
        ) {
        ok = true;
    }
}

bool step1() {
    if (
        (u[i] == -1) &&  //grd1
        (n % i == 0)     //grd2
       ) {

        u[i] = u[i-1] + i;
        i += 1;
        return true;
    }
    return false;
}

void step2(){
    if (
        (u[i] == -1) &&  //grd1
        (n % i != 0)     //grd2
    ) {
        u[i] = u[i-1];
        i += 1;
    }
}



int main() {
    init();
    
    while(i < n){
        if(!step1()){
           step2();
        }
    }
    computing();

    if (ok) {
        printf("Le nombre %d est parfait.\n", n);
    } else {
        printf("Le nombre %d n'est pas parfait.\n", n);
    }

    return 0;
}