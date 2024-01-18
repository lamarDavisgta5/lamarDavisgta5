# include <iostream>
# include <random>
# include <chrono>
# include <cmath>
# include "const.h"
# include <iomanip>


void derivative () {
  std :: cout << "threre is a function f ( x ) = 3x^2- x " << '\n';
  std :: cout << "by using of the derivative and the x point the will enter by user " << '\n';
  std :: cout << "the derivative formila = f ( a ) = lim f ( h + a ) - f ( a ) / h " << '\n';
  std :: cout << "h ---> 0 " << '\n'; 
  std :: cout << '\n';
  std :: cout << "enter any key to continue : " << '\n';
  std :: string key {};
  std :: cin >> key; 
}

char select_Item () {
  std :: cout << "enter item A : caculate the y of the equation of the tengent line " << '\n';
  std :: cout << "enter item B : caculate the slope of the tangent line by derivative " << '\n';
  std :: cout << "enter item C : make the equation of the tangent line by caculateing the y of the function " << '\n';
  std :: cout << "enter item D : caculate the function by the equation of the tengent line " << '\n';
  std :: cout << "enter item E : caculate the item A , B , C , D " << '\n';  
  std :: cout << "and the slope of the tangent line " << '\n';
  char opt {};
  std :: cin >> opt;
  std :: cout << '\n'; 

  
return opt;
}


double getX () {
  std :: cout << "the length point of the function : " << '\n';
  double a {};
  std :: cin >> a;

  if ( a - static_cast < int > ( a ) != 0 ) {
    std :: cout << "not suitable input " << '\n'; 
    return getX ();
  }

return a;
}

void itemA () {
  int x { static_cast < int > ( getX () ) }; 
  std :: cout << "the weight of the function 3x^2 - x is : " << ( 3 * ( std :: pow ( x , 2 ) ) - x ) << '\n';

}

void itemB () {
  int x { static_cast < int > ( getX () ) };
  int xpower2 { static_cast < int > ( std :: pow ( x , 2 ) ) };
  int twoH { 2 * ( x ) }; 
  std :: cout << "the formila of the in lenght of the " << x << " is : " << " ( " << "( 3 * (" " h2 " << " + " << x << " + " << " 2 * ( h + " << x << " ) - ( h + 1 ) )  - " << " " << ( 3 * ( std :: pow ( x , 2 ) ) - x ) << " ) " << " / h " << '\n';
  std :: cout << "based on this formila the slope of the tangent line is : " <<  ( ( ( 3 * ( xpower2 ) ) + ( 3 *  ( twoH ) ) - x ) - ( 3 * ( std :: pow ( x , 2 ) ) ) ) << '\n';  

}

void itemC () {
  int x { static_cast < int > ( getX () ) };
  int xpower2 { static_cast < int > ( std :: pow ( x , 2 ) ) };
  int twoH { 2 * ( x ) }; 
  std :: cout << "the equation of the tangent line  : y - yo = m ( x - x0 ) " << '\n';
  int m { static_cast < int > ( ( ( ( 3 * ( xpower2 ) ) + ( 3 *  ( twoH ) ) - x ) - ( 3 * ( std :: pow ( x , 2 ) ) ) ) ) };
  int y0 { static_cast < int > ( ( 3 * ( std :: pow ( x , 2 ) ) - x ) ) };
  std :: cout << '\n'; 
  std :: cout << "based on the weight of the function and the slope of the tangent line the equation is : " << " y - " << y0 << " = " << m << " ( x - " << x << " ) " << '\n'; 
}

void itemD () {
  int x { static_cast < int > ( getX () ) };
  int xpower2 { static_cast < int > ( std :: pow ( x , 2 ) ) };
  int twoH { 2 * ( x ) }; 
  int m { static_cast < int > ( ( ( ( 3 * ( xpower2 ) ) + ( 3 *  ( twoH ) ) - x ) - ( 3 * ( std :: pow ( x , 2 ) ) ) ) ) };
  int y0 { static_cast < int > ( ( 3 * ( std :: pow ( x , 2 ) ) - x ) ) };
  std :: cout << "the function by the slope of the tangent line equation is : " << " y = " << m << " x " << -( m * x ) + y0 << '\n';  

}

bool quit () {
  std :: cin >> std :: boolalpha;
  std :: cout << "enter true : make random numbers between item A and B  " << '\n';
  std :: cout << "enter false : quit the program " << '\n';
  bool tOrF {};
  std :: cin >> tOrF;

return tOrF;
}

void itemE () {
  int x { static_cast < int > ( getX () ) }; 
  std :: cout << "the weight of the function 3x^2 - x is : " << ( 3 * ( std :: pow ( x , 2 ) ) - x ) << '\n';
  std :: cout << '\n'; 
  int xpower2 { static_cast < int > ( std :: pow ( x , 2 ) ) };
  int twoH { 2 * ( x ) };
  std :: cout << "the formila of the in lenght of the " << x << " is : " << " ( " << "( 3 * (" " h2 " << " + " << x << " + " << " 2 * ( h + " << x << " ) - ( h + 1 ) )  - " << " " << ( 3 * ( std :: pow ( x , 2 ) ) - x ) << " ) " << " / h " << '\n';
  std :: cout << "based on this formila the slope of the tangent line is : " <<  ( ( ( 3 * ( xpower2 ) ) + ( 3 *  ( twoH ) ) - x ) - ( 3 * ( std :: pow ( x , 2 ) ) ) ) << '\n';  
  std :: cout << '\n'; 
  std :: cout << "the equation of the tangent line  : y - yo = m ( x - x0 ) " << '\n';
  int m { static_cast < int > ( ( ( ( 3 * ( xpower2 ) ) + ( 3 *  ( twoH ) ) - x ) - ( 3 * ( std :: pow ( x , 2 ) ) ) ) ) };
  int y0 { static_cast < int > ( ( 3 * ( std :: pow ( x , 2 ) ) - x ) ) };
  std :: cout << '\n'; 
  std :: cout << "based on the weight of the function and the slope of the tangent line the equation is : " << " y - " << y0 << " = " << m << " ( x - " << x << " ) " << '\n'; 
  std :: cout << '\n'; 
  std :: cout << "the function by the slope of the tangent line equation is : " << " y = " << m << " x " << -( m * x ) + y0 << '\n'; 
  std :: cout << '\n';
  bool tOrF { quit () };
  std :: cout << std :: setprecision ( 4 ); 
  
  if ( tOrF ) {
    std :: cout << "you entered true " << '\n'; 
    random ( y0 , m );

  }

  else
    std :: cout << "you entered false " << '\n'; 
 
}


void answer () {
  int item { select_Item () };
  
  switch ( item ) {
    
    case 'A' :
      std :: cout << "you entered item A " << '\n';
      itemA ();
      return;

    case 'a' :
      std :: cout << "you entered item A " << '\n';
      itemA (); 
      return;

    case 'B' :
      std :: cout << "you entered item B " << '\n';
      itemB ();
      return;

    case 'b' :
      std :: cout << "you entered item B " << '\n';
      itemB (); 
      return;

    case 'C' :
      std :: cout << "you entered item C " << '\n';
      itemC ();
      return;

    case 'c' :
      std :: cout << "you entered item C " << '\n';
      itemC (); 
      return;

    case 'D' :
      std :: cout << "you entered item D " << '\n';
      itemD ();
    return;

    case 'd' :
      std :: cout << "you entered item D " << '\n';
      itemD (); 
      return;

    case 'E' :
      std :: cout << "you entered item E " << '\n';
      itemE ();
      return;

    case 'e' :
      std :: cout << "you entered item E " << '\n';
      itemE ();
      return;

    default :
      std :: cout << '\n';
      std :: cout << '\n';
      std :: cout << "not suitable input " << '\n';    
      return answer ();

  }


}


int main () {
  derivative (); 
  answer (); 
  std :: cout << "the program has ended press any key to quit : " << '\n';
  std :: string key {};
  std :: cin >> key;

return 0; 
}
