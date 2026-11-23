// Author: HE-Arc

// Standard includes
#include <stdio.h>
#include <string.h>

// Local includes
#include "ex_0031_Person.h"

typedef struct {
    char lastName[21];
    char firstName[21];
    int birthYear;
} Person;

const int CURRENT_YEAR = 2020;

void ex_0031_Person() {
    Person persons[10] = {
        {"Knuth", "Donald", 1938},
        {"Kernighan", "Brian", 1942},
        {"Ritchie", "Dennis", 1941},
        {"Thompson", "Ken", 1943},
        {"Minsky", "Marvin", 1927},
        {"Dijkstra", "Edsger", 1930},
        {"Stroustrup", "Bjarne", 1950}
    };

    int arraySize = sizeof(persons) / sizeof(persons[0]);

    int existingPersons = 0;
    char lastNameFirst[21];
    strcpy(lastNameFirst, persons[0].lastName);

    char lastNameLast[21];
    strcpy(lastNameLast, persons[0].lastName);

    char personsYoungerThan80[1000];

    for (int i = 0; i < arraySize; i++) {
        if (persons[i].birthYear) {
            // Persons set in array
            existingPersons++;

            // Persons less than 80 years old
            if (CURRENT_YEAR - persons[i].birthYear < 80) {
                int personAge = CURRENT_YEAR - persons[i].birthYear;

                char ageLine[100];
                snprintf(
                    ageLine,
                    sizeof(ageLine),
                    "%s %s %d years\n",
                    persons[i].firstName,
                    persons[i].lastName,
                    personAge
                );

                strcat(personsYoungerThan80, ageLine);
            }

            // Alphabetic order
            if (strcmp(persons[i].lastName, lastNameFirst) < 0) {
                strcpy(lastNameFirst, persons[i].lastName);
            }

            if (strcmp(persons[i].lastName, lastNameLast) > 0) {
                strcpy(lastNameLast, persons[i].lastName);
            }
        }
    }

    printf("%d Persons\n", existingPersons);
    printf("Persons less than 80 years old:\n");
    printf("%s", personsYoungerThan80);
    printf("\nAlphabetic order:\n");
    printf("The first is: %s\n", lastNameFirst);
    printf("The last is: %s\n", lastNameLast);
}