#include <iostream>
#include <cstring>
using namespace std;
enum triangleType{Scalene,Isosceles,Equilateral,NoTriangle};
triangleType triangleShape(int a,int b,int c);
int main()
{
    int a,b,c;
    cout<<"Enter the three sides : "<<endl;
    cin>>a>>b>>c;
    triangleType type=triangleShape(a,b,c);
    if(type==Equilateral)
    cout<<"Triangle is Equilateral"<<endl;
    else if(type==Isosceles)
    cout<<"Triangle is Isosceles"<<endl;
    else if(type==Scalene)
    cout<<"Triangle is Scalene"<<endl;
    else
    cout<<"The shape is not a triangle"<<endl;
    return 0;
}
triangleType triangleShape(int a,int b,int c)
{
    if(a==b && b==c && c==a)
    return Equilateral;
    if(a==b || b==c || c==a)
    return Isosceles;
    if(a!=b && b!=c && c!=a)
    return Scalene;
    else
    return NoTriangle;
}