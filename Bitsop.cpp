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
void showOperation( unsigned char a, unsigned char b, unsigned char result, char op )
{
    std::cout << "   ";
    printBits( a );
    std::cout << " (" << a << ")\n " << op << ' ';
    printBits( b );
    std::cout << " (" << b << ")\n = ";
    printBits( result );
    std::cout << " (" << result << ")\n\n";
}
int main(){
    unsigned char byte1;
    unsigned char byte2;
    unsigned char sum;
    byte1 = 0x01;
    byte2=0x0a;
    sum=byte1|byte2;

printf("byte1 = %03d byte1hex = %02x byte2 = %03d byte2hex = %02x\n",byte1,byte1,byte2,byte2);
printBits(byte1);
printBits(byte2);
printBits(byte1|byte2);
printf("byte1|byte2 = %03d hex = %02x \n",sum,sum);
 
   unsigned int a = 42, b = 57;
   
    std::cout << a << ' ' << b << '\n';
   
    a ^= b;
    b ^= a;
    a ^= b;
    
    std::cout << a << ' i ' << b << '\n';
    return 0;
}   