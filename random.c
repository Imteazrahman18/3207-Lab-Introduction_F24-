#include <stdlib.h>
#include "random.h"

/*Function definition for randchar*/

char randchar() {
    return 'A' + (rand() % 26);
}