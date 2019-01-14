#include "../headers/koan01_number_types.hpp"

void Koan01_number_types::simple_integer_numbers()
{
  int an_integer = 42;
  ASSERT_EQUAL_MSG( an_integer, 432, "foobar" );
}

void Koan01_number_types::integers_have_a_size()
{
  int an_integer = 1;
  ASSERT_EQUAL( sizeof( int ), FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( sizeof( an_integer ), FILL_THE_NUMBER_IN );
}

void Koan01_number_types::integers_can_be_negative()
{
  int an_integer =  -42;
  // You might want to substitute ASSERT_EQUAL with ASSERT and use larger-than comparison
  ASSERT_EQUAL( an_integer, 0 );
}

void Koan01_number_types::simple_floats()
{
  float a_float = 4.2;
  ASSERT_EQUAL( a_float, FILL_THE_NUMBER_IN );
}

void Koan01_number_types::floats_have_a_size()
{
  float a_float = 4.2;
  ASSERT_EQUAL( sizeof( float ), FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( sizeof( a_float ), FILL_THE_NUMBER_IN );
}

void Koan01_number_types::going_double_precision()
{
  double a_famous_double = 3.1415926535897932;
  ASSERT_EQUAL_MSG( a_famous_double, FILL_THE_NUMBER_IN, "You know that number." );
}

void Koan01_number_types::doubles_have_a_size()
{
  double a_famous_double = 3.1415926535897932;
  ASSERT_EQUAL( sizeof( double ), FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( sizeof( a_famous_double ), FILL_THE_NUMBER_IN );
}

void Koan01_number_types::size_of_biggest_number()
{
  // Remember: The size of long doubles vary from system to system.
  long double a_long_double = 4.2;
  // How big is it on your system?
  ASSERT_EQUAL( sizeof( long double ), FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( sizeof( a_long_double ), FILL_THE_NUMBER_IN );
}
