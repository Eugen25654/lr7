#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    float x;
    double y, sum = 0;
    cout<<"Введіть x: ";
    cin>>x;
    for(int i = 1; i <= 10; i++) 
        sum += i;
    y = log(pow(x, 3)) + (2 * pow(sin(x), 2)) + sum;
    cout<<"Y = "<<y<<endl;
    /*float y;
    cout<<"Введіть y: ";
    cin>>y;
    if(y+2!=0){
        double z, sum=1;
        for (int i=1; i<=10; i++)
            sum *= tan(i*y);
        z = cos(sum)/(y+2);
        cout<<"Z = "<<z<<endl;
    }
    else{
        cout<<" Дільник дорівнює 0";
    }*/
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    cout << "Hello World!" << endl;
    return 0;}