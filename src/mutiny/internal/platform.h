#ifndef MUTINY_PLATFORM_H
#define MUTINY_PLATFORM_H

#ifdef EMSCRIPTEN
  #define USE_SDL
#elif _MSC_VER
  //#define USE_SDL
  #define USE_GLUT
  #define USE_OPENAL
#else
  #define USE_GLUT
  #define USE_OPENAL
  #define HAS_TR1_NAMESPACE
#endif

#ifdef _WIN32
  #define USE_WINAPI 1
#endif

#ifdef HAS_TR1_NAMESPACE
  #include <tr1/memory>
  #define shared std::tr1::shared_ptr
  #define weak std::tr1::weak_ptr
#else
  #include <memory>
  #define shared std::shared_ptr
  #define weak std::weak_ptr
#endif

#endif
