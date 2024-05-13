#include <iostream> 

int main(){

    int firstInt{};                                         
    int secondInt{};                                      

    //first varible assigmment 
    std::cout << "Please enter an integer" << '\n';         
    std::cin >> firstInt;                                 
    
    //second variable assignemnt
    std::cout << "Please enter a second integer" << '\n';  
    std::cin >>  secondInt;                                 

    // expressions 
    std::cout << firstInt << "+" << secondInt << "=" << firstInt + secondInt << '\n';     
    std::cout << firstInt << "-" << secondInt << "=" << firstInt - secondInt << '\n';    
    
    return 0;
}
