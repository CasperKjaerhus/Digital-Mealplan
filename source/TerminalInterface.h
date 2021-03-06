#ifndef TERMINALINTERFACE_H
#define TERMINALINTERFACE_H
#include <stdio.h>
#include <stdlib.h>
#include "FileHandler.h"
#include "Mealplan.h"
#include "Recipe.h"
#include <time.h>
#include "ShoppingList.h"

void new_mealplan(Recipe *recipes, int amount_of_recipes);
void amount_of_people(Recipe *mealplan, int *people_amount);
void printMealplan(Recipe *mealplan, int amount);
void last_mealplan(Recipe *recipes, Recipe *mealplan, int amount_of_recipes, int *people);
void previous_mealplan(int *mealplan_recipe_amount, Recipe *recipes, int amount_of_recipes);
void showIng_changeMeal(Recipe *recipes, Recipe *mealplan, int recipe_amount);
void updateAmountOfPeople(Recipe *mealplan, int amount_currently, int amount_to_change);
#endif