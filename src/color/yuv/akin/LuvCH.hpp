#ifndef color_yuv_akin_LuvCH
#define color_yuv_akin_LuvCH

#include "../../generic/akin/yuv.hpp"
#include "../category.hpp"
#include "../../LuvCH/category.hpp"

namespace color
 {
  namespace akin
   {

    template
     <
       typename tag_name , typename  ::color::constant::yuv::reference_enum      yuv_reference_number

     >
     struct yuv< ::color::category::LuvCH< tag_name >, yuv_reference_number  >
      {
       public:
         typedef ::color::category::yuv< tag_name, yuv_reference_number > akin_type;
      };

   }
 }

#endif
