#ifndef MYSTRING_HPP
#define MYSTRING_HPP

class MyString {
private:
    char *str{nullptr};
public:
    MyString();             //default constructor
    MyString(const char*s); //overloaded constructor
    MyString(const MyString &source); //copy constructor
    ~MyString();
    
    MyString &opertor= (const MyString &rhs); //copy assignment
    
    void display() const;
    
    int get_length() const;
    const char*get_str() const;
};

#endif // MYSTRING_HPP
