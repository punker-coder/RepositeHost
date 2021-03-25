#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <unistd.h>
#include "Operations.h"
using namespace std;

int main(int argc, char *argv[])
{
    int const COL = 5;
    int const ROW = 5;
    int a[ROW][COL];
    char o;
    int rs;
    opterr = 0;
    while ((rs = getopt(argc, argv, ":r:c:t:h")) != -1)
    {
        switch (rs)
        {
        case 'r': SWAPROW(a, 5);
            break;
        case 'c': SWAPCOL(a, 5);
            break;
        case 't': TRANSP(a, 5, 5);
            break;
        case 'h': printhelp();
            return 0;
        default: printerror();
            return 1;
        }
    }
}