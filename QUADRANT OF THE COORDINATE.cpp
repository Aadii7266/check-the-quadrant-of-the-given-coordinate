//Aaditya Parihar
#include<iostream>
using namespace std;
int main()
{  
     int x,y;
    cout<<"enter the value of x";
    cin>> x;
    cout<<"enter the value of y";
    cin>> y;
    if(x>=0 && y>=0)
    {
        cout<<"the coordinate is in first quadrant";
    }
    else if (x>=0 && y<=0)
    {
        cout<<"the coordinate is in 4 quadrant";
    }
    else if (x<=0 && y>=0)
    {
        cout<<" the coordinate is in 2 quadrant";
    }
    else if (x<=0 && y<=0)
    {
        cout<< "the coordinate is in 3 quadrant";
    }
    else if (x==0 && y==0)
    {
        "the coordinate is in axis";
    }
 return 0 ;
}