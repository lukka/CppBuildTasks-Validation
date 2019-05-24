// main.cpp
#include <sqlite3.h>
#include <stdio.h>

int main()
{
    printf("%s\n", sqlite3_libversion());
    return 0;
}