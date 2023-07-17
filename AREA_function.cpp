




// I can enter height in point 



#include<iostream>
using namespace std;
void area(float base,float height)
{
    float area=0.5*(base*height);
    cout<<area;
}
int main()
{
    int x,y;
    cin>>x>>y;
    area(x,y);
}