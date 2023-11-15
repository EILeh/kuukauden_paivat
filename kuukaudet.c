#include <stdio.h>

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

const char KK_PAIVAT[2][KK_LKM] = {

    {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},

    {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31}
};

int karkausvuosi(int vuosiluku)
{
    if ((vuosiluku % 4 == 0) && (vuosiluku % 100 != 0) && (vuosiluku % 400 == 0))
    {

        return 0;
    }
    return 1;


}

/*char kkPituus(const char *kkNimi, int vuosiluku)
{


}
*/
