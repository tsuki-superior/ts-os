//By Tsuki Superior
#ifndef __TSOS_NUCLEUS_SOUND_DRIVER__
#define __TSOS_NUCLEUS_SOUND_DRIVER__

#include "driver.hpp"
#include "types.hpp"

class Sound_driver : public Driver
{
public:
  // Constructor
  Sound_driver(void);

  ~Sound_driver();

  // Play a tone
  virtual void playtone(uint32_t tone) = 0;

  virtual void killsound(void) = 0;
};

#endif
