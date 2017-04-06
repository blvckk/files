#include <fstream>
#include <iostream>

using namespace std;

int main( )
{
   //create some data
   short int a = -6730;
   float b = 68.123; 
   char c = 'J';

ofstream testfile {"abc.bin", ios::binary};
if (testfile)
{
testfile.write (reinterpret_cast<char*> (&a), sizeof(a));
testfile.write (reinterpret_cast<char*> (&b), sizeof(b));
testfile.write (reinterpret_cast<char*> (&c), sizeof(c));
}
else 
//cout<<a<<" "<<b<<" "<<c;//display data to console (i.e. as formatted chars)

   cout<<"Error opening file";
 
//return 0;
}
