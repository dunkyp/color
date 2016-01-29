#ifndef color_cmy_set_green
#define color_cmy_set_green

// ::color::set::green( c, val )

#include "../../rgb/akin/cmy.hpp"
#include "../../rgb/trait/component.hpp"

#include "../category.hpp"

#include "../../generic/operation/invert.hpp"
#include "../../_internal/reformat.hpp"
#include "../../generic/trait/scalar.hpp"

 namespace color
  {
   namespace set
    {

     template< typename tag_name >
      inline
      void
      green
       (
         ::color::_internal::model< ::color::category::cmy<tag_name> >                                   & color_parameter,
        typename ::color::_internal::model< ::color::category::cmy<tag_name> >::component_input_const_type         component_parameter
       )
       {
        typedef ::color::category::cmy<tag_name>    category_type;
        typedef typename ::color::akin::rgb< category_type >::akin_type     akin_type;
        typedef double scalar_type;

        typedef  ::color::operation::_internal::invert< akin_type > invert_type; 
        typedef  ::color::_internal::reformat< category_type, akin_type, scalar_type > reformat_type;

        color_parameter.template set<1>( reformat_type::template process<1,1>( invert_type::template component<1>( component_parameter ) ) );
       }

    }
  }

#endif
