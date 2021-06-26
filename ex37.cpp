#include <iostream>
using namespace std;
 int main() 
{
 
   int i = 1;
   while (true) 
   {
      ++i;
      if ((i % 3) == 0) 
      continue;
      if (i== 50) 
      break;
      if ((i % 2) == 0) 
      {
         i += 3;
      } 
      else 
      {
         i -= 3;
      }
      cout << i << " ";
   }
   cout << endl;
   return 0;
}

