#ifndef color_cmy_trait_component_uint
#define color_cmy_trait_component_uint

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::cmy_uint8 >
      : public ::color::_internal::utility::component::array< std::uint8_t, typename ::color::trait::index< ::color::category::cmy_uint8 >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::cmy_uint16 >
      : public ::color::_internal::utility::component::array< std::uint16_t, typename ::color::trait::index< ::color::category::cmy_uint16 >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::cmy_uint32 >
      : public ::color::_internal::utility::component::array< std::uint32_t, typename ::color::trait::index< ::color::category::cmy_uint32 >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::cmy_uint64 >
      : public ::color::_internal::utility::component::array< std::uint64_t, typename ::color::trait::index< ::color::category::cmy_uint64 >::instance_type >
      {
      };

   }
 }

#endif
