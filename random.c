#include <stdlib.h>
#include "random.h"

char randchar()
{
    return 'A' + rand() % 26;
}