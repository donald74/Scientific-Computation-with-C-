//leapyear computation
#include <iostream>
#include <string>
#include <algorithm>
bool leapYear(int year);
bool is_number(const std::string& s);
int main(int argc, char** argv){

    std::string year; int year_;
    std::cout<<"Enter a year of your choise "<<std::endl;
    std::cin>>year; //take the year from user
    
    if(is_number(year)){ //check if it is an integer

    leapYear(std::stoi(year));}
    else{
        exit(1);
    }

}

bool leapYear(int year){

if(year%4==0 && year%100 ==0 && year%400 ==0){
    std::cout<<"It is a leap year"<<std::endl;
    return 1;
    }
    else{
        std::cout<<"It is not a leap year"<<std::endl;
        exit(-15);
    }
}
bool is_number(const std::string& s)
{
    return !s.empty() && std::find_if(s.begin(), 
        s.end(), [](unsigned char c) { return !std::isdigit(c); }) == s.end();
}
