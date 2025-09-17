#include <iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
float div(int a,int b)
{
    return a/b;
}
int main()
{
    int a,b,res,res2;
    float resd;
    cin>>a;
    cin>>b;
    res=add(a,b);
    res2=sub(a,b);
    resd=div(a,b);
    return 0;
}
