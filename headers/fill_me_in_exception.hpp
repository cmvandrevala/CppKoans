#ifndef FILL_ME_IN_HPP
#define FILL_ME_IN_HPP

#include <sstream>
#include <string>

class FillMeInException
{
  public:
    std::string file;
    int line;
    std::string msg;
    std::string expect;
    FillMeInException( const std::string f, const int l, std::string s ) : file( f ), line( l ), msg( s ) {
      file = file.substr( file.find_last_of( "/" ) + 1 );
    }
    FillMeInException( const std::string f, const int l, std::string s, std::string e ) : file( f ), line( l ), msg( s ), expect( e ) {
      file = file.substr( file.find_last_of( "/" ) + 1 );
    }
    ~FillMeInException() {}
};

#define ASSERT_MSG(expr, msg) do {                       \
    if (!(expr))                                         \
    {                                                    \
      throw FillMeInException(__FILE__, __LINE__, msg);  \
    };                                                   \
  } while(0)

#define ASSERT(expr) ASSERT_MSG(expr, "")
#define ASSERT_EQUAL(a, b) ASSERT_EQUAL_MSG(a, b, "")
#define ASSERT_EQUAL_MSG(a, b, msg) do {                                  \
    if (!(a == b))                                                        \
    {                                                                     \
      std::ostringstream expect;\
      expect << a;\
      throw FillMeInException(__FILE__, __LINE__, msg, expect.str());   \
    };                                                                    \
  } while(0)

#endif
