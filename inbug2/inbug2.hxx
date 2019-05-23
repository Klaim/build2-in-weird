#pragma once

#include <iosfwd>
#include <string>

#include <inbug2/export.hxx>

namespace inbug2
{
  // Print a greeting for the specified name into the specified
  // stream. Throw std::invalid_argument if the name is empty.
  //
  INBUG2_SYMEXPORT void
  say_hello (std::ostream&, const std::string& name);
}
