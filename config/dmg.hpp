#define MACHINE DOT_MATRIX_GAME
#define VIDEO_DRIVERS       \
    {                       \
        DMG_SCREEN_driver() \
    }
#define INPUT_DRIVERS        \
    {                        \
        DMG_GAMEPAD_driver() \
    }
#define DISK_DRIVERS           \
    {                          \
        DMG_CARTRIDGE_driver() \
    }
#define SERIAL_DRIVERS       \
    {                        \
        DMG_IO_PORT_driver() \
    }
#define BOOT_DRIVERS      \
    {                     \
        DMG_BOOT_driver() \
    }
#define FILESYSTEM_DRIVERS                                            \
    {                                                                 \
        FAT12_driver(), FAT16_driver(), FAT32_driver(), CDFS_driver() \
    }
#define SOUND_DRIVERS \
    {                 \
    }
#define PROCESS_DRIVERS             \
    {                               \
        ELF_driver()                \
    }
#define VIDEO_DRIVER_COUNT 1
#define INPUT_DRIVER_COUNT 1
#define DISK_DRIVER_COUNT 1
#define SERIAL_DRIVER_COUNT 1
#define BOOT_DRIVER_COUNT 1
#define FILESYSTEM_DRIVER_COUNT 4
#define SOUND_DRIVER_COUNT 0
#define PROCESS_DRIVER_COUNT 2