//In this file, the encryption will be 

#include <primesieve.hpp>
#include <iostream>
#include <vector>
#include <cstdlib>

//Main routine for encryption

//Fast Exponentation by squaring
int fastExp(int a,int b)
{
    //Fast log(b) approach to a^b
    int y = 1;
    while(b>1)
    {
        if(n%2==0)
        {
            a = a * a;
            b = b / 2;
        }
        else
        {
            y = y * a;
            a = a * a;
            b = (b-1)/2;
        }
    }
    return a * y;
}

int decryption(int n,int p,int q)
{
    //Decryption alg
    return 0;
}

int encryption(int n,int p,int q)
{
    //encryption alg
    return 0;
}

int RSA()
{
    //Code below is G()
    //TODO init primesieve to generate random primes
    std::vector<int> primes;
    primesieve::generate_primes(1000,&primes);

    int pIndex = rand()/RAND_MAX;
    int qIndex = rand()/RAND_MAX;

    int p = primes[pIndex];
    int q = primes[qIndex];
    //The above two primes are the two primes used for encryption
    int n = p*q;
    int phi = (p-1)*(q-1);

    //TODO NEED TO DEFINE E AND D SUCH THAT E*D==1 MOD N

    int E = n - 1;
    int D = (n+1)/E;

    //Now can do f() or encryption or f-1() or decryption
    return 0;

}
