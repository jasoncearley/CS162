#include "mystring.h"

//**************************************************
// Constructor to initialize the str member        *
// with a C-string constant.                       *
//**************************************************
MyString::MyString(const char *sptr)
{
    len = strlen(sptr);
    str = new char[len + 1];
    strcpy(str, sptr);
}

//*************************************************
// Copy constructor.                              *
//*************************************************
MyString::MyString(const MyString &right)
{
    str = new char[right.len + 1];
    strcpy(str, right.str);
    len = right.len;
}

//************************************************
// Overloaded = operator.                        *
//************************************************
MyString MyString::operator=(MyString right)
{
    if (len != 0) delete [] str;
    str = new char[right.len + 1];
    strcpy(str, right.str);
    len = right.len;
    return *this;
}

//**************************************************
// Overloaded += operator.                         *
// Concatenates the str member of right to the     *
// str member of the calling object.               *
// Returns the calling object.                     *
//**************************************************
MyString MyString::operator+=(MyString right)
{
    char *temp = str;
    str = new char[len + right.len + 1];
    strcpy(str, temp);
    strcat(str, right.str);
    if (len != 0) delete [] temp;
    len += right.len;
    return *this;
}

//*********************************************************
// Overloaded == operator.                                *
//*********************************************************
bool operator==(MyString left, MyString right)
{
    return strcmp(left.str, right.str) == 0;
}

//*********************************************************
// Overloaded != operator.                                *
//*********************************************************
bool operator!=(MyString left, MyString right)
{
    return strcmp(left.str, right.str) != 0;
}

//********************************************************
// Overloaded > operator.                                *
//********************************************************
bool operator>(MyString left, MyString right)
{
    return (strcmp(left.str, right.str) > 0);
}

//***********************************************************
// Overloaded < operator.                                   *
//***********************************************************
bool operator<(MyString left, MyString right)
{
    return (strcmp(left.str, right.str) < 0);
}

//*****************************************************
// Overloaded >= operator.                            *
//*****************************************************
bool operator>=(MyString left, MyString right)
{
    return (strcmp(left.str, right.str) >= 0);
}

//**********************************************************
// Overloaded <= operator.                                 *
//**********************************************************
bool operator<=(MyString left, MyString right)
{
   return  (strcmp(left.str, right.str) <= 0);
}

//*************************************************
// Overloaded stream insertion operator (<<).     *
//*************************************************
ostream &operator<<(ostream &strm, MyString obj)
{
    strm << obj.str;
    return strm;
}

//*************************************************
// Overloaded stream extraction operator (>>).    *
//*************************************************
istream &operator>>(istream &strm, MyString &obj)
{
   // Read the string 
   char buffer[SIZE];   
   strm.getline(buffer, SIZE);
   // Invoke the convert constructor and overloaded assignment
   obj = buffer;
   return strm;
}