//By Tsuki Superior
#include "disk_module.hpp"
#include "nucleus_instance.hpp"

Disk::Disk(void)
{
#ifdef __PERSONAL_COMPUTER__
    static CD_driver cd_driver = CD_driver();

    attachdriver(cd_driver);
#endif

#ifdef __GAMEBOY_ADVANCED__
    static GBA_CARTRIDGE_driver gba_cartridge_driver = GBA_CARTRIDGE_driver();

    attachdriver(gba_cartridge_driver);
#endif

#ifdef __PLAYSTATION_X__
    static PSX_DISK_driver psx_disk_driver = PSX_DISK_driver();

    attachdriver(psx_disk_driver);
#endif
}

Disk::~Disk()
{
}

uint8_t *Disk::getbytes(uint16_t offset, uint8_t len) const
{
    uint8_t *buffer = (uint8_t *)"";
    driver->getbytes(buffer, offset, len);
    return buffer;
}

uint16_t Disk::getsectorsize(void) const
{
    return driver->getsectorsize();
}

void Disk::commitall(void) const
{
}
