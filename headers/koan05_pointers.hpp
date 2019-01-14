#include "../helper.hpp"

#ifndef KOAN05_POINTERS_HPP
#define KOAN05_POINTERS_HPP

// Rename the Episode
class Koan05_pointers : Koan
{
  private:
    KoanHandler *status;
    static const int num_tests = 4;

  public:

    Koan05_pointers( KoanHandler *status ) : status( status ) {
      status->register_koans( num_tests );
    }

    ~Koan05_pointers() {}

    void run() {
      status->episode_start( "sixth" );

      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan05_pointers::they_are_just_variables ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan05_pointers::they_are_really_just_variables ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan05_pointers::they_have_power ) );
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan05_pointers::they_are_not_almighty ) );

      status->episode_done( "sixth" );
    }

    static int get_num_tests() {
      return num_tests;
    }

  private:
    // REMARK: Do not forget to increase this.num_tests when you add another koan
    void they_are_just_variables();
    void they_are_really_just_variables();
    void they_have_power();
    void they_are_not_almighty();
};

#endif
