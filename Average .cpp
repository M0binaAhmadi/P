#include <iostream>
using namespace std;
double average( int a[] , int count){
    int sum=0;
    for(int i=0;i<count;i++)
{
    sum+=a[i];
}
    return (double)sum/count;
}
int main(){
    int numbers[]={10,20,30,40,50};
    int count=sizeof(numbers)/sizeof(numbers[0]);
    double avg=average(numbers,count);
    cout<<"average:"<<avg<<endl;
    return 0;
}