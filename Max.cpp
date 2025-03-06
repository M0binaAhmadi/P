#include <iostream>
using namespace std;
int Max( int a[] , int length){
    int maxVal=a[0];
    for(int i=0;i<length;i++){
    if(a[i]>maxVal){
        maxVal=a[i];
    }
}
    return maxVal;
}
int main(){
    int numbers[]={10,20,30,40,50};
    int count=sizeof(numbers)/sizeof(numbers[0]);
    int maxValue=Max(numbers,count);
    cout<<"Max:"<<maxValue<<endl;
    return 0;
}