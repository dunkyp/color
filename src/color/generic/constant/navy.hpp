#ifndef color_generic_constant_navy
#define color_generic_constant_navy

// ::color::constant::navy( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct navy_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::navy_w3c_type > navy_type;
     }

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::navy_type  navy_type;
    // }

    typedef ::color::constant::w3c::navy_type navy_t, navy_type;

   }
 }

#endif
