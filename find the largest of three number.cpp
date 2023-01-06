#include<bits/stdc++.h>
using namespace std;
int main() {
    int a,b,c;

    cout<<"Enter value of a,b,c"<<endl;

    cin>>a>>b>>c;

    if (a>b && a>c)
    {
        cout<<"The largest number of = "<<a<<endl;
    }
    else if (b>c && b>a)
    {
        cout<<"The largest number of = "<<b<<endl;
    }
    else if (c>a && c>b)
    {
        cout<<"The largest number of = "<<c<<endl;
    }
    else if (a==b && a==c)
    {
        cout<<"The number are equal"<<endl;
    }
    else
    {
        cout<<"No largest number"<<endl;
    }
    
    return 0;
}
