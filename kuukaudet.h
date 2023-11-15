#ifndef KUUKAUDET_H_INCLUDED
#define KUUKAUDET_H_INCLUDED

#include <stdio.h>

enum Kuukaudet
{
    TAMMIKUU = 0, HELMIKUU = 1, MAALISKUU = 2, HUHTIKUU = 3,
    TOUKOKUU = 4, KESAKUU = 5, HEINAKUU = 6, ELOKUU = 7,
    SYYSKUU = 8, LOKAKUU = 9, MARRASKUU = 10, JOULUKUU = 11
};



int karkausvuosi(int vuosiluku);

/*char kkPituus(const char *kkNimi, int vuosiluku);*/

#endif
