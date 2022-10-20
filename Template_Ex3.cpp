/* Create the C++ Function Template named init so that it has three
parameters whose types are determined by the function template type
parameters T1 and T2.  The function header is shown below.  init sets
the value of the parameter start to a T2-type value of 1.  init
returns a T1-type value which is the sum of num1 and num2.

    T1 init (T1 num1, T1 num2, T2& start)*/

#include <iostream>
using namespace std;

template <typename T1, typename T2>
T1 init (T1 num1, T1 num2, T2& start){
	return num1+num2;
}

int main()
{
    int num1=5, num2=10,start=0;
    cout<<init(num1,num2,start)<<endl;
    return 0;
}
