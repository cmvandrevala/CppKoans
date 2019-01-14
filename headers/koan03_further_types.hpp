#include "../helper.hpp"

#ifndef KOAN03_FURTHER_TYPES_HPP
#define KOAN03_FURTHER_TYPES_HPP

class Koan03_further_types : Koan
{
  private:
    KoanHandler *status;
    static const int num_tests = 1;

  public:

    Koan03_further_types( KoanHandler *status ) : status( status ) {
      status->register_koans( num_tests );
    }

    ~Koan03_further_types() {}

    void run() {
      status->episode_start( "fourth" );

      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan03_further_types::the_truth_has_a_name ) );

      status->episode_done( "fourth" );
    }

    static int get_num_tests() {
      return num_tests;
    }

  private:
    // REMARK: Do not forget to increase this.num_tests when you add another koan
    void the_truth_has_a_name();
};


#endif
