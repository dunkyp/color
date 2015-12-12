#ifndef color_yiq_double
#define color_yiq_double

#include "../_internal/utility/type/index.hpp"
#include "../_internal/utility/component/array.hpp"
#include "../_internal/utility/container/array.hpp"

namespace color
 {
  namespace _internal
   {

    template< >
     struct index< ::color::category::yiq_double >
      : public color::_internal::utility::type::index< unsigned >
      {
      };

    template< >
     struct component< ::color::category::yiq_double >
      : public ::color::_internal::utility::component::array< double, unsigned>
      {
      };

    template< >
     struct container< ::color::category::yiq_double >
      : public  ::color::_internal::utility::container::array< double, 3 >
      {
      };

   }
 }

#endif