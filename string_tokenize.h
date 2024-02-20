#pragma once
#include <string>
#include <iostream>
#include "customer.h"

class StringTokenizer {
public:
    StringTokenizer(){}
    static bool VerifyFormatAndTokenize(Customer& customer);
};