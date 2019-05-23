#include <inbug2/inbug2.hxx>
#include <inbug2/bug.hxx>
#include <ostream>
#include <stdexcept>

using namespace std;

namespace inbug2
{
  void say_hello (ostream& o, const string& n)
  {
    if (n.empty ())
      throw invalid_argument ("empty name");

    o << "Hello, " << n << '!' << endl;
  }
}
