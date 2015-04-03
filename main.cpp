/* 
 * Algorithmen und Datenstrukturen
 * 
 * Exercise 1: Hash Table - Aktien
 * 
 * Team members: Markus Richter (if14b006)
 *               Marco Kretschmer (if14b028),
 * 		 
 * 
 * File: main.cpp
 * 
 * Description:
 * This file contains the main() procedure
 * 
 */

#include <iostream>
#include <string>

using namespace std;

// Function prototypes
void showMenu(); // Show the main menu.
string promptUser(); // Prompt the user for input.

/* The framework application in which the code for hashtable, etc. is
 * later to be inserted.
 * 
 */
int main()
{
    string menuChoice;
    
    do
    {
        // Show main menu, prompt user for input and then act accordingly.
        showMenu();
        menuChoice = promptUser();
        
    }while( menuChoice != "quit" && menuChoice != "8" );
    
    return 0;
}

// Display the main menu.
//
void showMenu()
{
    cout << "ALGODAT - Aktienverwaltung\n\n"
         << "1. ADD: Neue Aktie hinzufuegen\n"
         << "2. DEL: Aktie loeschen\n"
         << "3. IMPORT: Kurswerte aus CSV-Datei importieren\n"
         << "4. SEARCH: Aktie suchen (Name oder Kuerzel)\n"
         << "5. PLOT: Schlusskurse der letzten 30 Tage anzeigen\n"
         << "6. SAVE <Dateiname>: Hashtable speichern\n"
         << "7. LOAD <Dateiname>: Hashtable laden\n"
         << "8. QUIT: Programm beenden\n\n"
         << "Auswahl (Nummer oder Befehl): ";
}


// Prompt the user for input and return it. Process elsewhere.
//
string promptUser()
{
    string tmp;
    getline(cin, tmp, '\n');
    return tmp;
}