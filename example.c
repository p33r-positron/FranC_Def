#include <stdio.h>
#include "franc.h"

entier principal(entier n_arguments, caractere** arguments) {
    pour(mini i = 1 ; i <= n_arguments ; i++)
    {
         écrisf(arguments[i]);
    }
    mets("");
    return 0;
}
