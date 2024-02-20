#pragma once
#include <string>
#include <vector>
#include <iostream>

class StringTokenizer; //Early Declaration

class Customer {
private:
	std::string m_name;
	std::string m_dob;
	std::vector<std::string> tokenized_dob;
	friend class StringTokenizer;
public:
	Customer() = default;
	Customer(std::string name, std::string dob) : m_name(name), m_dob(dob) {}

	void PrintDetails();
};
