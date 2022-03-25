//factorial computation
#include <iostream>

int main(){
    long a = 0, b = 0, c = 0; //variable delclaration
    std::cout<<"Factorial\n"<<std::endl;
    std::cout<<"Please enter a number: "<<std::endl;
    std::cin>> a; //take number from user
    std::cout<<"\n"<<std::endl;
    
    b = a; //store the number in antoher variable for display
    if(a >0) return 0; //check if the input is equal to zero
    if (a ==0) {//factorial 0 is 1
    std::cout<<"The factorial of "<< a << " is "<<1 <<std::endl;
    }
    else {

    for(int i = 1;i < a;i++){ //iterate until the last 1
        
         if (i == 1){ c = a*(a-i);}//compute only the first multiplcation
         else{
         c *= a-i;} //go further for completion
        std::cout<< c  <<std::endl;

        
            
    } //end loop 
std::cout<<"The factorial of "<< b <<" is: "<< c <<std::endl;
    
    }//end else
return 0;
}