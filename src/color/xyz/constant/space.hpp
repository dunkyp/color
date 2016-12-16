#ifndef color_contant_xyz_rgb
#define color_contant_xyz_rgb

// ::color::constant::xyz::space::primary< scalar_name, sRGB_entity >::x()

#include "./white.hpp"

namespace color
 {
  namespace constant
   {
    namespace xyz
     {
      namespace space
       {

        enum name_enum
         {
          LabGamut_entity,
          Adobe_entity,
          Apple_entity,
          Best_entity,
          Beta_entity,
          Bruce_entity,
          CIE_entity,
          ColorMatch_entity,
          Don_entity,
          ECI_entity,
          Ekta_Space_PS5_entity,
          NTSC_entity,
          PAL_SECAM_entity,
          ProPhoto_entity,
          SMPTE_C_entity,
          sRGB_entity,
          WideGamut_entity,
         };

        template< typename scalar_name, ::color::constant::xyz::space::name_enum name_number >
         struct primary
          {
           public:
             typedef scalar_name scalar_type;
           private:
             typedef std::array<scalar_type,2> coord_type;
           public:
             static /* constexpr*/ coord_type red()  { return coord_type{}; }
             static /* constexpr*/ coord_type green(){ return coord_type{}; }
             static /* constexpr*/ coord_type blue() { return coord_type{}; }
          };


#define COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( DP_system, DP_red_x, DP_red_y, DP_green_x, DP_green_y, DP_blue_x, DP_blue_y  )  \
        template< typename scalar_name >                                              \
         struct primary< scalar_name, DP_system >                                     \
          {                                                                           \
           public:                                                                    \
             typedef scalar_name scalar_type;                                         \
           private:                                                                   \
             typedef std::array<scalar_type,2> coord_type;                            \
           public:                                                                    \
             static coord_type red()  { return coord_type{DP_red_x,DP_red_y}; }       \
             static coord_type green(){ return coord_type{DP_green_x, DP_green_y}; }  \
             static coord_type blue() { return coord_type{DP_blue_x, DP_blue_y }; }   \
          }

      //COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::LabGamut_entity,       )
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Adobe_entity,          0.6400, 0.3300,  0.2100, 0.7100,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Apple_entity,          0.6250, 0.3400,  0.2800, 0.5950,  0.1550, 0.0700 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Best_entity,           0.7347, 0.2653,  0.2150, 0.7750,  0.1300, 0.0350 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Beta_entity,           0.6888, 0.3112,  0.1986, 0.7551,  0.1265, 0.0352 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Bruce_entity,          0.6400, 0.3300,  0.2800, 0.6500,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::CIE_entity,            0.7350, 0.2650,  0.2740, 0.7170,  0.1670, 0.0090 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::ColorMatch_entity,     0.6300, 0.3400,  0.2950, 0.6050,  0.1500, 0.0750 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Don_entity,            0.6960, 0.3000,  0.2150, 0.7650,  0.1300, 0.0350 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::ECI_entity,            0.6700, 0.3300,  0.2100, 0.7100,  0.1400, 0.0800 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::Ekta_Space_PS5_entity, 0.6950, 0.3050,  0.2600, 0.7000,  0.1100, 0.0050 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::NTSC_entity,           0.6700, 0.3300,  0.2100, 0.7100,  0.1400, 0.0800 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::PAL_SECAM_entity,      0.6400, 0.3300,  0.2900, 0.6000,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::ProPhoto_entity,       0.7347, 0.2653,  0.1596, 0.8404,  0.0366, 0.0001 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::SMPTE_C_entity,        0.6300, 0.3400,  0.3100, 0.5950,  0.1550, 0.0700 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::sRGB_entity,           0.6400, 0.3300,  0.3000, 0.6000,  0.1500, 0.0600 );
        COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::WideGamut_entity,      0.7350, 0.2650,  0.1150, 0.8260,  0.1570, 0.0180 );
      //COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE( ::color::constant::xyz::space::KodakDC_entity,        0.6492, 0.3314,  0.3219, 0.5997,  0.1548, 0.0646 ); 

#undef COLOR_CONTATNT_XYZ_SPACE_PRIMARY_SPECIALIZE

        namespace _internal
         {

          template< typename scalar_name, ::color::constant::xyz::space::name_enum name_number >
           struct base_gamma
            {
             typedef ::color::constant::xyz::space::_internal::base_gamma<scalar_name,name_number > this_type;
             static scalar_name/* constexpr */ g(){ return scalar_name(1)/scalar_name(2.4);     }
             static scalar_name/* constexpr */ s(){ return 12.9232102;     } // pow(1+f(), g()) * pow(g()-1,g()-1)/pow(g(),g())/ pow( f(), g()-1 )
             static scalar_name/* constexpr */ f(){ return 0.55;           }
             static scalar_name/* constexpr */ t(){ return this_type::f()/(this_type::g()-1)/this_type::s(); }
            };

#define COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE(DP_name,DP_g, DP_s,DP_f,DP_t)   \
          template< typename scalar_name >                                             \
           struct base_gamma< scalar_name, DP_name >                                   \
            {                                                                          \
             static scalar_name/* constexpr */ g(){ return scalar_name(DP_g); }        \
             static scalar_name/* constexpr */ s(){ return scalar_name(DP_s); }        \
             static scalar_name/* constexpr */ f(){ return scalar_name(DP_f); }        \
             static scalar_name/* constexpr */ t(){ return scalar_name(DP_t); }        \
            }

          //COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::LabGamut_entity, 
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::Adobe_entity,            1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::Apple_entity,            1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::Best_entity,             1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::Beta_entity,             1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::Bruce_entity,            1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::CIE_entity,              1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::ColorMatch_entity,       1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::Don_entity,              1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::ECI_entity,              1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::Ekta_Space_PS5_entity,   1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::NTSC_entity,             1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::PAL_SECAM_entity,        1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::ProPhoto_entity,         1, 1, 0, 0 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::SMPTE_C_entity,          1, 1, 0, 0 );
          //COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::sRGB_entity, scalar_name(1)/scalar_name(2.4), 12.92, 0.55, 0.003130668442500634032841238415964307578107582565 );
          COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE( ::color::constant::xyz::space::WideGamut_entity,        1, 1, 0, 0 );


#undef COLOR_CONTATNT_XYZ_SPACE_GAMMA_BASE_SPECIALIZE

         }

        template< typename scalar_name, ::color::constant::xyz::space::name_enum name_number = ::color::constant::xyz::space::sRGB_entity >
         struct gamma
          : public ::color::constant::xyz::space::_internal::base_gamma<scalar_name, name_number >
          {
           typedef scalar_name scalar_type;
           typedef ::color::constant::xyz::space::_internal::base_gamma<scalar_name, name_number > base_type;

           static scalar_type  encode( scalar_type value )
            {
             if( base_type::f() < value ) return ( scalar_type(1) + base_type::f() ) * pow( value, base_type::g() ) - base_type::f();
             return base_type::s() * value;
            }

           static scalar_type  decode( scalar_type value )  // XYZ <- RGB
            {
             if ( value < ( base_type::t() * base_type::s() ) ) return value / base_type::s();
             return pow( ( value + base_type::f() ) / ( scalar_type(1) + base_type::f() ), base_type::g() ); 
            }

          };

        template<  ::color::constant::xyz::space::name_enum name_number >
         struct white
          {
           typedef ::color::constant::xyz::white::name_enum     name_type;
           typedef ::color::constant::xyz::white::degree_enum degree_type;

           static name_type     name() { return name_type::D65_entity; }
           static degree_type degree() { return name_type::two_entity; }
          };

#define COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( DP_space, DP_name, DP_degree )   \
        template<>                                                           \
         struct white<DP_space>                                              \
          {                                                                  \
           typedef ::color::constant::xyz::white::name_enum     name_type;   \
           typedef ::color::constant::xyz::white::degree_enum degree_type;   \
                                                                             \
           static name_type     name() { return DP_name; }                   \
           static degree_type degree() { return DP_degree; }                 \
          }

        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( LabGamut_entity,        ::color::constant::xyz::white::D65_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( Adobe_entity,           ::color::constant::xyz::white::D65_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( Apple_entity,           ::color::constant::xyz::white::D65_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( Best_entity,            ::color::constant::xyz::white::D50_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( Beta_entity,            ::color::constant::xyz::white::D50_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( Bruce_entity,           ::color::constant::xyz::white::D65_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( CIE_entity,             ::color::constant::xyz::white::E_entity,   ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( ColorMatch_entity,      ::color::constant::xyz::white::D50_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( Don_entity,             ::color::constant::xyz::white::D50_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( ECI_entity,             ::color::constant::xyz::white::D50_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( Ekta_Space_PS5_entity,  ::color::constant::xyz::white::D50_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( NTSC_entity,            ::color::constant::xyz::white::C_entity,   ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( PAL_SECAM_entity,       ::color::constant::xyz::white::D65_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( ProPhoto_entity,        ::color::constant::xyz::white::D50_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( SMPTE_C_entity,         ::color::constant::xyz::white::D65_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( sRGB_entity,            ::color::constant::xyz::white::D65_entity, ::color::constant::xyz::white::two_entity );
        COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE( WideGamut_entity,       ::color::constant::xyz::white::D50_entity, ::color::constant::xyz::white::two_entity );


#undef COLOR_CONTATNT_XYZ_SPACE_WHITE_SPECIALIZE
       }
     }
   }
 }

#endif
