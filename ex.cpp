#include <iostream>
 
using namespace std;
 
class Test
{
public:
     explicit Test(int a)
     {
          m_data = a;
     }
 
     void show()
     {
          cout << "m_data = " << m_data << endl;
     }
 
private:
     int m_data;
};
 
int main(void)
{
     Test t = 2;   // 将一个常量赋给了一个对象
//     Test t = Test(2);
      t.show();
}
/* $ g++ ex.cpp
ex.cpp: In function 'int main()':
ex.cpp:24:15: error: conversion from 'int' to non-scalar type 'Test' requested
 
If removing the key word 'explicit' +  'Test t = 2;'
or 'explicit' + 'Test t = Test(2);' 
then it can be compiled correctly.
 
 */
