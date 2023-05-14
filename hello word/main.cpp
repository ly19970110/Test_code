#include<iostream>
using namespace std;

    void swap()
    {   int a;
        int b;
        cout << "plz input the number you want swap"<<endl;
        cin >> a;
        cin >> b;
        int temp ;
        temp = a;
        a = b;
        b = temp;
        cout << "a:"<<a << endl;
        cout << "b:"<<b<<endl;
    }

int main()
{
    swap();
}