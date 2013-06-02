#include <iostream> 
#include <iomanip>  
#include <cmath>
#include <stdlib.h>
using namespace std;

int main()
{
    setlocale(LC_ALL,"Russian");
   int amount; 
   int principal = 100000; 
   int dollars; 
   int cents; 
   double rate = .05; 

   cout << "Год" << setw( 20 ) << "         Сума на депозите\n";

   for ( int year = 1; year <= 100; year++ )
   {
      amount = ( principal * pow( 1.0 + rate, year ) );

      cents = amount % 100;
      dollars = amount / 100;  

      cout << setw( 4 ) << year << setw( 20 ) << dollars << '.';
      if ( cents < 10 )
         cout << '0' << cents << endl;
      else 
         cout << cents << endl;
   }
   system("pause");
}