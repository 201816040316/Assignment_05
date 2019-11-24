#include <iostream>
#include "DoubleSubscriptedArray.h"
using namespace std;

int main()
{
    DoubleSubscriptedArray a(3,4);
    DoubleSubscriptedArray b(2,3);
    //output a and b
    cout<<"Array a is:"<<endl;
    cout <<a<< endl;
    cout<<"Array b is:"<<endl;
    cout <<b<< endl;
    //input array a,then output a and b
    cout<<"Please enter array a: ";
    cin >> a;
    cout<<"\n"<<"Array a is:"<<endl;
    cout <<a<< endl;
    cout<<"Array b is:"<<endl;
    cout <<b<< endl;

    cout <<"\n"<<"The second row and third column of array a is : "<<a(2,3)<< endl;
    //assign a to b
    b = a;
    cout<<"\n"<<"Array a is:"<<endl;
    cout <<a<< endl;
    cout<<"Array b is:"<<endl;
    cout <<b<< endl;

    cout<<( (a == b)? "Array a is equal to array b." : "Array a is not equal to array b.")<<
        "(according to the overloaded == operator)"<<endl;
    cout<<( (a != b)? "Array a is not equal to array b." : "Array a is equal to array b.")<<
        "(according to the overloaded != operator)"<<endl;
    return 0;
}
