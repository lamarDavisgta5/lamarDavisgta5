# include <iostream>
# include "cValuable.h"
# include <cmath>
# include <iomanip>
# include <random>
# include <chrono>
# include "math.h"
constexpr int v { 0 };


void plante () {
  std :: cout << "a ball is throwed in a planet and stops after a time " << '\n';
  std :: cout << "enter any key to caculte the gravity of the plante : " << '\n';
  
  std :: string key {};
  std :: cin >> key;

}

long double mass () {
  A:
  std :: cout << "enter the mass of the planet in kg : " << '\n';
  long double mass {};
  std :: cin >> mass;

  if ( mass == 0 || mass < 0 ) {
    std :: cout << "not suitable number " << '\n';
    goto A;
  }

return mass;
}

double radiusOfThePlanet () {
  A:
  std :: cout << "enter the radius of the planet in km : " << '\n';
  double r {};
  std :: cin >> r;

  if ( r <= 0 ) {
    std :: cout << "not suitable number " << '\n';
    goto A;
  }

return r;
}

long double  gravity () {
  long double M { mass () };
  double R { radiusOfThePlanet () * 1000 };
  double gravity { static_cast < double > ( ( constant :: gravitationalConstant * M ) / std :: pow ( R , 2 ) ) }; // arthmetic conversion 
  std :: cout << "the gravity of the plant is : " << gravity << " m/s2 "<< '\n';

return gravity;
}

double massOfTheBall () {
  A:
  std :: cout << "enter the mass of the ball in kg : " << '\n';
  double mass {};
  std :: cin >> mass;

  if ( mass <= 0 ) {
    std :: cout << "not suitable number " << '\n';
    goto A;

  }

return mass;
}

double MK () {
  A:
  std :: cout << "enter the coefficient of friction in N " << '\n';
  double ffk {};
  std :: cin >> ffk;

  if ( ffk <= 0 ) {
    std :: cout << "not suitable number " << '\n';
    goto A;

  }

return ffk;
}

double V0 () {
  std :: cout << "enter the speed of the ball in m/s : " << '\n';
  double speed {};
  std :: cin >> speed;

return speed;
}

// moons mass = 7.34767309e22

// moons r = 1737.4

// suns m == 3.955e30

// suns r == 696340

// mars r == 3389.5

// marss m == 6.39e23

// earths mass == 5.972e24

// earths radius == 6371

int option () {
  A:
  std :: cout << "enter 1 : make random numbers between accelaration and the surface reaction " << '\n';
  std :: cout << "enter 2 : make random number between accelaration and the displacement " << '\n';
  int oneOrTwo {};
  std :: cin >> oneOrTwo;
  if ( oneOrTwo > 3 || oneOrTwo < 1 ) {
    std :: cout << "you must enter 1 or 2 " << '\n';
    goto A;
  }

return oneOrTwo;
}

void ballOnEarth () {
  again:
  std :: cout << "enter 1 : caculate the stop accelaration on a earth "<< '\n';
  std :: cout << "enter 2 : caculate the suraface reaction on a earth " << '\n';
  std :: cout << "enter 3 : caculate the displacement of the ball on earth " << '\n';
  std :: cout << "enter 4 : caculate the surface reaction , stop accelaration and displacement " << '\n';
  int opt {};
  std :: cin >> opt;

  if ( opt == 1 ) {
    std :: cout << "you entered 1 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * constant :: gravity };
    double friction { W * FFK };
    std :: cout << "the accelaration is : " << -friction / M << "m/s2 "<< '\n';
    
  }

  else if ( opt == 2 ) {
    std :: cout << "you entered 2 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * constant :: gravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    double frictionPower2 { std :: pow ( friction , 2 ) };
    double FNPower2 { std :: pow ( W , 2 ) };
    std :: cout << "the surface reaction is : " << std :: sqrt ( frictionPower2 + FNPower2 ) << 'N' << '\n'; 


  }
 
  else if ( opt == 3 ) {
    std :: cout << "you entered 3 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * constant :: gravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    std :: cout << "the displacement after the ball stoped from throwing is : " << ( std :: pow ( v , 2 ) - std :: pow ( speed , 2 ) ) / ( 2 * accelaration ) << 'm' << '\n';
  }

  else if ( opt == 4 ) {
    std :: cout << "you entered 4 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * constant :: gravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    double frictionPower2 { std :: pow ( friction , 2 ) };
    double FNPower2 { std :: pow ( W , 2 ) };
    double displacement { ( std :: pow ( v , 2 ) - std :: pow ( speed , 2 ) ) / ( 2 * accelaration ) };
    std :: cout << "the accelaration is : " << accelaration << "m/s2 " << '\n';
    std :: cout << "the surface reaction is : " << std :: sqrt ( frictionPower2 + FNPower2 ) << 'N' << '\n';
    std :: cout << "the displacement is : " << displacement << '\n';
    double SF { std :: sqrt ( frictionPower2 + FNPower2 ) };
    int OOT { option () } ;
    std :: mt19937 randomMaker { static_cast < unsigned int > ( std :: chrono :: steady_clock :: now (). time_since_epoch (). count () ) };

    if ( OOT == 1 ) {
      std :: cout << "you entered 1 " << '\n';
      std :: cout << "enter the number of the sequnce : " << '\n';
      int SN {};
      std :: cin >>SN;

      if ( accelaration < SF ) {
        std :: uniform_int_distribution distance ( static_cast < int > ( accelaration ) , static_cast < int > ( SF ) );
        std :: cout << "your random number between accelaration : " << accelaration << " and the surface reaction : " << SF << " is : " << '\n';

        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';



        }


      }

      else if ( SF < accelaration ) {
        std :: uniform_int_distribution distance ( static_cast < int > ( SF ) , static_cast < int > ( accelaration ) );
        std :: cout << "your random number between surface reaction  : " << SF << " and the accelaration : " << accelaration << " is : " << '\n';
        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

           
        }

      }

      else
        std :: cout << "can not make random number due to a equlity " << '\n';
     
    }

    if ( OOT == 2 ) {
      std :: cout << "you entered 2 " << '\n';
      std :: cout << "enter the number of the sequnce : " << '\n';
      int SN {};
      std :: cin>> SN;

      if ( accelaration < displacement ) {
        std :: uniform_int_distribution distance { static_cast < int > ( accelaration ) , static_cast < int > ( displacement ) };
        std :: cout << "your random number between accelaration : " << accelaration << " and the displcement : " << displacement << " is : " << '\n';

        for ( int counter { 1 }; counter <=SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }

      }

      else if ( displacement < accelaration ) {
        std :: uniform_int_distribution distance { static_cast < int > ( displacement ) , static_cast < int > ( accelaration ) };
        std :: cout << "your random number between displacement : " << displacement << " and the accelaration  : " << accelaration << " is : " << '\n';

        for ( int counter { 1 }; SN <= counter; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }

      }

      else
        std :: cout << "can not make random numbers due to a equality " << '\n';
    

    }


  }
  

  else {
    std :: cout << "you must enter 1 , 2 , 3 , 4  " << '\n';
    goto again;
  }


}



void ballOnMoon () {
  constexpr double moonGravity { 1.6 };
  again:
  std :: cout << "enter 1 : caculate the stop accelaration on a moon "<< '\n';
  std :: cout << "enter 2 : caculate the suraface reaction on a moon " << '\n';
  std :: cout << "enter 3 : caculate the displacement of the ball on on moon " << '\n';
  std :: cout << "enter 4 : caculate the surface reaction , stop accelaration and displacement on a moon " << '\n';
  int opt {};
  std :: cin >> opt;

  if ( opt == 1 ) {
    std :: cout << "you entered 1 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * moonGravity };
    double friction { W * FFK };
    std :: cout << "the accelaration on moon is : " << -friction / M << "m/s2 "<< '\n';
    
  }

  else if ( opt == 2 ) {
    std :: cout << "you entered 2 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * moonGravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    double frictionPower2 { std :: pow ( friction , 2 ) };
    double FNPower2 { std :: pow ( W , 2 ) };
    std :: cout << "the surface reaction on moon is : " << std :: sqrt ( frictionPower2 + FNPower2 ) << 'N' << '\n'; 


  }

  else if ( opt == 3 ) {
    std :: cout << "you entered 3 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * moonGravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    std :: cout << "the displacement after the ball stoped from throwing on a moon is : " << ( std :: pow ( v , 2 ) - std :: pow ( speed , 2 ) ) / ( 2 * accelaration ) << 'm' << '\n';
  }

  else if ( opt == 4 ) {
    std :: cout << "you entered 4 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * moonGravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    double frictionPower2 { std :: pow ( friction , 2 ) };
    double FNPower2 { std :: pow ( W , 2 ) };
    double displacement { ( std :: pow ( v , 2 ) - std :: pow ( speed , 2 ) ) / ( 2 * accelaration ) };
    std :: cout << "the accelaration on a moon is : " << accelaration << "m/s2 " << '\n';
    std :: cout << "the surface reaction on a moon is : " << std :: sqrt ( frictionPower2 + FNPower2 ) << 'N' << '\n';
    std :: cout << "the displacement on a moon is : " << displacement << '\n';
    double SF { std :: sqrt ( frictionPower2 + FNPower2 ) };
    int OOT { option () } ;
    std :: mt19937 randomMaker { static_cast < unsigned int > ( std :: chrono :: steady_clock :: now (). time_since_epoch (). count () ) };

    if ( OOT == 1 ) {
      std :: cout << "you entered 1 " << '\n';
      std :: cout << "enter the number of the sequnce : " << '\n';
      int SN {};
      std :: cin >>SN;

      if ( accelaration < SF ) {
        std :: uniform_int_distribution distance ( static_cast < int > ( accelaration ) , static_cast < int > ( SF ) );
        std :: cout << "your random number between accelaration : " << accelaration << " and the surface reaction : " << SF << " is : " << '\n';

        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';



        }


      }

      else if ( SF < accelaration ) {
        std :: uniform_int_distribution distance ( static_cast < int > ( SF ) , static_cast < int > ( accelaration ) );
        std :: cout << "your random number between surface reaction  : " << SF << " and the accelaration : " << accelaration << " is : " << '\n';
        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

           
        }

      }

      else
        std :: cout << "can not make random number due to a equlity " << '\n';
     
    }

    if ( OOT == 2 ) {
      std :: cout << "you entered 2 " << '\n';
      std :: cout << "enter the number of the sequnce : " << '\n';
      int SN {};
      std :: cin>> SN;

      if ( accelaration < displacement ) {
        std :: uniform_int_distribution distance { static_cast < int > ( accelaration ) , static_cast < int > ( displacement ) };
        std :: cout << "your random number between accelaration : " << accelaration << " and the displcement : " << displacement << " is : " << '\n';

        for ( int counter { 1 }; counter <=SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }

      }

      else if ( displacement < accelaration ) {
        std :: uniform_int_distribution distance { static_cast < int > ( displacement ) , static_cast < int > ( accelaration ) };
        std :: cout << "your random number between displacement : " << displacement << " and the accelaration  : " << accelaration << " is : " << '\n';

        for ( int counter { 1 }; SN <= counter; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }

      }

      else
        std :: cout << "can not make random numbers due to a equality " << '\n';
    

    }


  }
  

  else {
    std :: cout << "you must enter 1 , 2 , 3 , 4  " << '\n';
    goto again;
  }


}


void ballOnMars () {
  constexpr double marsGravity { 3.7 };
  again:
  std :: cout << "enter 1 : caculate the stop accelaration on a mars "<< '\n';
  std :: cout << "enter 2 : caculate the suraface reaction on a mars " << '\n';
  std :: cout << "enter 3 : caculate the displacement of the ball on on mars " << '\n';
  std :: cout << "enter 4 : caculate the surface reaction , stop accelaration and displacement on a mars " << '\n';
  int opt {};
  std :: cin >> opt;

  if ( opt == 1 ) {
    std :: cout << "you entered 1 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * marsGravity };
    double friction { W * FFK };
    std :: cout << "the accelaration on mars is : " << -friction / M << "m/s2 "<< '\n';
    
  }

  else if ( opt == 2 ) {
    std :: cout << "you entered 2 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * marsGravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    double frictionPower2 { std :: pow ( friction , 2 ) };
    double FNPower2 { std :: pow ( W , 2 ) };
    std :: cout << "the surface reaction on mars is : " << std :: sqrt ( frictionPower2 + FNPower2 ) << 'N' << '\n'; 


  }

  else if ( opt == 3 ) {
    std :: cout << "you entered 3 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * marsGravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    std :: cout << "the displacement after the ball stoped from throwing on a mars is : " << ( std :: pow ( v , 2 ) - std :: pow ( speed , 2 ) ) / ( 2 * accelaration ) << 'm' << '\n';
  }

  else if ( opt == 4 ) {
    std :: cout << "you entered 4 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * marsGravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    double frictionPower2 { std :: pow ( friction , 2 ) };
    double FNPower2 { std :: pow ( W , 2 ) };
    double displacement { ( std :: pow ( v , 2 ) - std :: pow ( speed , 2 ) ) / ( 2 * accelaration ) };
    std :: cout << "the accelaration on a mars is : " << accelaration << "m/s2 " << '\n';
    std :: cout << "the surface reaction on a mars is : " << std :: sqrt ( frictionPower2 + FNPower2 ) << 'N' << '\n';
    std :: cout << "the displacement on a mars is : " << displacement << '\n';
    double SF { std :: sqrt ( frictionPower2 + FNPower2 ) };
    int OOT { option () } ;
    std :: mt19937 randomMaker { static_cast < unsigned int > ( std :: chrono :: steady_clock :: now (). time_since_epoch (). count () ) };

    if ( OOT == 1 ) {
      std :: cout << "you entered 1 " << '\n';
      std :: cout << "enter the number of the sequnce : " << '\n';
      int SN {};
      std :: cin >>SN;

      if ( accelaration < SF ) {
        std :: uniform_int_distribution distance ( static_cast < int > ( accelaration ) , static_cast < int > ( SF ) );
        std :: cout << "your random number between accelaration : " << accelaration << " and the surface reaction : " << SF << " is : " << '\n';

        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';



        }


      }

      else if ( SF < accelaration ) {
        std :: uniform_int_distribution distance ( static_cast < int > ( SF ) , static_cast < int > ( accelaration ) );
        std :: cout << "your random number between surface reaction  : " << SF << " and the accelaration : " << accelaration << " is : " << '\n';
        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

           
        }

      }

      else
        std :: cout << "can not make random number due to a equlity " << '\n';
     
    }

    if ( OOT == 2 ) {
      std :: cout << "you entered 2 " << '\n';
      std :: cout << "enter the number of the sequnce : " << '\n';
      int SN {};
      std :: cin>> SN;

      if ( accelaration < displacement ) {
        std :: uniform_int_distribution distance { static_cast < int > ( accelaration ) , static_cast < int > ( displacement ) };
        std :: cout << "your random number between accelaration : " << accelaration << " and the displcement : " << displacement << " is : " << '\n';

        for ( int counter { 1 }; counter <=SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }

      }

      else if ( displacement < accelaration ) {
        std :: uniform_int_distribution distance { static_cast < int > ( displacement ) , static_cast < int > ( accelaration ) };
        std :: cout << "your random number between displacement : " << displacement << " and the accelaration  : " << accelaration << " is : " << '\n';

        for ( int counter { 1 }; SN <= counter; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }

      }

      else
        std :: cout << "can not make random numbers due to a equality " << '\n';
    

    }


  }
  

  else {
    std :: cout << "you must enter 1 , 2 , 3 , 4  " << '\n';
    goto again;
  }


}

// venus mass 4.867e24
// venus redius 6051.8

void ballOnVenus () {
  constexpr double venusGravity { 8.8 };
  again:
  std :: cout << "enter 1 : caculate the stop accelaration on a venus "<< '\n';
  std :: cout << "enter 2 : caculate the suraface reaction on a venus " << '\n';
  std :: cout << "enter 3 : caculate the displacement of the ball on on venus " << '\n';
  std :: cout << "enter 4 : caculate the surface reaction , stop accelaration and displacement on a venus " << '\n';
  int opt {};
  std :: cin >> opt;

  if ( opt == 1 ) {
    std :: cout << "you entered 1 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * venusGravity };
    double friction { W * FFK };
    std :: cout << "the accelaration on venus is : " << -friction / M << "m/s2 "<< '\n';
    
  }

  else if ( opt == 2 ) {
    std :: cout << "you entered 2 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * venusGravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    double frictionPower2 { std :: pow ( friction , 2 ) };
    double FNPower2 { std :: pow ( W , 2 ) };
    std :: cout << "the surface reaction on venus is : " << std :: sqrt ( frictionPower2 + FNPower2 ) << 'N' << '\n'; 


  }

  else if ( opt == 3 ) {
    std :: cout << "you entered 3 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * venusGravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    std :: cout << "the displacement after the ball stoped from throwing on venus is : " << ( std :: pow ( v , 2 ) - std :: pow ( speed , 2 ) ) / ( 2 * accelaration ) << 'm' << '\n';
  }

  else if ( opt == 4 ) {
    std :: cout << "you entered 4 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * venusGravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    double frictionPower2 { std :: pow ( friction , 2 ) };
    double FNPower2 { std :: pow ( W , 2 ) };
    double displacement { ( std :: pow ( v , 2 ) - std :: pow ( speed , 2 ) ) / ( 2 * accelaration ) };
    std :: cout << "the accelaration on a venus is : " << accelaration << "m/s2 " << '\n';
    std :: cout << "the surface reaction on a venus is : " << std :: sqrt ( frictionPower2 + FNPower2 ) << 'N' << '\n';
    std :: cout << "the displacement on a venus is : " << displacement << '\n';
    double SF { std :: sqrt ( frictionPower2 + FNPower2 ) };
    int OOT { option () } ;
    std :: mt19937 randomMaker { static_cast < unsigned int > ( std :: chrono :: steady_clock :: now (). time_since_epoch (). count () ) };

    if ( OOT == 1 ) {
      std :: cout << "you entered 1 " << '\n';
      std :: cout << "enter the number of the sequnce : " << '\n';
      int SN {};
      std :: cin >>SN;

      if ( accelaration < SF ) {
        std :: uniform_int_distribution distance ( static_cast < int > ( accelaration ) , static_cast < int > ( SF ) );
        std :: cout << "your random number between accelaration : " << accelaration << " and the surface reaction : " << SF << " is : " << '\n';

        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';



        }


      }

      else if ( SF < accelaration ) {
        std :: uniform_int_distribution distance ( static_cast < int > ( SF ) , static_cast < int > ( accelaration ) );
        std :: cout << "your random number between surface reaction  : " << SF << " and the accelaration : " << accelaration << " is : " << '\n';
        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

           
        }

      }

      else
        std :: cout << "can not make random number due to a equlity " << '\n';
     
    }

    if ( OOT == 2 ) {
      std :: cout << "you entered 2 " << '\n';
      std :: cout << "enter the number of the sequnce : " << '\n';
      int SN {};
      std :: cin>> SN;

      if ( accelaration < displacement ) {
        std :: uniform_int_distribution distance { static_cast < int > ( accelaration ) , static_cast < int > ( displacement ) };
        std :: cout << "your random number between accelaration : " << accelaration << " and the displcement : " << displacement << " is : " << '\n';

        for ( int counter { 1 }; counter <=SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }

      }

      else if ( displacement < accelaration ) {
        std :: uniform_int_distribution distance { static_cast < int > ( displacement ) , static_cast < int > ( accelaration ) };
        std :: cout << "your random number between displacement : " << displacement << " and the accelaration  : " << accelaration << " is : " << '\n';

        for ( int counter { 1 }; SN <= counter; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }

      }

      else
        std :: cout << "can not make random numbers due to a equality " << '\n';
    

    }


  }
  

  else {
    std :: cout << "you must enter 1 , 2 , 3 , 4  " << '\n';
    goto again;
  }



}



void ballOnNepton () {
  constexpr double neptonGravity { 11.15 };
  again:
  std :: cout << "enter 1 : caculate the stop accelaration on a nepton "<< '\n';
  std :: cout << "enter 2 : caculate the suraface reaction on a nepton " << '\n';
  std :: cout << "enter 3 : caculate the displacement of the ball on a nepton " << '\n';
  std :: cout << "enter 4 : caculate the surface reaction , stop accelaration and displacement on a nepton " << '\n';
  int opt {};
  std :: cin >> opt;

  if ( opt == 1 ) {
    std :: cout << "you entered 1 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * neptonGravity };
    double friction { W * FFK };
    std :: cout << "the accelaration on nepton is : " << -friction / M << "m/s2 "<< '\n';
    
  }

  else if ( opt == 2 ) {
    std :: cout << "you entered 2 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * neptonGravity};
    double friction { W * FFK };
    double accelaration { -friction / M };
    double frictionPower2 { std :: pow ( friction , 2 ) };
    double FNPower2 { std :: pow ( W , 2 ) };
    std :: cout << "the surface reaction on nepton is : " << std :: sqrt ( frictionPower2 + FNPower2 ) << 'N' << '\n'; 


  }

  else if ( opt == 3 ) {
    std :: cout << "you entered 3 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * neptonGravity};
    double friction { W * FFK };
    double accelaration { -friction / M };
    std :: cout << "the displacement after the ball stoped from throwing on nepton is : " << ( std :: pow ( v , 2 ) - std :: pow ( speed , 2 ) ) / ( 2 * accelaration ) << 'm' << '\n';
  }

  else if ( opt == 4 ) {
    std :: cout << "you entered 4 " << '\n';
    double M { massOfTheBall () }; 
    double FFK { MK () };
    double speed { V0 () };
    double W { M * neptonGravity };
    double friction { W * FFK };
    double accelaration { -friction / M };
    double frictionPower2 { std :: pow ( friction , 2 ) };
    double FNPower2 { std :: pow ( W , 2 ) };
    double displacement { ( std :: pow ( v , 2 ) - std :: pow ( speed , 2 ) ) / ( 2 * accelaration ) };
    std :: cout << "the accelaration on a nepton is : " << accelaration << "m/s2 " << '\n';
    std :: cout << "the surface reaction on a nepton is : " << std :: sqrt ( frictionPower2 + FNPower2 ) << 'N' << '\n';
    std :: cout << "the displacement on a nepton is : " << displacement << '\n';
    double SF { std :: sqrt ( frictionPower2 + FNPower2 ) };
    int OOT { option () } ;
    std :: mt19937 randomMaker { static_cast < unsigned int > ( std :: chrono :: steady_clock :: now (). time_since_epoch (). count () ) };

    if ( OOT == 1 ) {
      std :: cout << "you entered 1 " << '\n';
      std :: cout << "enter the number of the sequnce : " << '\n';
      int SN {};
      std :: cin >>SN;

      if ( accelaration < SF ) {
        std :: uniform_int_distribution distance ( static_cast < int > ( accelaration ) , static_cast < int > ( SF ) );
        std :: cout << "your random number between accelaration : " << accelaration << " and the surface reaction : " << SF << " is : " << '\n';

        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';



        }


      }

      else if ( SF < accelaration ) {
        std :: uniform_int_distribution distance ( static_cast < int > ( SF ) , static_cast < int > ( accelaration ) );
        std :: cout << "your random number between surface reaction  : " << SF << " and the accelaration : " << accelaration << " is : " << '\n';
        for ( int counter { 1 }; counter <= SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

           
        }

      }

      else
        std :: cout << "can not make random number due to a equlity " << '\n';
     
    }

    if ( OOT == 2 ) {
      std :: cout << "you entered 2 " << '\n';
      std :: cout << "enter the number of the sequnce : " << '\n';
      int SN {};
      std :: cin>> SN;

      if ( accelaration < displacement ) {
        std :: uniform_int_distribution distance { static_cast < int > ( accelaration ) , static_cast < int > ( displacement ) };
        std :: cout << "your random number between accelaration : " << accelaration << " and the displcement : " << displacement << " is : " << '\n';

        for ( int counter { 1 }; counter <=SN; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }

      }

      else if ( displacement < accelaration ) {
        std :: uniform_int_distribution distance { static_cast < int > ( displacement ) , static_cast < int > ( accelaration ) };
        std :: cout << "your random number between displacement : " << displacement << " and the accelaration  : " << accelaration << " is : " << '\n';

        for ( int counter { 1 }; SN <= counter; ++ counter ) {
          std :: cout << distance ( randomMaker ) << '\t';

          if ( counter % 10 == 0 )
            std :: cout << '\n';

        }

      }

      else
        std :: cout << "can not make random numbers due to a equality " << '\n';
    

    }


  }
  

  else {
    std :: cout << "you must enter 1 , 2 , 3 , 4  " << '\n';
    goto again;
  }




}

void whichPlanet () {
  int g { static_cast < int > ( gravity () ) };  // numeric converion


  switch ( g ) {
    case 9 :
      std :: cout << "the planet is earth " << '\n';
 
    return ballOnEarth ();

    case 1 :
      std :: cout << "the planet is moon " << '\n';

    return ballOnMoon ();

    case 3 :
      std :: cout << "the planet is mars " << '\n';
    
    return ballOnMars ();

    case 8 :
      std :: cout << "the planet is venus " << '\n';
    
    return ballOnVenus();

    case 11 :
      std :: cout << "the planet is nepton " << '\n';

    return ballOnNepton ();
     
    default:
      std :: cout << "the planet is not in solar system " << '\n';
    break;
  }

 
}




int main () {
  std :: cout << std :: setprecision ( 4 ); 
  plante ();
  whichPlanet ();
  std :: cout << '\n';
  std :: cout << "the bulid end " << '\n';
  std :: cout << "press any key to quit : " << '\n';
  std :: string key {};
  std :: cin >> key;

return 0;
}