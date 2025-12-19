#include <iostream>
#include <cstring>
using namespace std ;
typedef struct Person {
    int id ;
    char name[20];
} P;
int main()
{
    P p1 = { 1, "Anuj" } ;
    cout << p1.id ;
    cout <<endl <<p1.name ;
  P * ptr = &p1 ;
  ptr->id = 15 ;
  
 strcpy(ptr->name , "Neha");
  
  cout << endl <<ptr->id ;
  cout << endl <<ptr->name;
   
    return 0 ;
}