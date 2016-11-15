#ifndef color_generic_constant_silver
#define color_generic_constant_silver

// ::color::constant::silver( c )

#include "./base.hpp"

namespace color
 {
  namespace constant
   {

    namespace _internal
     {
      struct silver_w3c_type{};
     }

    namespace w3c
     {
      typedef  ::color::constant::base< ::color::constant::_internal::silver_w3c_type > silver_type;
     }

    //namespace vga
    // {// Same as w3c
    //  typedef  ::color::constant::w3c::silver_type  silver_type;
    // }

    typedef ::color::constant::w3c::silver_type silver_t, silver_type;

   }
 }

#endif 