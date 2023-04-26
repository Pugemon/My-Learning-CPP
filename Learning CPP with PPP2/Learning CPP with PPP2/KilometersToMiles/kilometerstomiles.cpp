#include<iostream>
using namespace std;


int main()
{
    
    float kilometer;
    float miles;
    while (true)
    {
        cout << "Input distance in kilometers:";
        cin >> kilometer;
        miles = kilometer * 0.621371;
        cout << kilometer << " kilometers in miles = " << miles << '\n';
    }
    return 0;
}
