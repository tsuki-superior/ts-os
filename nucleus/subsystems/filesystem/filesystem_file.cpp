//By Tsuki Superior
#include "./filesystem_file.hpp"

File::File(void)
{
    permissions = new Permissions(false, false, false);
}

File::File(char *pa, Permissions per)
{
}

File::~File()
{
}