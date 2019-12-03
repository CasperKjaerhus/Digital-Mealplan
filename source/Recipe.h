#include "Ingredient.h"
#include "FileHandler.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Recipe{
    char *name;
    int calories;
    Ingredient *ingredients;
    int amount_of_ingredients;
} Recipe;

Recipe *readRecipes();
int countIngredientInRecipe(char *name);
