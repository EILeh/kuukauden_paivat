#include <stdio.h>
#include <ctype.h>
#include "kuukaudet.h"

const char *KK_NIMET[KK_LKM] = {
    "tammikuu", "helmikuu", "maaliskuu", "huhtikuu", "toukokuu", "kesäkuu",
    "heinäkuu", "elokuu", "syyskuu", "lokakuu", "marraskuu", "joulukuu"
};

const char KK_PAIVAT[2][KK_LKM] = {
    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int karkausvuosi(int vuosiluku)
{
    if ((vuosiluku % 4 == 0 && vuosiluku % 100 != 0) || vuosiluku % 400 == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

char kkPituus(const char *kkNimi, int vuosiluku)
{
    int i;
    int j;
    for (i = 0; i < KK_LKM; i++)
    {
        j = 0;
        while (kkNimi[j] != '\0' && tolower(kkNimi[j]) == tolower(KK_NIMET[i][j]))
        {
            j++;
        }
        if (kkNimi[j] == '\0')
        {
            return KK_PAIVAT[karkausvuosi(vuosiluku)][i];
        }
    }
    return -1;
}
