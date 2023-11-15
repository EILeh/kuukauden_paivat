#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "kuukaudet.h"


int main(int argc, char *argv[])
{
    char kkNimi;
    int vuosiluku;
    int i;

    i = karkausvuosi(vuosiluku);

    if (i == 0)
    {

        printf("ei ole karkausvuosi :(");
    }

    else if (i == 1)
    {

        printf("karkausvuosi :)");
    }

    /*kkPituus(*kkNimi, vuosiluku)*/

    /*
    int i;

    for (i = 0; i < KK_LKM; i++)
    {

        printf("%d: %s\n", i, KK_NIMET[i]);
    }
    */

    return 0;
}
