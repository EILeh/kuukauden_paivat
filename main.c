#include <stdio.h>
#include <stdlib.h>
#include "kuukaudet.h"

enum Kuukaudet
{
    TAMMIKUU = 0, HELMIKUU = 1, MAALISKUU = 2, HUHTIKUU = 3,
    TOUKOKUU = 4, KESAKUU = 5, HEINAKUU = 6, ELOKUU = 7,
    SYYSKUU = 8, LOKAKUU = 9, MARRASKUU = 10, JOULUKUU = 11
};

enum {
    KK_LKM = 12
};

const char *KK_NIMET[KK_LKM] = {
    "tammikuu",
    "helmikuu",
    "maaliskuu",
    "huhtikuu",
    "toukokuu",
    "kesakuu",
    "heinakuu",
    "elokuu",
    "syyskuu",
    "lokakuu",
    "marraskuu",
    "joulukuu"

};


int main()
{
    int i;

    for (i = 0; i < KK_LKM; i++)
    {

        printf("%d: %s\n", i, KK_NIMET[i]);
    }

    return 0;
}
