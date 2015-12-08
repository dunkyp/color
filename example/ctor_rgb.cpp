#include <iostream>
#include <iomanip>
#include <stdint>

#include "color/color.hpp"



int main( int argc, char *argv[] )
 {
   color::rgb<bool>           c0( { true, false, false} );
   color::rgb<float>          c1( { 0.5, 0.6,0.7}  );
   color::rgb<std::uint64_t>  c2( { 640, 1270 , 1920} );
   color::rgb<std::uint32_t>  c3( { 64, 127 , 192} );
   color::rgb<std::uint16_t>  c4( { 6, 12 , 19} );
   color::rgb<std::uint8_t>   c5( { 7, 6 , 3} );
   
  // Here is how to convert from one to another
  g = r;

  return EXIT_SUCCESS;
 }
