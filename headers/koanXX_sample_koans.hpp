#include "../helper.hpp"

// Do not to forget to rename the preprocessor directives as well!
#ifndef KOANXX_SAMPLE_KOANS_HPP
#define KOANXX_SAMPLE_KOANS_HPP

// Rename the Episode
class KoanXX_sample_koans : Koan
{
  private:
    KoanHandler *status;
    // When ever a koan is added at the very bottom, this counter needs to be
    // increased.
    static const int num_tests = 1;

  public:

    KoanXX_sample_koans( KoanHandler *status ) : status( status ) {
      status->register_koans( num_tests );
    }

    ~KoanXX_sample_koans() {}

    void run() {
      // For each koan in this episode, one line needs to be written.
      // The koans are executed in the order they are called here.
      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &KoanXX_sample_koans::a_sample_koan ) );

      status->episode_done( "the-so-and-so'th" );
    }

    static int get_num_tests() {
      return num_tests;
    }

  private:
    // Add further Koans down here by defining their name.
    // The implementation of these is done in ~/koans/koanXX_sample_koans.cpp
    // REMARK: Do not forget to increase this.num_tests when you add another koan
    void a_sample_koan();
};

#endif
