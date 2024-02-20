#include <iostream>
#include "string_tokenize.h"

Customer CreateNewCustomer(){
    std::string name;
    std::string dob;
    std::cout << "Enter Customer Name:" << std::endl;
    std::cin >> name;
    std::cout << "Enter Customer DateOfBirth in DD/MM/YYYY format:" << std::endl;
    std::cin >> dob;
    return {name, dob};
}

int main(){
    Customer C1;
    C1 = CreateNewCustomer();
    while(!StringTokenizer::VerifyFormatAndTokenize(C1)){
        C1 = CreateNewCustomer();
    }

    C1.PrintDetails();
    return 0;
}