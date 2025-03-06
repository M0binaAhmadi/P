#include <iostream>
#include<unordered_map>
#include<vector>
#include<algorithm>
using namespace std;
vector<int>Mood(int a[],int size){
    unordered_map<int,int>countMap;
    for(int i=0;i<size;++i){
        countMap[a[i]]++;
    }
    int maxCount=0;
    vector<int>modes;
    for(const auto&pair:countMap){
        if(pair.second>maxCount){
    modes.clear();
    modes.push_back(pair.first);
    maxCount=pair.second;
        }
        else if (pair.second==maxCount){
        modes.push_back(pair.first);
        }
    return modes;
}
    int main(){
    int numbers[]={10,20,30,20,30,40,30};
    int size=sizeof(numbers)/sizeof(numbers[0]);
    vector<int>modes=Mood(numbers,size);
    cout<<"modes: ";
    for(int mode:modes){
        cout<<mode<<" ";
    }
    cout<<endl;
    return 0;
}