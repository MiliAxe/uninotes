#include <hunspell/hunspell.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[]) {
    Hunhandle *handle = Hunspell_create(NULL, NULL);

    if (!handle) {
        return 1;
    }

    const char *word = "hello";

    int isWord = Hunspell_spell(handle, word);
    printf("%d", isWord);

    return EXIT_SUCCESS;
}
