#include <hunspell/hunspell.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int isEnglishWord(const char *word) {
    Hunhandle *handle = Hunspell_create("/usr/share/hunspell/en_US.aff",
                                        "/usr/share/hunspell/en_US.dic");

    if (!handle) {
        return 1;
    }

    int isWord = Hunspell_spell(handle, word);
    printf("%d", isWord);

    Hunspell_destroy(handle);

    return isWord;
}

int main(int argc, char *argv[]) { return EXIT_SUCCESS; }
