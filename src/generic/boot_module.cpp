//By Tsuki Superior

#include "boot_module.hpp"
#include "nucleus_instance.hpp"

Boot::Boot(void)
{
#ifdef __PERSONAL_COMPUTER__
    static GRUB2_driver grub2_driver = GRUB2_driver();

    attachdriver(grub2_driver);
#endif

#ifdef __GAMEBOY_ADVANCED__
    static GBA_BOOT_driver gba_boot_driver = GBA_BOOT_driver();

    attachdriver(gba_boot_driver);
#endif

#ifdef __PLAYSTATION_X__
    static PSX_BOOT_driver psx_boot_driver = PSX_BOOT_driver();

    attachdriver(psx_boot_driver);
#endif
}

Boot::~Boot()
{
}

void Boot::reboot(void) const
{
    driver->reboot();
}

void Boot::shutdown(void) const
{
    // Destroy tsos, to trigger the kernel destruction
    driver->shutdown();

    tsos->video.settextbackgroundcolor(0xff, 0x00, 0x00);
    tsos->video.settextforegroundcolor(0xff, 0xff, 0xff);
    tsos->video.reset();
    tsos->video.clear();
    tsos->video.putstring(0, tsos->video.scroll++, "Shutting down... \n");
    tsos->video.putstring(0, tsos->video.scroll++, "Do not touch the power button.\n");
    tsos->process.killall();
    tsos->disk.commitall();
    tsos->boot.reboot();
    tsos->video.putstring(0, tsos->video.scroll++, "You may now touch the power button.\n");
}

void Boot::fission(const char *errormsg) const
{
    tsos->video.putstring(0, tsos->video.scroll++, errormsg);
}