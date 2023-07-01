#include <iostream>
#include "operations.h"

using namespace std;

int main()
{
   point start, end, homest, tweez;

   cout << "enter cut coordinates:" << endl;;
   scalpel(&start);

   while(1)
   {
      cout << "enter hemostat point:" << endl;
      hemostat(&homest);
   
      cout << "enter tweezers point:" << endl;
      tweezers(&tweez);

      cout << "enter suture coordinates:" << endl;;
      suture(&end);

      if(start.x == end.x && start.y == end.y)
       {
          break;
       }
        else
        {
          cout << "opration in progress" << endl;

        }
   }

   cout << "operation completed";

   


    return 0;
     
}