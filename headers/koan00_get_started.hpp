#include "../helper.hpp"

#ifndef KOAN00_GET_STARTED_HPP
#define KOAN00_GET_STARTED_HPP

using namespace std;

class Koan00_get_started : Koan
{
  private:
    KoanHandler *status;
    static const int num_tests = 1;

  public:

    Koan00_get_started( KoanHandler *status ) : status( status ) {
      status->register_koans( num_tests );
    }

    ~Koan00_get_started() {}

    void run() {
      status->episode_start( "First" );

      status->eval_koan( *this, static_cast<void ( Koan:: * )()>( &Koan00_get_started::cpp_is_not_too_hard ) );

      status->episode_done( "first" );
    }

  private:
    void cpp_is_not_too_hard();
};

#endif
