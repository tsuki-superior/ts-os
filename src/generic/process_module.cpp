//By Tsuki Superior
#include "process_module.hpp"

Process::Process(void)
{
    static ELF_driver elf_driver = ELF_driver();
    attachdriver(elf_driver);
}

Process::~Process(void)
{
    killall();
}

uint8_t Process::spawn(char *path)
{
}

void Process::kill(uint8_t pid)
{
}

void Process::killall(void)
{
}

void *Process::allocatememory(uint32_t len)
{
}

void Process::freememory(void *mem)
{
}
