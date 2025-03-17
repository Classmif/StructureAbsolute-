/*
** 2025-04-17
**
** The author disclaims copyright to this source code.  In place of
** a legal notice, here is a blessing:
**
**    May you do good and not evil.
**    May you find forgiveness for yourself and forgive others.
**    May you share freely, never taking more than you give.
**
*/

#include <stdio.h>

typedef struct {
    char title[100];
    char characters[200];
    char themes[200];
    char moral[200];
} Mif;

void display_info(Mif mif) {
    printf("Title: %s\n", mif.title);
    printf("Characters: %s\n", mif.characters);
    printf("Themes: %s\n", mif.themes);
    printf("Moral: %s\n", mif.moral);
}

int main() {
    Mif example_mif = {
        "The Myth of Prometheus",
		"Prometheus, Zeus",
		"resistance, sacrifice, light of knowledge",
		"Knowledge and progress require sacrifice."
    };

    display_info(example_mif);
    return 0;
}
