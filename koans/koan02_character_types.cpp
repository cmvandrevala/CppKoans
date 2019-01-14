#include "../headers/koan02_character_types.hpp"

#include <string>

void Koan02_character_types::lonely_characters()
{
  char a_character = 'a';
  ASSERT_EQUAL( a_character, FILL_THE_CHAR_IN );
}

void Koan02_character_types::chars_have_a_size()
{
  char a_character = 'a';
  ASSERT_EQUAL( sizeof( char ), FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( sizeof( a_character ), FILL_THE_NUMBER_IN );
}

void Koan02_character_types::chars_are_numbers()
{
  char a_character = 'a';
  ASSERT_EQUAL( int( a_character ), FILL_THE_NUMBER_IN );
  unsigned char the_same_charater = 'a';
  ASSERT_EQUAL( int( the_same_charater ), FILL_THE_NUMBER_IN );
  signed char still_the_same_character = 'a';
  ASSERT_EQUAL( int( still_the_same_character ), FILL_THE_NUMBER_IN );
}

void Koan02_character_types::more_characters_are_strings()
{
  std::string some_characters = "Hello World";
  ASSERT_EQUAL( some_characters.length(), FILL_THE_NUMBER_IN );
  ASSERT_EQUAL( some_characters.size(), FILL_THE_NUMBER_IN );
}
