#include "../helper.hpp"

#ifndef KOAN01_NUMBER_TYPES_HPP
#define KOAN01_NUMBER_TYPES_HPP

class Koan01_number_types : Koan
{
  private:
    KoanHandler *status;
    static const int num_tests = 8;

  public:

    Koan01_number_types( KoanHandler *status ) : status( status ) {
      status->register_koans( num_tests );
    }

    ~Koan01_number_types() {}

    void run() {
      status->episode_start( "Second" );

      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan01_number_types::simple_integer_numbers ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan01_number_types::integers_have_a_size ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan01_number_types::integers_can_be_negative ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan01_number_types::simple_floats ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan01_number_types::floats_have_a_size ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan01_number_types::going_double_precision ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan01_number_types::doubles_have_a_size ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan01_number_types::size_of_biggest_number ) );

      status->episode_done( "second" );
    }

    static int get_num_tests() {
      return num_tests;
    }

  private:
    // REMARK: Do not forget to increase this.num_tests when you add another koan
    void simple_integer_numbers();
    void integers_have_a_size();
    void integers_can_be_negative();
    void simple_floats();
    void floats_have_a_size();
    void going_double_precision();
    void doubles_have_a_size();
    void size_of_biggest_number();
};

#endif
