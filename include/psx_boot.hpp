//By Tsuki Superior
#ifndef __TSOS_PSX_BOOT_DRIVER__
#define __TSOS_PSX_BOOT_DRIVER__

#include "boot_driver.hpp"

class PSX_BOOT_driver : public Boot_driver
{
public:
  // Constructor
  PSX_BOOT_driver(void);

  // Destructor
  ~PSX_BOOT_driver();

  // Detect the type of system its running on
  bool detectsystem(void) override;

  void reset(void) override;

  // Reboot the system
  void reboot(void) override;

  // Shutdown the system
  void shutdown(void) override;
};

#endif
