//Driver by Tsuki Superior
#ifndef __TSOS_RS232_DRIVER__
#define __TSOS_RS232_DRIVER__

#include "serial_driver.hpp"

class RS232_driver : public Serial_driver
{
public:
    RS232_driver(void);
    bool detectsystem(void);
    bool isdevicethere(void);
    uint8_t exchangebyte(uint8_t b);
};

#endif