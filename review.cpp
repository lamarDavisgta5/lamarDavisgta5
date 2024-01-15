# include <iostream>
# include "const.h"
# include <iomanip>


void physics () {
  std :: cout << "we hang a weight on end of the coil and we hang the coil in an elevator " << '\n';
  std :: cout << "enter any key to caculate the lenght of the coil in these for items : " << '\n';
  std :: string key {};
  std :: cin >> key;
  std :: cout << '\n';
}


double getItem () {
  a:
  std :: cout << "enter the these items " << '\n';
  std :: cout << "item A : caculate the lenght of the coil when the elevator is resident " << '\n';
  std :: cout << "item B : caculete the lenght of the coil when the elevator is going down in a uniform speed " << '\n';
  std :: cout << "item C : caculate the lenght of the coil when the elevator is going up with an acceleration  " << '\n';
  std :: cout << "item D : caculate the lenght of the coil when the elevator is going down with an acceleration :  " << '\n';
  std :: cout << "item E : caculete the item A , B , C , D " << '\n'; 
  char opt {};
  std :: cin >> opt;


return opt;
}



double getInfo () {
  static int num { 0 };
  
  switch ( num ) {
    case 0 :
      std :: cout << "enter the mass of the weight in kg : " << '\n';
      ++ num;
      break;

    case 1 :
      std :: cout << "enter the first lenght of the coil in hanged stiuation in cm " << '\n';
      break;  

  }
  
  double info {};
  std :: cin >> info;

return info;
}

void reasult (); 
void reasult2 ();

namespace getInfo2 {
  double getInfo () {
    std :: cout << "enter the const of the coil in N / cm  : " << '\n';
    double lenght {};
    std :: cin >> lenght;
  return lenght;
  } 

  double getInfo2 () {
    std :: cout << "enter the elevator accelaration in m / s2 : " << '\n';
    double a {};
    std :: cin >> a;
  return a;
  }
  
  
  void reasult () {
    auto mass { :: getInfo () };
    auto L1 { :: getInfo () };
    auto k { getInfo () };
    std :: cout << "the lenght of the coli in A , B item is : " << ( ( k * L1 ) + ( mass * constantValuable :: gravity ) ) / k << " cm " << '\n';
    
  }

  void reasult2 () {
    auto mass { :: getInfo () };
    auto L1 { :: getInfo () };
    auto k { getInfo () };
    auto accelaration { getInfo2 () };
    std :: cout << "the lenght pf the coil in item C is : " <<   ( ( ( ( mass * constantValuable :: gravity ) + ( k * L1 ) ) - ( mass * accelaration ) ) / k ) << " cm " <<'\n';


  } 

  void items () {
    a:
    int GI { static_cast < int > ( getItem () ) };  

    switch ( GI ) {
      case 65 : 
        std :: cout << "you entered item A " << '\n';
        reasult ();
        break;

      case 66 :
        std :: cout << "you entered item B " << '\n';
        reasult ();
        break; 

      case 67 :
        std :: cout << "you entered item C " << '\n';
        reasult2 (); 
        break;
      
      case 68 :
        std :: cout << "you entered item D " << '\n'; 
        :: reasult (); 
        break;

      case 69 :
        std :: cout << "you entered item E " << '\n';
        :: reasult2 (); 
        break;

      default :
        std :: cout << "not suitable char " << '\n';
        goto a;

    }
   

}

}

auto trueOrFalse2 () {
  std :: cin >> std :: boolalpha;
  std :: cout << "enter true : make random numbers between item A , B , C , D and root or power then and find the odd or even numbers ( floating point is not included in random numbers ) " << '\n';
  std :: cout << "enter false : quit the program " << '\n';
  bool tOrF {};
  std :: cin >> tOrF;

return tOrF;
}

char chooseitem1 () {
  b:
  std :: cout << "enter the item one in chars : " << '\n';
  char I {};
  std :: cin >> I;
  int intI { static_cast < int > ( I ) };

  if ( intI != 65 && intI != 66 && intI != 67 && intI != 68 ) {
    std :: cout << "not suitable char " << '\n';
    goto b;

  }

return I;
}

char chooseitem2 () {
  b:
  std :: cout << "enter the item two in chars : " << '\n';
  char I {};
  std :: cin >> I;

  if ( I != 65 && I != 66 && I != 67 && I != 68 ) {
    std :: cout << "not suitable char " << '\n';
    goto b;

  }

return I;
}

void reasult () {
  auto mass { :: getInfo () };
  auto L1 { :: getInfo () };
  auto k { getInfo2 :: getInfo () };
  auto a { getInfo2 :: getInfo2 () }; 
  std :: cout << "the lenght of the coil in item D is : " <<  ( ( ( ( mass * constantValuable :: gravity ) + ( k * L1 ) ) + ( mass * a ) ) / k ) << " cm " << '\n'; 
}

void reasult2 () {
  auto mass { :: getInfo () };
  auto L1 { :: getInfo () };
  auto k { getInfo2 :: getInfo () };
  auto acceleration { getInfo2 :: getInfo2 () }; 
  std :: cout << "the lenght of the coli in A , B item is : " << ( ( k * L1 ) + ( mass * constantValuable :: gravity ) ) / k << " cm " << '\n';
  std :: cout << "the lenght pf the coil in item C is : " <<   ( ( ( ( mass * constantValuable :: gravity ) + ( k * L1 ) ) - ( mass * acceleration ) ) / k ) << " cm " <<'\n';
  std :: cout << "the lenght of the coil in item D is : " <<  ( ( ( ( mass * constantValuable :: gravity ) + ( k * L1 ) ) + ( mass * acceleration ) ) / k ) << " cm " << '\n'; 
  
  auto tOrF { trueOrFalse2 () };
  int intMass { static_cast < int > ( mass ) };
  int intL1 { static_cast < int > ( L1 ) };                         
  int intk { static_cast < int > ( k ) };
  int inta { static_cast < int > ( acceleration ) };  
  
  int itemA { static_cast < int > ( ( ( intk * intL1 ) + ( intMass * constantValuable :: gravity ) ) / intk ) };
  int itemB { static_cast < int > ( ( ( intk * intL1 ) + ( intMass * constantValuable :: gravity ) ) / intk ) };
  int itemC { static_cast < int > ( ( ( ( ( intMass * constantValuable :: gravity ) + ( intk * intL1 ) ) - ( intMass * inta ) ) / intk ) ) };
  int itemD { static_cast < int > ( ( ( ( ( intMass * constantValuable :: gravity ) + ( intk * intL1 ) ) + ( intMass * inta ) ) / intk ) ) };

  if ( tOrF ) {
    std :: cout << "you entered true " << '\n';
    int CI { static_cast < int > ( chooseitem1 () ) };
    int CI2 { static_cast < int > ( chooseitem2 () ) };
    
    if ( ( CI == 65 && CI2 == 66 ) || ( CI == 66 && CI2 == 65 ) ) {
      std :: cout << "you enter between item A and B " << '\n';
      random ( itemA , itemB );
      std :: cout << '\n'; 
    }

    if ( ( CI == 65 && CI2 == 67 ) || ( CI == 67 && CI2 == 65 ) ) {
      std :: cout << "you enter between item A and C " << '\n';
      random ( itemA , itemC );
      std :: cout << '\n'; 
    }

    if ( ( CI == 65 && CI2 == 68 ) || ( CI == 68 && CI2 == 65 ) ) {
      std :: cout << "you enter between item A and D " << '\n';
      random ( itemA , itemD );
      std :: cout << '\n'; 
    }

    if ( ( CI == 66 && CI2 == 67 ) || ( CI == 67 && CI2 == 66 ) ) {
      std :: cout << "you enter between item B and C " << '\n';
      random ( itemB , itemC );
      std :: cout << '\n'; 
    }

    if ( ( CI == 66 && CI2 == 68 ) || ( CI == 68 && CI2 == 66 ) ) {
      std :: cout << "you enter between item B and D " << '\n';
      random ( itemB , itemD );
      std :: cout << '\n'; 
    }

    if ( ( CI == 67 && CI2 == 68 ) || ( CI == 68 && CI2 == 67 ) ) {
      std :: cout << "you enter between item C and D " << '\n';
      random ( itemC , itemD );
      std :: cout << '\n'; 
    }

  }

  else
    std :: cout << "you entered false " << '\n';


}







int main () {
  std :: cout << std :: setprecision ( 4 );
  physics (); 
  getInfo2 :: items (); 
  std :: cout << "the program has ended " << '\n';
  std :: cout << "press any key to quit " << '\n';
  std :: string key {};
  std :: cin >> key; 

return 0;
}