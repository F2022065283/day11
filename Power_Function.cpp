#include <iostream>
using namespace std;
void power(float i,float j)
{
    float p=1;
    // Main thing to understant
    for(int n=1;n<=j;n++)
    p*=i;
    cout<<i<<" ^ "<<j<<" = "<<p;
}
int main() 
{
   int k,l;
   power(8,2);
    return 0;
}