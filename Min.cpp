#include <iostream>
using namespace std;
int Min( int a[] , int length){
    int minVal=a[0];
    for(int i=0;i<length;i++){
    if(a[i]<minVal){
        minVal=a[i];
    }
}
    return minVal;
}
int main(){
    int numbers[]={10,20,30,40,50};
    int count=sizeof(numbers)/sizeof(numbers[0]);
    int minValue=Min(numbers,count);
    cout<<"Min:"<<minValue<<endl;
    return 0;
}