#include <iostream>
#include<string>
using namespace std;

class People{
 private:
    string names[10]={
        "Ali","Sara","Mohammad","Fatemeh",
        "Reza","Zahra","Amir","Narges","Atefeh",
        "Mehdi"
    };
    int ages[10]={28,24,30,23,35,27,29,26,31,23};
    
    double calculateAverageAge()
    {
        int sum=0;
    for(int i=0;i<10;++i){
        sum+=ages[i];
    }
    return(double)sum/10;
}
public:
 void displayPeopleInfo(){
    cout<<"Names and Ages:\n";
    for(int i=0;i<10;++i){
        cout<<names[i]<<":"<<ages[i]<<"years\n";
    }
    cout<<"Average Age:"<<calculateAverageAge()<<"years\n";
  }
};
int main(){
    People people;
    people.displayPeopleInfo();
    return 0;
}