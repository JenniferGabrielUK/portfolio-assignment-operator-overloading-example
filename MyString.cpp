#include "MyString.hpp"
#include <cstring>
#include <iostream>

using namespace std;

MyString::MyString() //no-arguements constructor
    : str{nullptr}
{
    str = new char[1];
    *str = '\O';
}

MyString::MyString(const char* s) //overloaded constructor
    : str{nullptr} {
        if (s==nullptr) {
            str = new char[1];
            *str = '\O'
        } else {
            str = new char (std::strlen(s)+1];
            std::strcpy(str, s)
        }
}

MyString:: MyString(const MyString &source) //copy constructor
    : str{nullptr} {
    str = new char [std::strlen(source.str) +1];
    std::strcpy(str, source.str);
}

MyString &MyString:: opertor=(const MyString &rhs) { //copy assignement overloaded = operator
        std::cout << "Copy Assignment" << std::endl;
        if (this == &rhs)
            return *this;
        delete [] this->str;
        str = new char[std::strlen(rhs.str) + 1];
        std::strcpy(this->str, rhs.str);
        return *this;
}

MyString::~MyString()
{
    delete [] str;
}

void MyString::display() const {
    std::cout << str << " : " << get_length() << std::endl;
}

int MyString::get_length() const {
 return std::strlen(str);    
}

const char* MyString::get_str() const {
    return str;
}
