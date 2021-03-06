//By Tsuki Superior
#ifndef __TSOS_MODULE_CORE__
#define __TSOS_MODULE_CORE__

#include "driver.hpp"
#include "types.hpp"

// The base class of TS/OS modules
template <class T>
class Module
{
public:
  // Constructor
  Module(void)
  {
    name = "";
    driver = nullptr;
  };

  // Destructor
  ~Module(){};

  // The full name of the modules's target
  char *name;

  // Attach a driver
  bool attachdriver(T &d)
  {
    // The driver has to be for the right machine and run on that machine's configuration
    if (d.detectsystem())
    {
      driver = &d;
      name = driver->name;
      return true;
    }
    return false;
  };

protected:
  T *driver;
};

#endif