#ifndef KOAN_HANDLER_HPP
#define KOAN_HANDLER_HPP

#include <iostream>
#include "fill_me_in_exception.hpp"
#include "koan.hpp"

using namespace std;

class KoanHandler
{
  private:
    int total_num_koans;
    int total_num_passed;

  public:
    KoanHandler();
    void eval_koan( Koan obj, void ( Koan::*koan )() );
    void register_koans( int num_koans );
    void start();
    void end();
    void episode_start( string order );
    void episode_done( string order );

  private:
    void print_failure( FillMeInException ex );
};

#endif
