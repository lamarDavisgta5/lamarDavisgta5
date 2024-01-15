# include <iostream>
# include "const.h"


void swin () {
  std :: cout << "there is a oscillating on the linear segment of the volatility." << '\n';
  std :: cout << "enter any key to get the oscillation equation ( p = radian ) : " << '\n'; 
  std :: string key {};
  std :: cin >> key;
  std :: cout << '\n';
}

double lenght () {
  std :: cout << "enter the segment in cm : " << '\n';
  double segment_lenght {};
  std :: cin >> segment_lenght;
  std :: cout << '\n';

return segment_lenght / 2;
}

double time_Of_The_Pass () {
  std :: cout << "enter the time of the pas of the segment in second : " << '\n';
  double time {};
  std :: cin >> time;
  std :: cout << '\n';

return time;
}

double number_Of_The_Pass () {
  std :: cout << "enter the number of the pass of the ocisllation on the segment : " << '\n';
  double N {};
  std :: cin >> N;
  
  if ( N - static_cast < int > ( N ) != 0 ) {
    std :: cout << "do not enter floating point " << '\n';
    return number_Of_The_Pass ();
  }

  std :: cout << '\n';

return N / 2;
}

char freaquncy_Or_Period () {
  std :: cout << "enter T : get the oscillation with period " << '\n';
  std :: cout << "enter F : get the oscillation in frequncy " << '\n';
  char opt {};
  std :: cin >> opt;

  if ( opt != 70 && opt != 102 && opt != 84 && opt != 116 ) {
    std :: cout << "not suitable char " << '\n';
    return freaquncy_Or_Period ();
  }

  std :: cout << '\n'; 
  

return static_cast < int > ( opt ); 
}

char pass_On_Subsequnce_Point () {
  std :: cout << "enter P : caculate the time of the pass on maximum subsequnce " << '\n';
  std :: cout << "enter M : caculate the time of the pass on the minimum subsequnce " << '\n';
  char opt {};
  std :: cin >> opt;
  
  if ( opt != 80 && opt != 112 && opt != 77 && opt != 109 ) {
    std :: cout << "not suitable char " << '\n';
    return pass_On_Subsequnce_Point ();
  }

  std :: cout << '\n'; 


return static_cast < int > ( opt );
}

double numberOfPasses () {
  a:
  std :: cout << "enter the number of the passes : " << '\n';
  double n {};
  std :: cin >> n;
   
  if ( n - static_cast < int > ( n ) != 0 ) {
    std :: cout << "do not enter floating point numbers " << '\n';
    goto a;
  } 


  if ( n < 0 || n == 0 ) {
    std :: cout << "not suitable number " << '\n'; 
    return numberOfPasses (); 

  }  

  std :: cout << '\n';

return n;
}



void oscillation_Equation () {
  int FP { freaquncy_Or_Period () };
  
  if ( FP == 70 || FP == 102 ) {
    std :: cout << "you enter to get the oscillation equation in ferquncy " << '\n';
    double L { lenght () };
    double t { time_Of_The_Pass () };
    double n { number_Of_The_Pass () };
    std :: cout << "the frequnt of the oscilation is : " <<  n / t  << " Hz " << '\n';
    std :: cout << "the oscillation equation in sin is : " << " x = " << L << " sin ( " << 2 * ( n / t ) << 'p' << 't' << " + p / 2 ) " << '\n'; 
    std :: cout << "the oscillation equation in cos is : " << " x = " << L << " cos ( " << 2 * ( n / t ) << 'p' << 't' << " ) " << '\n';
    std :: cout << '\n';
    int maxOrMin { pass_On_Subsequnce_Point () }; 

    if ( maxOrMin == 80 || maxOrMin == 112 ) {
      std :: cout << "you entered P " << '\n';
      int passesNumber { static_cast < int > ( numberOfPasses () ) };
      std :: cout << "the time of the passes in maximum is : " << ( t / n ) * passesNumber << 's' <<'\n'; 
      
    }

    if ( maxOrMin == 77 || maxOrMin == 109 ) {
      std :: cout << "you entered M " << '\n';
      int passesNumber { static_cast < int > ( numberOfPasses () ) };
      std :: cout << "the time of the passes in minimum is : " << ( ( t / n ) / 2 ) * passesNumber << 's' << '\n'; 
      
    }

  }

  if ( FP == 84 || FP == 116 ) {
    std :: cout << "you enter to get the ocillation equation in period " << '\n';
    double L { lenght () };
    double t { time_Of_The_Pass () };
    double n { number_Of_The_Pass () };
    std :: cout << "the period of the oscillation is : " << t / n << " second " << '\n';
    std :: cout << "the oscillation equation in sin is : " << " x = " << L << " sin ( " << 2 / ( t / n ) << 'p' << 't' << " + p / 2 ) " << '\n'; 
    std :: cout << "the oscillation equation in cos is : " << " x = " << L << " cos ( " << 2 / ( t / n ) << 'p' << 't' << " ) " << '\n';
    std :: cout << '\n';
    int maxOrMin { pass_On_Subsequnce_Point () };
    
    if ( maxOrMin == 80 || maxOrMin == 112 ) {
      std :: cout << "you entered P " << '\n';
      int passesNumber { static_cast < int > ( numberOfPasses () ) };
      std :: cout << "the time of the passes in maximum is : " << ( t / n ) * passesNumber << 's' <<'\n'; 

      
    }



    if ( maxOrMin == 77 || maxOrMin == 109 ) {
      std :: cout << "you entered M " << '\n';
      int passesNumber { static_cast < int > ( numberOfPasses () ) };
      int N { passesNumber };
      std :: cout << "the time of the passes in minimum is : " << ( ( t / n ) / 2 ) * passesNumber << 's' << '\n'; 

    }
   
  }


}


int main () {
  swin (); 
  oscillation_Equation ();    
  std :: cout << "the program has been ended press any key to quit " << '\n'; 
  std :: string key {};
  std :: cin >> key;


return 0; 
}