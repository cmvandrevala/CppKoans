#include "../headers/koan04_arrays.hpp"

void Koan04_arrays::listing_things()
{
  int two_numbers[] = { 3, 4 };
  // You should use two_numbers to retreive the value
  ASSERT_EQUAL( 3, FILL_THE_NUMBER_IN );
}

void Koan04_arrays::arrays_are_rigid()
{
  int rigid_array[10];
  for ( int i = 0; i < 10; i++ )
    rigid_array[i] = i;
  ASSERT_EQUAL( sizeof( rigid_array ) / sizeof( int ), FILL_THE_NUMBER_IN );
}
