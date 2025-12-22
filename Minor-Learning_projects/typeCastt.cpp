// Console Mini Project to show Type Converstion efficiently.
#include <iostream>
#include <iomanip>
#include <string>
#include <cctype>
#include <vector>

using namespace std  ;

class typeCast
{
    int iValue;
    char cValue ;
    public :
    void cin_int()
    {
        cout << " Enter Value : " ; cin >> iValue ;
     //   return iValue ;
        
    }
    void cin_char()
    {
      cout << " Enter char : "   ; cin >> cValue ;
      
    }
    void char2int()
    {
        char ch ; ;
        cout << "Enter char to convert it into int : " ; cin >>  ch ;
        cout << "Its  int is-------> : " << int(ch) << endl << endl;
    }
    void int2char()
     { int ch ;
     int attempt = 0 ;
     bool isExit = false ;
     cout << "Enter 'int'' to  convert it into char { it is Beta } :";  

         while ( !(cin>>ch) ||  isExit == true)
         {
             attempt++ ;
             cout << "Try again : ";
             cin.clear();
             cin.ignore( numeric_limits<streamsize>::max() , '\n');
             
         }
         if ( !(isExit))
         {
         cout << endl <<    " CHAR   of  " << ch << " is -----> '" << char(ch)  <<"' { If nothing is displayed it means hidden }"<< endl ; } 
     }
     void lower2upper()
     {  cout << "Enter Lower Case Letter only  ";
        cin_char();
        cout << " Upper Case of  '" <<    cValue <<  "' is -----> " << char (int(cValue) -32) << endl ;
     } 
     
     void upper2lower()
     {
          cin_char();
          if ( cValue>=65 && cValue<= 91)   
          {    cout << " Upper Case of '"<<cValue<<"' is ---> " << char ( int (cValue) +32) << endl ;
          }
          else { cout << " Enter Capital Letters Only ! try again :"; upper2lower(); }
     }
     
     void strUpper2lower()
     {
         
         string ch ;                  
         cout << "Enter string : " ; cin >> ch  ;
         cout <<  ch << " To --->  ";
         for ( auto str :   ch)
         {
              if ( int(str) >=65 && int(str)<=90)
              { cout << char(int(str) + 32) ;  }
              else {cout << str ; }                                         
         }
         
     }
  void strLower2upper()
     {
         
         string ch ;                  
         cout << "Enter string : " ; cin >> ch  ;
         cout <<  ch << " To --->  ";
         for ( auto str :   ch)
         {
              if ( int(str) >=97 && int(str)<=122)
              { cout << char(int(str) - 32) ;  }
              else {cout << str ; }                                         
         }
         
     }
    void typeCastMenu()
    {
         cout << "\n\nChoose From The Following ...\n";
         cout << " 1. char to int . \n 2. int to char \n 3.Convert 'char' lowerCase2Upper\n 4 .Convert ' char ' Upper case to Lower \n 5. Convert string to Lower Case. \n 6. Convert string to UpperCase \n" ;
         cout << "11. Exit \n\n Enter your choice : "   ;
     }   
    
};
int main()
{
    typeCast t;
    
    while ( true )
    {
         int choice ;
         t.typeCastMenu();   
         cin >> choice ;
         
         switch(choice)
         {
              case 1 :     {    t.char2int(); break ; }
              case 2 :     {    t.int2char(); break ; } 
              case 3 :     {    t.lower2upper(); break ; }
              case 4 :     {    t.upper2lower(); break ; }
              case 5 :     {    t.strUpper2lower(); break ; }
              case 6 :     {    t.strLower2upper(); break ; }
              case 11  :  { cout << " Thanks for Visiting See You Next time ! \n" ; exit(0); break;}
               default :  cout << "Try again with a different choice \n"  ;
            
            
         }
            
    }
    
    return 0 ;
}