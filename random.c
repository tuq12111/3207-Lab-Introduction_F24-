#include <stdlib.h>
#include "random.h"

char ranchar()
{
    return 'A' + rand() % 26;
}