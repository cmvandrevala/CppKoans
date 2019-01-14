#include "../helper.hpp"

#ifndef KOAN04_ARRAYS_HPP
#define KOAN04_ARRAYS_HPP

class Koan04_arrays : Koan
{
  private:
    KoanHandler *status;
    static const int num_tests = 2;

  public:

    Koan04_arrays( KoanHandler *status ) : status( status ) {
      status->register_koans( num_tests );
    }

    ~Koan04_arrays() {}

    void run() {
      status->episode_start( "fifth" );

      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan04_arrays::listing_things ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan04_arrays::arrays_are_rigid ) );

      status->episode_done( "fifth" );
    }

    static int get_num_tests() {
      return num_tests;
    }

  private:
    // REMARK: Do not forget to increase this.num_tests when you add another koan
    void listing_things();
    void arrays_are_rigid();
};

#endif
