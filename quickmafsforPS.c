
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

// Function declarations
void appraisals(void);
void cybernetics(void);
void plasma_cartridge(void);
void heisenberg(void);
void clear_screen(void);
int read_choice(int min, int max);
void pause_screen(void);

// CLEAR SCREEN
void clear_screen(void)
{
    system("cls");
}

// READ KEY IMMEDIATELY
int read_choice(int min, int max)
{
    int key;

    while (1)
    {
        key = _getch();

        if (key >= '0' + min && key <= '0' + max)
        {
            printf("%c\n", key);
            return key - '0';
        }

        printf("\nInvalid choice. Try again: ");
    }
}

// WAIT FOR KEY PRESS
void pause_screen(void)
{
    printf("\nPress any key to return to the main menu...");
    _getch();
}

// MAIN MENU
int main(void)
{
    int choice;

    do
    {
        clear_screen();

        printf("<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3\n");
        printf("  Quick Mafs Probably Stolen With Haura!\n");
        printf("<3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3 <3\n\n");

        printf("What is my baby want to do today?\n\n");
        printf("1. Appraisals\n");
        printf("2. Heisenberg\n");
        printf("3. Exit :(\n\n");

        printf("Press the key, babe: ");
        choice = read_choice(1, 3);

        clear_screen();

        switch (choice)
        {
            case 1:
                appraisals();
                break;

            case 2:
                heisenberg();
                break;

            case 3:
                printf("=================\n");
                printf(" Goodbye, my love :( \n");
                printf("=================\n");
                break;
        }

    } while (choice != 3);

    return 0;
}

// APPRAISALS MENU
void appraisals(void)
{
    int appraisal_choice;

    while (1)
    {
        clear_screen();

        printf("========== Appraisals ==========\n\n");
        printf("1. Cybernetics\n");
        printf("2. Plasma Cartridge\n");
        printf("3. Ribwich\n");
        printf("4. Back\n\n");

        printf("Press the key, babe: ");
        appraisal_choice = read_choice(1, 4);

        clear_screen();

        switch (appraisal_choice)
        {
            case 1:
                cybernetics();
                break;

            case 2:
                plasma_cartridge();
                break;

            case 3:
                printf("========== Ribwich ==========\n\n");
                printf("Ribwich is worth $10\n");
                pause_screen();
                break;

            case 4:
                return;
        }
    }
}

// CYBERNETICS CALCULATOR
void cybernetics(void)
{
    int price = 100;
    int material_choice;
    int condition_choice;
    int controlinterface_choice;
    int bladed_choice;
    int armored_choice;

    clear_screen();

    // MATERIAL
    printf("========== Cybernetics ==========\n\n");
    printf("Material?\n");
    printf("1. Normal\n");
    printf("2. Carbon\n");
    printf("3. Gold\n\n");

    printf("Press the key, babe: ");
    material_choice = read_choice(1, 3);

    if (material_choice == 2)
        price += 50;
    else if (material_choice == 3)
        price += 200;

    clear_screen();

    // CONDITION
    printf("========== Cybernetics ==========\n\n");
    printf("Condition?\n");
    printf("1. None\n");
    printf("2. Wears\n");
    printf("3. Damages\n\n");

    printf("Press the key, babe: ");
    condition_choice = read_choice(1, 3);

    if (condition_choice == 2)
        price -= 35;
    else if (condition_choice == 3)
        price -= 85;

    clear_screen();

    // CONTROL INTERFACE
    printf("========== Cybernetics ==========\n\n");
    printf("Control Interface?\n");
    printf("1. EMG\n");
    printf("2. EMG+\n");
    printf("3. Neural Interface\n");
    printf("4. Unspecified\n\n");

    printf("Press the key, babe: ");
    controlinterface_choice = read_choice(1, 4);

    if (controlinterface_choice == 2)
        price += 45;
    else if (controlinterface_choice == 3)
        price += 120;
    else if (controlinterface_choice == 4)
        price -= 60;

    clear_screen();

    // BLADED
    printf("========== Cybernetics ==========\n\n");
    printf("Bladed?\n");
    printf("1. Yes\n");
    printf("2. No\n\n");

    printf("Press the key, babe: ");
    bladed_choice = read_choice(1, 2);

    if (bladed_choice == 1)
        price += 80;

    clear_screen();

    // ARMORED
    printf("========== Cybernetics ==========\n\n");
    printf("Armored?\n");
    printf("1. Yes\n");
    printf("2. No\n\n");

    printf("Press the key, babe: ");
    armored_choice = read_choice(1, 2);

    if (armored_choice == 1)
        price += 50;

    clear_screen();

    // SPECIAL BONUSES
    if (material_choice == 2 && armored_choice == 1 &&
        bladed_choice == 1 && controlinterface_choice > 1 &&
        condition_choice == 1)
    {
        price += 100;
    }

    if (material_choice == 3 && controlinterface_choice == 3 &&
        condition_choice == 1)
    {
        price += 200;
    }
    
    if (price < 50)
        price = 50;

    // RESULT
    printf("========== Appraisal Result ==========\n\n");
    printf("The price of Haura's appraisal is: $%d\n", price);

    pause_screen();
}

// PLASMA CARTRIDGE CALCULATOR
void plasma_cartridge(void)
{
    int price = 300;

    int wear_choice;
    int cracked_choice;
    int screws_choice;
    int reinforced_choice;
    int color_choice;
    int manufacturer_choice;

    clear_screen();

    // WEAR
    printf("========== Plasma Cartridge ==========\n\n");
    printf("Cartridge Wear:\n");
    printf("1. Standard\n");
    printf("2. Light Wear\n");
    printf("3. Heavy Wear\n\n");

    printf("Press the key, babe: ");
    wear_choice = read_choice(1, 3);

    if (wear_choice == 2)
        price -= 45;
    else if (wear_choice == 3)
        price -= 90;

    clear_screen();

    // CRACKS
    printf("========== Plasma Cartridge ==========\n\n");
    printf("Cracked?\n");
    printf("1. Yes\n");
    printf("2. No\n\n");

    printf("Press the key, babe: ");
    cracked_choice = read_choice(1, 2);

    if (cracked_choice == 1)
        price -= 150;

    clear_screen();

    // EXPOSED SCREWS
    printf("========== Plasma Cartridge ==========\n\n");
    printf("Exposed Screws?\n");
    printf("1. Yes\n");
    printf("2. No\n\n");

    printf("Press the key, babe: ");
    screws_choice = read_choice(1, 2);

    if (screws_choice == 1)
        price -= 30;

    clear_screen();

    // REINFORCED
    printf("========== Plasma Cartridge ==========\n\n");
    printf("Reinforced?\n");
    printf("1. Yes\n");
    printf("2. No\n\n");

    printf("Press the key, babe: ");
    reinforced_choice = read_choice(1, 2);

    if (reinforced_choice == 1)
        price += 60;

    clear_screen();

    // PLASMA COLOR
    printf("========== Plasma Cartridge ==========\n\n");
    printf("Plasma Color:\n");
    printf("1. Standard\n");
    printf("2. Low Grade\n");
    printf("3. High Grade\n\n");

    printf("Press the key, babe: ");
    color_choice = read_choice(1, 3);

    if (color_choice == 2)
        price -= 150;
    else if (color_choice == 3)
        price += 150;

    clear_screen();

    // MANUFACTURER
    printf("========== Plasma Cartridge ==========\n\n");
    printf("Manufacturer:\n");
    printf("1. Wild's Rides (WLD)\n");
    printf("2. ZhongHua Shipbuilding (ZHS)\n");
    printf("3. Republic Naval Requisition (RNR)\n");
    printf("4. Ignition Lab (IGN)\n\n");

    printf("Press the key, babe: ");
    manufacturer_choice = read_choice(1, 4);

    clear_screen();

    // MANUFACTURER BONUSES

    // WILD'S RIDES
    if (manufacturer_choice == 1 && color_choice != 3)
        price += 60;

    // ZHONGHUA
    if (manufacturer_choice == 2 &&
        wear_choice == 1 &&
        cracked_choice == 2 &&
        screws_choice == 2 &&
        color_choice == 1)
    {
        price += 120;
    }

    // REPUBLIC NAVAL
    if (manufacturer_choice == 3 &&
        cracked_choice == 2 &&
        color_choice == 1)
    {
        price += 120;
    }

    // IGNITION LAB
    if (manufacturer_choice == 4 &&
        wear_choice == 1 &&
        cracked_choice == 2 &&
        screws_choice == 2 &&
        reinforced_choice == 2 &&
        color_choice == 3)
    {
        price += 750;
    }

    // MINIMUM VALUE
    if (price < 90)
        price = 90;

    // RESULT
    printf("========== Appraisal Result ==========\n\n");
    printf("The price of Haura's appraisal is: $%d\n", price);

    pause_screen();
}

// HEISENBERG MENU
void heisenberg(void)
{
    clear_screen();

    printf("========== Heisenberg ==========\n\n");
    printf("Your future calculations go here.\n");

    pause_screen();
}
