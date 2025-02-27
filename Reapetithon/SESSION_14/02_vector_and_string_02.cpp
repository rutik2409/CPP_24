#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

void string_demo(void);
void vector_demo(void);

int main(void)
{
    string_demo();
    vector_demo();
    return (0);
}

void string_demo(void)
{
    string s1_rs;
    string s2_rs("Hello");
    string s3_rs(s2_rs);

    cout << "-----STRING DEMO ENTER-----" << endl;
    cout << "s1_rs:" << s1_rs << endl;    // empty
    cout << "s2_rs:" << s2_rs << endl;    // hello
    cout << "s3_rs:" << s3_rs << endl;    // hello
    cout << "addr(s2_rs):" << &s2_rs << endl;
    cout << "addr(s3_rs):" << &s3_rs << endl;
    cout << "contents of s2_rs and s3_rs are same but addresses are not" << endl
        << "this proves that s3_rs is a clone of s2_rs" << endl;

    cout << "Show a string char by char:" << endl;
    cout << "METHOD 1: Using index:" << endl;

    for(string::size_type i = 0; i != s2_rs.size(); ++i)
        cout << "s2_rs[" << i << "]:" << s2_rs[i] << endl;
    cout << "------METHOD 1 END------" << endl;

    cout << "METHOD 2: Using Iterator:" << endl;
    for(string::iterator iter = s2_rs.begin(); iter != s2_rs.end(); ++iter)
        cout << "*iter =" << *iter << endl;
    cout << "-----METHOD 2 END-----" << endl;
    cout << "------STRING DEMO LEAVE-----" << endl;
}

// string : DYNAMICALLY RESIZABLE CHARACTER ARRAY
// TIME: src->exe (static)
// exe start -> exe end (dynamic/run)

void vector_demo(void)
{

}

// LIBRARY IMPLEMENTATION
/*
Inside Header file STRING

string

namespace std
{
    class string
    {
        public:
            typedef unsigned long long int size_type;
    };
}

-------------------------------------------
CLIENT

#include <string>

using std::string;

int main(void)
{

    for(string::size_type i; )
}

// without
// using std::string

int main(void)
{
    for(std::string::size_type i)
}

namespace std
{
    class string
    {
        public:
            typedef unsigned short size_type;
    };
}

string::size_type i;

// s2_rs.size();   std::string::size(&s2_rs)

namespace std
{
    class string
    {
        public:
            typedef unsigned long long int size_type;
            size_type size()
            {
                // return the length of string pointed
                // by this pointer
            }
    };
}

*/

// PRINCIPLE: DON'T CHANGE THE LENGTH OF ITERABLE WHILE ITERATING ON IT.
// ITERABLE -> AN OBJECT ON WHICH ITERATION IS BEING PERFORMED.