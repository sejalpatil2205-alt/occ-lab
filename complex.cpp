#include<bits/stdc++.h>
using namespace std;
class complex{
public:
int real;
int imaginary;
Complex()
{
real=0;
imaginary=0;
}
Complex(int r,int i)
{
real=r;
imaginary=i;
}
Complex addComplexNumber(Complex C1,Complex C2)
{
Complex res;
res.real=C1.real+C2.real;
res.imaginary=C1.imaginary+C2.imaginary;
return res;
}
};
int main()
{
Complex C1(4,5);
cout<<"Complex number 1:"<<C1.real
<<"+i"<<C1.imaginary<<endl;
Complex C2(8,9);
cout<<"Complex number 2:"<<C2.real
<<"+i"<<C2.imaginary<<endl;
Complex C3;
C3 =C3.addComplexNumber(C1,C2);
Cout<<"sum of complex number:"
<<c3.real<<"+1"
<<c3.imaginary;
cout<<endl
endl;
