#include <iostream>
#include "headers/koan_handler.hpp"
#include "headers/all_koans.hpp"

using namespace std;

int main()
{
  KoanHandler status;

  Koan00_get_started koan00 = Koan00_get_started( &status );
  Koan01_number_types koan01 = Koan01_number_types( &status );
  Koan02_character_types koan02 = Koan02_character_types( &status );
  Koan03_further_types koan03 = Koan03_further_types( &status );
  Koan04_arrays koan04 = Koan04_arrays( &status );
  Koan05_pointers koan05 = Koan05_pointers( &status );
  // KoanXX_sample_koans koanXX = KoanXX_sample_koans( &status );

  status.start();
  koan00.run();
  koan01.run();
  koan02.run();
  koan03.run();
  koan04.run();
  koan05.run();
  // koanXX.run();

  status.end();
  return( 0 );
}
