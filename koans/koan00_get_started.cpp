#include "../headers/koan00_get_started.hpp"

using namespace std;

void Koan00_get_started::cpp_is_not_too_hard()
{
  cout << "C++ is not too hard to learn! Read the output of 'CppKoans' after you compiled it."
       << endl
       << "Then go to the source file of the first error and make the test pass."
       << endl << endl;

  ASSERT_MSG( false, "This should be true." );

  cout << "That was easy, wasn't it?" << endl
       << "Go on while you walk the path to enlightment ..."
       << endl << endl;
}
