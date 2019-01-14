#include "../helper.hpp"

#ifndef KOAN02_CHARACTER_TYPES_HPP
#define KOAN02_CHARACTER_TYPES_HPP

class Koan02_character_types : Koan
{
  private:
    KoanHandler *status;
    static const int num_tests = 4;

  public:

    Koan02_character_types( KoanHandler *status ) : status( status ) {
      status->register_koans( num_tests );
    }

    ~Koan02_character_types() {}

    void run() {
      status->episode_start( "Third" );

      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan02_character_types::lonely_characters ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan02_character_types::chars_have_a_size ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan02_character_types::chars_are_numbers ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan02_character_types::more_characters_are_strings ) );

      status->episode_done( "third" );
    }

    static int get_num_tests() {
      return num_tests;
    }

  private:
    // REMARK: Do not forget to increase this.num_tests when you add another koan
    void lonely_characters();
    void chars_have_a_size();
    void chars_are_numbers();
    void more_characters_are_strings();
};

#endif
