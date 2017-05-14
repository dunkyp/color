#ifndef color_xyz_akin_xyz
#define color_xyz_akin_xyz

#include "../../generic/akin/xyz.hpp"
#include "../category.hpp"
#include "../../xyz/category.hpp"

namespace color
 {
  namespace akin
   {

    template< >struct xyy< ::color::category::xyz_uint8   >{ typedef ::color::category::xyy_uint8   akin_type; };
    template< >struct xyy< ::color::category::xyz_uint16  >{ typedef ::color::category::xyy_uint16  akin_type; };
    template< >struct xyy< ::color::category::xyz_uint32  >{ typedef ::color::category::xyy_uint32  akin_type; };
    template< >struct xyy< ::color::category::xyz_uint64  >{ typedef ::color::category::xyy_uint64  akin_type; };
    template< >struct xyy< ::color::category::xyz_float   >{ typedef ::color::category::xyy_float   akin_type; };
    template< >struct xyy< ::color::category::xyz_double  >{ typedef ::color::category::xyy_double  akin_type; };
    template< >struct xyy< ::color::category::xyz_ldouble >{ typedef ::color::category::xyy_ldouble akin_type; };

   }
 }

#endif