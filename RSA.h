//Header file for RSA so convolution file can include it
#ifndef __RSA_H__
#define __RSA_H__


int fastExp(int a,int b);

int decryption(int n,int p,int q);

int encryption(int n,int p,int q);

int RSA();

#endif
