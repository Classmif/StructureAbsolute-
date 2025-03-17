#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MIFS 100
#define TITLE_LENGTH 100
#define CHARACTERS_LENGTH 200
#define THEMES_LENGTH 200
#define MORAL_LENGTH 200

typedef struct {
    char title[TITLE_LENGTH];
    char characters[CHARACTERS_LENGTH];
    char themes[THEMES_LENGTH];
    char moral[MORAL_LENGTH];
} Mif;

typedef struct {
    Mif mifs[MAX_MIFS];
    int count;
} MifEngine;

void init_engine(MifEngine *engine) {
    engine->count = 0;
}

void add_mif(MifEngine *engine, Mif mif) {
    if (engine->count < MAX_MIFS) {
        engine->mifs[engine->count++] = mif;
    } else {
        printf("The maximum number of myths has been reached.\n");
    }
}

void display_mifs(const MifEngine *engine) {
    for (int i = 0; i < engine->count; i++) {
        printf("Миф %d:\n", i + 1);
        printf("  Headline: %s\n", engine->mifs[i].title);
        printf("  Characters: %s\n", engine->mifs[i].characters);
        printf("  Topics: %s\n", engine->mifs[i].themes);
        printf("  Morality: %s\n\n", engine->mifs[i].moral);
    }
}

int main() {
    MifEngine engine;
    init_engine(&engine);

    Mif example_mif = {
			"The Myth of Prometheus",
			"Prometheus, Zeus",
			"resistance, sacrifice, light of knowledge",
			"Knowledge and progress require sacrifice."
    };

    add_mif(&engine, example_mif);

    Mif another_mif = {
			"The Myth of Hercules",
			"Hercules, Hera",
			"strength, trials, redemption",
			"True strength is shown in overcoming difficulties."
    };

    add_mif(&engine, another_mif);

    display_mifs(&engine);

    return 0;
}