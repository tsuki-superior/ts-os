//By Tsuki Superior
#ifndef __TSOS_GRUB2_DRIVER__
#define __TSOS_GRUB2_DRIVER__

#include "boot_driver.hpp"
#include "io.hpp"

class GRUB2_driver : public Boot_driver
{
public:
  //Constructor
  GRUB2_driver(void);

  //Destructor
  ~GRUB2_driver();

  //Detect the type of system its running on
  bool detectsystem(void) override;

  void reset(void) override;

  //Reboot the system
  void reboot(void) override;

  // Shutdown the system
  void shutdown(void) override;
};
#endif
