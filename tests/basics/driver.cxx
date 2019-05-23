#include <cassert>
#include <sstream>
#include <stdexcept>

#include <inbug2/version.hxx>
#include <inbug2/inbug2.hxx>

int main ()
{
  using namespace std;
  using namespace inbug2;

  // Basics.
  //
  {
    ostringstream o;
    say_hello (o, "World");
    assert (o.str () == "Hello, World!\n");
  }

  // Empty name.
  //
  try
  {
    ostringstream o;
    say_hello (o, "");
    assert (false);
  }
  catch (const invalid_argument& e)
  {
    assert (e.what () == string ("empty name"));
  }
}
