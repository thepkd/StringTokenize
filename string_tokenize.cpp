#include "string_tokenize.h"

bool StringTokenizer::VerifyFormatAndTokenize(Customer& customer){
    if(customer.m_dob.length()!=10){
        std::cout << "DOB Length not 10! Format Invalid! Try Again!" << std::endl;
        return false; //Early return
    }

    std::string dob = customer.m_dob;
    std::string delimiter("/");
    std::string token1 = dob.substr(0, dob.find(delimiter));
    if (token1.length() != 2) {
        std::cout << "Date Lengths Invalid! Try Again" << std::endl;
        return false;
    }

    dob = dob.substr(token1.length() + delimiter.length());
    std::string token2 = dob.substr(0, dob.find(delimiter));
    if (token2.length() != 2) {
        std::cout << "Month Lengths Invalid! Try Again" << std::endl;
        return false;
    }

    dob = dob.substr(token2.length() + delimiter.length());
    std::string token3 = dob.substr(0, dob.find(delimiter));
    if(token3.length() != 4){
        std::cout << "Year Lengths Invalid! Try Again" << std::endl;
        return false;
    }

    customer.tokenized_dob.emplace_back(token1);
    customer.tokenized_dob.emplace_back(token2);
    customer.tokenized_dob.emplace_back(token3);
    return true;
}