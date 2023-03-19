#include <iostream>
#include<cmath>
#include<fstream>


using namespace std;

int main()
´{
    int N, i;
    float G, M_s, c,t1;
    G= 6.67*pow(10,-11);
    M_s= 1.99*pow(10,30);
    c= 1.496*pow(10,11);

    //Damos valor a cuantos planetas vamos a tener inicialmente
    N=9;

    x[0]=0;
    x[1]=57910000000;
    x[2]=108200000000;
    x[3]=146600000000;
    x[4]=227940000000;
    x[5]=778330000000;
    x[6]=1429400000000;
    x[7]=2870990000000;
    x[8]=4504300000000;

    m[0]=1.98*pow(10,30);
    m[1]=3.28*pow(10,23);
    m[2]=4.83*pow(10,24);
    m[3]=5.98*pow(10,24);
    m[4]=6.4*pow(10,23);
    m[5]=1.9*pow(10,27);
    m[6]=5.98*pow(10,26);
    m[7]=8.67*pow(10,25);
    m[8]=1.05*pow(10,26);

    vy[0]=0;
    vy[1]=48000.92;
    vy[2]=35000.02;
    vy[3]=29000.78;
    vy[4]=24000.07;
    vy[5]=13000.05;
    vy[6]=9000.64;
    vy[7]=6000.81;
    vy[8]=5000.43;

    for ( i = 0; i < N; i++)
    {
        vx[i]=0;
        y[i]=0;
    }
}