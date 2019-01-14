#include "../headers/koan05_pointers.hpp"

void Koan05_pointers::they_are_just_variables()
{
  int an_int = 42;
  int *pointer_to_an_int = &an_int;
  ASSERT_EQUAL( *pointer_to_an_int, FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( pointer_to_an_int, THIS_IS_NOT_NULL );
}

void Koan05_pointers::they_are_really_just_variables()
{
  int an_int = 42;
  int another_int = 21;
  int *pointer_to_an_int = &an_int;
  ASSERT_EQUAL( *pointer_to_an_int, FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( pointer_to_an_int, THIS_IS_NOT_NULL );
  pointer_to_an_int = &another_int;
  ASSERT_EQUAL( *pointer_to_an_int, FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( pointer_to_an_int, THIS_IS_NOT_NULL );
}

void Koan05_pointers::they_have_power()
{
  int an_int = 42;
  int *powerful_pointer = &an_int;
  ASSERT_EQUAL( *powerful_pointer, FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( powerful_pointer, THIS_IS_NOT_NULL );
  *powerful_pointer = 21;
  ASSERT_EQUAL( an_int, FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( powerful_pointer, THIS_IS_NOT_NULL );
}

void Koan05_pointers::they_are_not_almighty()
{
  const int an_int = 42;
  const int *wannabe_powerful = &an_int;
  ASSERT_EQUAL( *wannabe_powerful, FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( wannabe_powerful, THIS_IS_NOT_NULL );
  // Will this work? Think about it!
  // What do you need to change to make it work?
  // *wannabe_powerful = 21;
  ASSERT_EQUAL( an_int, FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( wannabe_powerful, THIS_IS_NOT_NULL );
}
