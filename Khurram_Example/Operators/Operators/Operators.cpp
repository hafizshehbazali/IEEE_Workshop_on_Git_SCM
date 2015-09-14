#include<iostream>
#include<conio.h>
#include<bitset>

using namespace std;

void main (void)
{
	int a=20, b=10;
	// Arithematic Operators 

	cout<<"a+b "<<a+b<<endl;
	cout<<"a-b "<<a-b<<endl;
	cout<<"a*b "<<a*b<<endl;
	cout<<"a/b "<<a/b<<endl;
	cout<<"a%b "<<a%b<<endl;
	a++;
	cout<<"a++ "<<a<<endl;
	++a;
	cout<<"++a "<<a<<endl;
	b = ++a;
	cout<<"b = ++a "<<b<<endl;
	b = a++;
	cout<<"b = a++ "<<b<<endl;

	//Relational Operators
	a=10; b=20;
	cout<<"a==b "<<(a==b)<<endl;
	cout<<"a!=b "<<(a!=b)<<endl;
	cout<<"a>b "<<(a>b)<<endl;
	cout<<"a<b "<<(a<b)<<endl;
	cout<<"a>=b "<<(a>=b)<<endl;
	cout<<"a<=b "<<(a<=b)<<endl;

	//Logical operators
	bool c = 1, d = 0;
	cout<<"c&&d "<<(c&&d)<<endl;	
	cout<<"c||d "<<(c||d)<<endl;
	cout<<"!c "<<(!c)<<endl;

	//Bitwise operators
	int e = 60, f = 13;

	//Original Values
	cout<<"E = "<<bitset<8>(e)<<endl;
	cout<<"F = "<<bitset<8>(f)<<endl;
	cout<<"e&f "<<bitset<8>(e&f)<<endl;	
	cout<<"e|f "<<bitset<8>(e|f)<<endl;
	cout<<"e^f "<<bitset<8>(e^f)<<endl;
	cout<<"~c "<<bitset<8>(~c)<<endl;
	cout<<"f<<2 "<<bitset<8>(f<<2)<<endl;
	cout<<"f>>2 "<<bitset<8>(f>>2)<<endl;

	//Assignment Operator
	cout<<"E += f "<<(e +=f)<<endl;
	cout<<"E -= f "<<(e -=f)<<endl;
	cout<<"E *= f "<<(e *=f)<<endl;
	cout<<"E /= f "<<(e /=f)<<endl;
	cout<<"E %= f "<<(e %=f)<<endl;
	cout<<"f <<= 2 "<<bitset<8>(f <<=2)<<endl;
	cout<<"f >> = 2 "<<bitset<8>(f >>= 2)<<endl;
	cout<<"E &= f "<<bitset<8>(e &=f)<<endl;
	cout<<"E |= f "<<bitset<8>(e |=f)<<endl;
	cout<<"E ^= f "<<bitset<8>(e ^=f)<<endl;

	//Misc Operator 
	//Sizeof
	cout<<"Sizeof (int) "<<sizeof(int)<<endl;
	cout<<"Sizeof (float) "<<sizeof(float)<<endl;
	cout<<"Sizeof (double) "<<sizeof(double)<<endl;
	cout<<"Sizeof (long double) "<<sizeof(long double)<<endl;
	cout<<"Sizeof (char) "<<sizeof(char)<<endl;
	int k[10];
	cout<<"Sizeof (Array) "<<sizeof(k)<<endl;
	float m[10];
	cout<<"Sizeof (Array) "<<sizeof(m)<<endl;
	double n[10];
	cout<<"Sizeof (Array) "<<sizeof(n)<<endl;

	//Conditional Assignment 

	a = (a>b)? 1:0;
	cout<<"A = "<<a<<endl;

	getch();
}

