#ifndef color_YDbDr_trait_component_uint16
#define color_YDbDr_trait_component_uint16

#include "../../category.hpp"

#include "../../../_internal/utility/component/array.hpp"

#include "../../../generic/trait/component.hpp"



namespace color
 {
  namespace trait
   {

    template< >
     struct component< ::color::category::YDbDr_uint8 >
      : public ::color::_internal::utility::component::array< std::uint8_t, typename ::color::trait::index< ::color::category::YDbDr_uint8 >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::YDbDr_uint16 >
      : public ::color::_internal::utility::component::array< std::uint16_t, typename ::color::trait::index< ::color::category::YDbDr_uint16 >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::YDbDr_uint32 >
      : public ::color::_internal::utility::component::array< std::uint32_t, typename ::color::trait::index< ::color::category::YDbDr_uint32 >::instance_type >
      {
      };

    template< >
     struct component< ::color::category::YDbDr_uint64 >
      : public ::color::_internal::utility::component::array< std::uint64_t, typename ::color::trait::index< ::color::category::YDbDr_uint64 >::instance_type >
      {
      };


   }
 }

#endif
