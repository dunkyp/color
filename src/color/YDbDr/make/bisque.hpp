#ifndef color_YDbDr_make_bisque
#define color_YDbDr_make_bisque

// ::color::make::bisque( c )

 namespace color
  {
   namespace make
    { //RGB equivalents: std::array<double,3>( { 1, 0.875, 0.75 } ) - rgb(255,223,191) - #FFDFBF

     template< typename tag_name >
      inline
      void bisque( ::color::model< ::color::category::YDbDr< tag_name > > & color_parameter )
       {
        typedef ::color::category::YDbDr< tag_name >         category_left_type;
        typedef ::color::model< category_left_type  > left_type;

        typedef ::color::YDbDr< double >      right_type;

        static left_type local( right_type( { 0.898061125, -2.98028886, -0.27336371 } ) );

        color_parameter = local;
       }

    }
  }

#endif