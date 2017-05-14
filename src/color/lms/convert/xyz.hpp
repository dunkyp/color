#ifndef color_lms_convert_xyz
#define color_lms_convert_xyz

#include "../../_internal/convert.hpp"

#include "../category.hpp"


#include "../../xyz/xyz.hpp"

#include "../../_internal/normalize.hpp"
#include "../../_internal/diverse.hpp"



namespace color
 {
  namespace _internal
   {

    template
     <
       typename lms_tag_name
      ,typename xyz_tag_name
     >
     struct convert
      <
        ::color::category::lms<  lms_tag_name >
       ,::color::category::xyz<  xyz_tag_name >
      >
      {
       public:
         typedef ::color::category::lms< lms_tag_name >    lms_category_type, category_left_type;
         typedef ::color::category::xyz< xyz_tag_name >    xyz_category_type, category_right_type;
         typedef double scalar_type;
         typedef  ::color::category::lms< scalar_type >  lmsSCALAR_category_type;
         typedef  ::color::category::xyz< scalar_type >  xyzSCALAR_category_type;

         typedef ::color::model< lms_category_type >  lms_model_type;
         typedef ::color::model< xyz_category_type >  xyz_model_type;

         typedef ::color::trait::container<category_left_type>     container_left_trait_type;
         typedef ::color::trait::container<category_right_type>    container_right_trait_type;

         typedef typename container_left_trait_type::input_type         container_left_input_type;
         typedef typename container_right_trait_type::input_const_type  container_right_const_input_type;

         typedef ::color::_internal::reformat< lms_category_type, lmsSCALAR_category_type, scalar_type >     reformatLMS_type;
         typedef ::color::_internal::reformat< xyzSCALAR_category_type, xyz_category_type, scalar_type >     reformatXYZ_type;

         typedef ::color::constant::xyz::illuminant::point< scalar_type, ::color::constant::xyz::illuminant::D65_entity, ::color::constant::xyz::illuminant::two_entity  > white_point_type;

         static void process
          (
            container_left_input_type         left
           ,container_right_const_input_type  right
          )
          {
           scalar_type x = reformatXYZ_type::template process<0,0>( container_right_trait_type::template get<0>( right ) );
           scalar_type y = reformatXYZ_type::template process<1,1>( container_right_trait_type::template get<1>( right ) );
           scalar_type z = reformatXYZ_type::template process<2,2>( container_right_trait_type::template get<2>( right ) );

           scalar_type l = 2*x;
           scalar_type m = 2*y;
           scalar_type s = 2*z;

           container_left_trait_type::template set<0>( left, reformatLMS_type::template process< 0, 0>( l ) );
           container_left_trait_type::template set<1>( left, reformatLMS_type::template process< 1, 1>( m ) );
           container_left_trait_type::template set<2>( left, reformatLMS_type::template process< 2, 2>( s ) );
          }


        };

   }
 }

#endif