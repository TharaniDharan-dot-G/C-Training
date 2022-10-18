#include<iostream>
#include<algorithm>
using namespace std;

void display(int num[],int num_size){
    cout<<"The elements of the array are : ";
    for(int i=0;i<num_size;++i){
        cout<<num[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int num[]={1,4,3,8,2,5,6,9,7};
    int num_size=sizeof(num)/sizeof(num[0]);
    cout<<"Size of array "<<sizeof(num)<<"\n"<<"Size of digit "<<sizeof(num[0])<<endl;
    cout<<"Size of num "<<num_size<<endl;
   
    int no=4;
    cout<<"The size of int"<<sizeof(no)<<endl;
    
    char abc='e';
    cout<<"The size of char"<<sizeof(abc)<<endl;

    float digit=22.5;
    cout<<"The size of float is"<<sizeof(digit)<<endl;

    cout<<"Before sorting ";
    display(num,num_size);
    cout<<"After sorting ";
    sort(num, num + num_size);
    display(num,num_size);

    if(binary_search(num,num + 9, 10)){
    cout<<"The element 2 is found in array"<<endl;        
    }
    else{
    cout<<"The element is not found in array"<<endl;
    }
    return 0;
}