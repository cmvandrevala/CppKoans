#include "koan_handler.hpp"

using namespace std;

KoanHandler::KoanHandler() : total_num_koans( 0 ), total_num_passed( 0 )
{
}

void KoanHandler::eval_koan( Koan obj, void ( Koan::*koan )() )
{
  try {
    ( obj.*koan )();
    this->total_num_passed++;
  } catch( FillMeInException ex ) {
    this->print_failure( ex );
    exit( 1 );
  }
}

void KoanHandler::register_koans( int num_koans )
{
  this->total_num_koans += num_koans;
}

void KoanHandler::start()
{
  cout << "*****************************************************"
       << endl
       << "****             Welcome to CppKoans             ****"
       << endl
       << "****        The master has " << this->total_num_koans
       << " koans for you.     ****"
       << endl
       << "*****************************************************"
       << endl << endl;
}

void KoanHandler::end()
{
  cout << "****    You've walked the path to enlightment and satisfied your master.   ****"
       << endl
       << "*******************************************************************************"
       << endl;
}

void KoanHandler::episode_start( string order )
{
  cout << "===> The " << order << " Episode." << endl << endl;
}

void KoanHandler::episode_done( string order )
{
  cout << "~~~> Congratulations! You mastered the " << order << " episode." << endl
       << "~~~> Don't lose concentration. Keep going!" << endl
       << endl;
}

void KoanHandler::print_failure( FillMeInException ex )
{
  if( !ex.msg.empty() ) {
    cout << "Note:\t" << ex.msg << endl;
  }
  cout << "The master says, that you should meditate on '" << ex.file << ":"
       << ex.line << "'."
       << endl;
  if( !ex.expect.empty() ) {
    cout << "The master expected " << ex.expect << "." << endl;
  }
  cout << endl
       << "****                      You mastered " << this->total_num_passed << " of "
       << this->total_num_koans << " koans.                      ****"
       << endl
       << "****                              Keep going!                              ****"
       << endl;
}
