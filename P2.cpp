#include <iostream>
#include<string>
class People{
private:
    const std::string names[10]={
        "Ali","Sara","Mohammad","Fatemeh",
        "Reza","Zahra","Amir","Narges","Atefeh",
        "Mehdi"
    };
    const int ages[10]={28,24,30,23,35,27,29,26,31,23};
    double calculateAverageAge() const{int sum=0;
    for(int i=0;i<10;++i){
        sum+=ages[i];
    }
    return static_cast<double>(sum)/10;
}
public:
void display() const{
    std::cout<<"Names and Ages:\n";
    for(int i=0;i<10;++i){
        std::cout<<names[i]<<":"<<ages[i]<<"years\n";
    }
    std::cout<<"Average Age:"<<calculateAverageAge()<<"years\n";
  }
};
int main(){
    People people;
    people.display();
    return 0;
}