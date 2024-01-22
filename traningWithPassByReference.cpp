# include <iostream>
# include <random>
# include <chrono>
double gravity { 0 };


void start_Of_The_Build () {
  std :: cout << "we want to make an accelaration for a solid object by getting force into object " << '\n';
  std :: cout << "enter any key to continue : " << '\n';
  std :: string key {};
  std :: cin >> key;

}

char solid_situation () {
  std :: cout << "enter the situation of the object for calculating the force " << '\n';
  std :: cout << '\n';
  std :: cout << '\n';
  std :: cout << "enter A : if the object is in the Horizontal surface without firction force. " << '\n';
  std :: cout << "enter B : if the object is in the horizontal surface surface moving in the right direction ." << '\b' << "and the accelaration is in the right direction. " << '\n';
  std :: cout << "enter C : if the object is in the vertical direction with an accelaration in the up direction is goning up. " << '\n';
  std :: cout << "enter D : if the object is in the vertical direction with an accelaration in the down dircetion is going down. " << '\n';                
  std :: cout << "enter E : calculate the force in A , B , C and D situations. " << '\n';
  std :: cout << "you can make random numbers between itmes if you enter item E " << '\n';
  std :: cout << "enter your item : " << '\n'; 
  char situation {};
  std :: cin >> situation;
  char& semi_situation { situation };

  if ( semi_situation == 'a' || semi_situation == 'b' || semi_situation == 'c' || semi_situation == 'd' ) {
    std :: cout << "enter the item in capital letters " << '\n';
    std :: cout << '\n'; 
    return solid_situation ();
  }

return semi_situation; 
}

double getMass () {
  again :
  std :: cout << "enter the mass of the object in kg : " << '\n';
  double mass {};
  std :: cin >> mass;
  
  if ( mass == 0 || mass < 0 ) {
    std :: cout << "not suitable input " << '\n';
    std :: cout << "try again " << '\n';
    std :: cout << '\n';
    goto again;
  } 


return mass;
}

double accelaration () {
  again2:
  std :: cout << "enter the accelaration of the object in m / s2 : " << '\n';
  double a {};
  std :: cin >> a;

  if ( a == 0 || a < 0 ) {
    std :: cout << "not suitable input " << '\n';
    std :: cout << "try again " << '\n';
    std :: cout << '\n';
    goto again2;
  } 


return a; 
}

double friction_coefficient () {
  std :: cout << "enter the friction coeffcient in N : " << '\n';
  double fk {};
  std :: cin >> fk;

return fk; 
}

double force_In_Item ( double& semi_a ) {
  double M { 1 };
  M = getMass (); 
  const double& semi_M { M };
  semi_a = accelaration ();
  std :: cout << "the force in A item is : " << M * semi_a << 'N' << '\n'; 

return  semi_M * semi_a;
}

double force_In_Item_B () {
  double M { getMass () }; 
  double a { accelaration () };
  const double& semi_a { a }; 
  double mk { friction_coefficient () }; 
  const double& semi_gravity { gravity };
  gravity += 9.8;
  std :: cout << "the force in item B is : " << ( M * semi_a ) + ( mk * M * semi_gravity ) << '\n'; 

return ( M * semi_a ) + ( mk * M * semi_gravity );
}


double force_In_Item () {
  double M { getMass () };
  const double& semi_M { M };
  const double& semi_gravity { gravity };
  const double a { accelaration () };
  const double& semi_a { a }; 
  gravity += 9.8;
  std :: cout << "the force in item C is : " << ( semi_M * semi_a ) + ( semi_M * gravity ) << 'N' << '\n'; 

return ( semi_M * semi_a ) + ( semi_M * gravity ); 
}


double force_In_Item_D () {
  double mass { getMass () }; 
  double a { accelaration () };
  gravity += 9.8;
  const double semi_gravity { gravity };

  if ( ( ( mass * a ) - ( mass * semi_gravity ) ) < 0 )  
  std :: cout << "the force in item D : " << ( ( mass * a ) - ( mass * semi_gravity ) ) * -1 << 'N' <<'\n';

  else
  std :: cout << "the force in item D : " << ( ( mass * a ) - ( mass * semi_gravity ) ) << 'N' <<'\n';

return ( ( mass * a ) - ( mass * semi_gravity ) ) * -1;
}

double number_Of_The_sequnce () {
  std :: cout << "enter the number of the sequnce : " << '\n';
  double SN {};
  std :: cin >> SN;

  if ( SN - static_cast < int > ( SN ) ) {
    std :: cout << "do not enter floating point number " << '\n';
    std :: cout << "try again " << '\n';
    std :: cout << '\n';
    return number_Of_The_sequnce ();
  }

return SN;
}


bool continue_Or_Quit () {
  std :: cin >> std :: boolalpha;
  std :: cout << "enter true : to see which of the random numbers are prime or which number are odd or even " << '\n';
  std :: cout << "enter false : quit the progeram " << '\n';
  bool trueOrFlase {};
  std :: cin >> trueOrFlase;

return trueOrFlase;
}

char prime_Or_Odds_And_Evens () {
  std :: cout << "enter P : to see which of the random numbers are prime ( at least first 10 numbers can detected ) " << '\n';
  std :: cout << "enter O : to see which of the random numbers are odd and which of the random numbers are evens " << '\n';
  char P_Or_O {};
  std :: cin >> P_Or_O;

  if ( P_Or_O != 'P' && P_Or_O != 'O' ) {
    std :: cout << "you must enter P or O " << '\n';
    std :: cout << "try again " << '\n';
    std :: cout << '\n';
    return prime_Or_Odds_And_Evens ();
  }

return P_Or_O;
}

void randomNumbers ( int& item1 , int& item2  ) {
  int sequnce_Number { static_cast < int > ( number_Of_The_sequnce () ) }; 
  std :: mt19937_64 random { static_cast < unsigned int > ( std :: chrono :: steady_clock :: now () . time_since_epoch () . count () ) };
  std :: mt19937_64 random2 { random }; 
  std :: mt19937_64 random3 { random2 };   
  std :: mt19937_64 random4 { random3 }; 
  std :: mt19937_64 random5 { random4 }; 
  std :: mt19937_64 random6 { random5 }; 
  std :: mt19937_64 random7 { random6 }; 
  std :: mt19937_64 random8 { random7 }; 
  std :: mt19937_64 random9 { random8 }; 
  std :: mt19937_64 random10 { random9 }; 
  std :: mt19937_64 random11 { random10 };

  if ( item1 > item2 ) {
    std :: cout << "your random number between " << item2 << " and " << item1 << " is : " << '\n';
    std :: uniform_int_distribution period ( item2 , item1 );

    for ( int counter { 1 }; counter <= sequnce_Number; ++ counter ) {
      std :: cout << period ( random ) << '\t';
      
      if ( counter % 10 == 0 )
        std :: cout << '\n';
        
    }
    
    std :: cout << '\n';
    bool cOQ { continue_Or_Quit () };

    if ( cOQ ) {
      std :: cout << "you entered true " << '\n';
      char PO { prime_Or_Odds_And_Evens () };

      if ( PO == 'P') {
        std :: cout << "you enter to see which of the random numbers are prime " << '\n';
        std :: cout << "the first ten of your random numbers will be check by dividing the each number to 2 to 10 " << '\n';
        std :: cout << "if all the divison was not zero the number is prime " << '\n';
         std :: cout << "weeeeeee" << '\n';
        std :: cout << "the first number is : " << '\n';
       
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 
        
        std :: cout << "the second number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the third number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the forth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the fiveth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the sixth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the seventh number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the eighth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the ninth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the tenth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 
 
      


      }

      else if ( PO == 'O' ) {
        std :: cout << "you entered to see which of the random numbers are odd or evens " << '\n';
        std :: cout << "odds : 1 " << '\n';
        std :: cout << "evens : 0 " << '\n';

        for ( int counter { 1 }; counter <= sequnce_Number; ++ counter ) {
          std :: cout << period ( random2 ) << " = " << period ( random3 ) % 2  << '\t';
          
          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }
        std :: cout << '\n'; 
      }

    }

    else
      std :: cout << "you entered false " << '\n'; 


  }

  else if ( item1 < item2 ) {
    std :: cout << "your random number between " << item1 << " and " << item2 << " is : " << '\n';
    std :: uniform_int_distribution period ( item1 , item2 );

    for ( int counter { 1 }; counter <= sequnce_Number; ++ counter ) {
      std :: cout << period ( random ) << '\t';
      
      if ( counter % 10 == 0 )
        std :: cout << '\n';
        

    }
    
    std :: cout << '\n';
    bool cOQ { continue_Or_Quit () };

    if ( cOQ ) {
      std :: cout << "you entered true " << '\n';
      char PO { prime_Or_Odds_And_Evens () };

      if ( PO == 'P') {
        std :: cout << "you enter to see which of the random numbers are prime " << '\n';
        std :: cout << "the first ten of your random numbers will be check by dividing the each number to 2 to 10 " << '\n';
        std :: cout << "if all the divison was not zero the number is prime " << '\n';
        std :: cout << "shimis " << '\n';
        std :: cout << "the first number is : " << '\n';
       
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 
        
        std :: cout << "the second number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the third number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the forth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the fiveth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the sixth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the seventh number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the eighth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the ninth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 

        std :: cout << "the tenth number is : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random2 ) << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "2 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random3 ) % 2 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "3" << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random4 ) % 3 << '\n';

        } 

        std :: cout << '\n';
        std :: cout << "4 : " << '\n';

        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random5 ) % 4 << '\n';

        }

        std :: cout << '\n';
        std :: cout << "5 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random6 ) % 5 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "6 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random7 ) % 6 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "7 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random8 ) % 7 << '\n';

        } 

        std :: cout << '\n'; 
        std :: cout << "8 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random9 ) % 8 << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "9 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random10 ) % 9  << '\n';

        } 
        
        std :: cout << '\n';
        std :: cout << "10 : " << '\n';
        
        for ( int counter { 1 }; counter <=1; ++ counter ) {
          std :: cout << period ( random11 ) % 10 << '\n';

        } 
    
 
      }

      else if ( PO == 'O' ) {
        std :: cout << "you entered to see which of the random numbers are odd or evens " << '\n';
        std :: cout << "odds : 1 " << '\n';
        std :: cout << "evens : 0 " << '\n';

        for ( int counter { 1 }; counter <= sequnce_Number; ++ counter ) {
          std :: cout << period ( random2 ) << " = " << period ( random3 ) % 2  << '\t';
          
          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }
        std :: cout << '\n'; 


      }

    }

    else
      std :: cout << "you entered false " << '\n'; 

  }

  else 
    std :: cout << "can not make random number due to a equlity of both items " << '\n';

}

char getItem ( char& I ) {
  again:
  std :: cout << "enter the item one for random numbers : " << '\n';
  char GI {};
  std :: cin >> GI;
  I = GI;
  
  if ( I != 'A' && I != 'B' && I != 'C' && I != 'D' ) {
    std :: cout << "you must enter A,B,C,D " << '\n';
    std :: cout << "try again " << '\n';
    goto again;
  }

return I;
}

char getItem () {
  again:
  std :: cout << "enter the item two for random numbers : " << '\n';
  char GI {};
  std :: cin >> GI;

  if ( GI != 'A' && GI != 'B' && GI != 'C' && GI != 'D' ) {
    std :: cout << "you must enter A,B,C,D " << '\n';
    std :: cout << "try again " << '\n';
    goto again;
  }

return GI;
}

void force_In_Item_E ( double&mass , double& a , double& mk ) {
  mass = getMass ();
  a = accelaration (); 
  mk = friction_coefficient (); 
  const double& semi_gravity { gravity };
  gravity += 9.8;
  std :: cout << "the force in A item is : " << mass * a << 'N' << '\n'; 
  std :: cout << "the force in item B is : " << ( mass * a ) + ( mk * mass * a ) << '\n';
  std :: cout << "the force in item C is : " << ( mass * a ) + ( mass * gravity ) << 'N' << '\n';
  
  if ( ( mass * a ) - ( mass * semi_gravity ) < 0 )
  std :: cout << "the force in item D : " << ( ( mass * a ) - ( mass * semi_gravity ) ) * -1 << 'N' <<'\n';

  else
  std :: cout << "the force in item D : " << ( ( mass * a ) - ( mass * semi_gravity ) ) << 'N' <<'\n';

  int itemA { static_cast < int > ( mass * a ) };
  int itemB { static_cast < int > ( ( mass * a ) + ( mk * mass * a ) ) };
  int itemC { static_cast < int > ( ( mass * a ) + ( mass * gravity ) ) };
  int itemD { static_cast < int > ( ( ( mass * a ) - ( mass * semi_gravity ) < 0  ) ? ( ( mass * a ) - ( mass * semi_gravity ) ) * -1 : ( ( mass * a ) - ( mass * semi_gravity ) )  ) };
  char GI;
  char I1 { getItem ( GI ) };
  again:
  char I2 { getItem () }; 
  
  if ( I1 == I2 ) {
    std :: cout << "do not enter the same item " << '\n';
    std :: cout << "please enter the item two again " << '\n';
    goto again;
  }

  if ( ( I1 == 'A' && I2 == 'B' ) || ( I1 == 'B' && I2 == 'A' ) ) {
    std :: cout << "you entered item A and item B " << '\n';
    randomNumbers ( itemA , itemB ); 

  }

  if ( ( I1 == 'A' && I2 == 'C' ) || ( I1 == 'C' && I2 == 'A' ) ) {
    std :: cout << "you entered item A and item C " << '\n';
    randomNumbers ( itemA , itemC ); 

  }

  if ( ( I1 == 'A' && I2 == 'D' ) || ( I1 == 'D' && I2 == 'A' ) ) {
    std :: cout << "you entered item A and item D " << '\n';
    randomNumbers ( itemA , itemD ); 

  }

  if ( ( I1 == 'B' && I2 == 'C' ) || ( I1 == 'C' && I2 == 'B' ) ) { 
    std :: cout << "you entered item B and item C " << '\n';
    randomNumbers ( itemC , itemB ); 

  }

  if ( ( I1 == 'B' && I2 == 'D' ) || ( I1 == 'D' && I2 == 'B' ) ) {
    std :: cout << "you entered item B and item D " << '\n';
    randomNumbers ( itemB , itemD ); 

  }

  if ( ( I1 == 'D' && I2 == 'C' ) || ( I1 == 'C' && I2 == 'D' ) ) {
    std :: cout << "you entered item C and item D " << '\n';
    randomNumbers ( itemC , itemD ); 

  }


}

void force_Of_The_Object () {
  char SS { solid_situation () };

  switch ( SS ) {
    double a;
    double M;
    double fk;
    double IA;
    double IB;
    double IC;
    double ID;

    case 'A' :
      std :: cout << "you entered item A " << '\n';
      IA = force_In_Item ( a ); 
      return;

    case 'B' :
      std :: cout << "you entered item B " << '\n';
      IB = force_In_Item_B (); 
      return;

    case 'C' :
      std :: cout << "you entered item C " << '\n';
      IC = force_In_Item ();
      return;

    case 'D' :
      std :: cout << "you entered item D " << '\n';
      ID = force_In_Item_D (); 
      return; 

    case 'E' :
      std :: cout << "you entered item E " << '\n';
      force_In_Item_E ( a , M , fk );
      return;

    default :
      std :: cout << "not suitable input " << '\n';
      std :: cout << "try again " << '\n';
      std :: cout << '\n';
      return force_Of_The_Object (); 
  }

}


void end_Of_The_Bulid () {
  std :: cout << "bulid has been ended " << '\n';
  std :: cout << "enter any key to quit the bulid : " << '\n'; 
  std :: string key {};
  std :: cin >> key; 

}


int main () {
  force_Of_The_Object (); 

return 0; 
}