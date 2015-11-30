# Yet another c++ library thats implemets color.

All color classes fulfil next very restricted conditions:
- No Virtual function ( and destructors also )
- Minimal memory footprint
```c
        color::rgb<float>f;//!< This will pack ONLY three consective floats in memory 
```

- Ability to copy instances with memcpy, memmove
- Coonversions are fast as possible.
```c++
        color::rgb<float>       f;<br/>
        color::rgb<std::uint32_t> u;<br/>
        color::rgb<double> d;<br/>
        f = u; //!< Use conversion from packed uint32_t to float not some generic<br/>
        f= d; //!< THis qill use only conversion from double to float<br/>
```

[Want to see more](doc/index.html)