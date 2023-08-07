#include <bits/stdc++.h>
#include <typeinfo>
#include <iostream>
#include <cstdio>

using namespace std;
void printBits( unsigned char n )
{
    const int Bits = 8 * sizeof n;
    char tmp[ Bits + 1 ];
   
    for( int i = 0; i < Bits; ++i )
    {
        tmp[ Bits - i - 1 ] = '0' + n % 2;
        n /= 2;
    }
   
    tmp[ Bits ] = 0;
    std::cout << tmp << endl;
}
int main(){
    unsigned char byte1;
    unsigned char byte2;
    unsigned char sum;
    byte1 = 0x0a;
printf("byte1 = %03d byte1hex = %02x\n",byte1,byte1);
printBits(byte1);
    return 0;
}