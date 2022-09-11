#include <iostream>
#include<stdio.h>
#include<math.h>
using namespace std;

long long int power(long long int a, long long int b,long long int P){// возвращает значение a ^ b mod P
    return (((long long int)pow(a, b)) % P);
}

int main(){
    long long int x, y, a, b, ka, kb;// открытые ключи: G  P                                           // закрытый ключ Алисы - а, Боба - b
    long long int P = 808;
    long long int G = 394;

    printf("public key P : %lld\n", P);
    printf("public key G : %lld\n\n", G);

    a = 4; 
    printf("private key a : %lld\n", a);
    x = power(G, a, P);                    // сгенерированный ключ

    b = 3;
    printf("private key b : %lld\n\n", b);
    y = power(G, b, P);                   // сгенерированный ключ

        // общие секретные ключи
    ka = power(y, a, P); // секретный ключ для Алисы
    kb = power(x, b, P); // секретный ключ для Боба

    printf("secret key a : %lld\n", ka);
    printf("secret Key b : %lld\n", kb);
    return 0;
}
