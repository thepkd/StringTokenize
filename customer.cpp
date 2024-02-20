#include "customer.h"

void Customer::PrintDetails(){
    std::cout << " Name : " << m_name << std::endl;
    std::cout << " DOB : " << tokenized_dob[0] << "-" << tokenized_dob[1] << "-" << tokenized_dob[2] << std::endl; 
}