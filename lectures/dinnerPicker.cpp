/*
Name: Jeremy Bergen

Dinner selector program
*/
#include <iostream>
#include <string>
#include <cassert>
#include <random>

using namespace std;

bool getPass(string);
string foodCat();
string foodLoc(string);
void printLoc(string, string);

int main(int argc, char *argv[]) {
    bool passMatch;
    string userPass = "42";
    string foodType, foodLocation;

    srand(time(0));

    passMatch = getPass(userPass);

    //if (passMatch == true) {
    // if(passMatch) {
    //     // we entered the correct password
    // }
    if(!passMatch) {
        cout << "Passwords do not match!!!" << endl;
        return 0;
    }

    foodType = foodCat();
    // cout << "DEBUG: foodType: " << foodType << endl;
    foodLocation = foodLoc(foodType);
    // cout << "DEBUG: foodLocation: " << foodLocation << endl;
    printLoc(foodLocation, foodType);

    return 0;
}

void printLoc(string foodLocation, string foodType) {
    if(foodType == "delivery") {
        cout << "Prepare to hurt your wallet............." << endl;
    }
    cout << "Your dinner location is............ " << foodLocation << "." << endl;
}

string foodLoc(string foodType) {
    
    if(foodType == "fastfood") {
        int randNum = random()%8;
        // McDonalds, Wendys, TacoBell, Dominos, Subway, Chipotle, Qdoba, SafewaySushi
        if(randNum == 0) {return "McDonald's";}
        if(randNum == 1) {return "Wendy's";}
        if(randNum == 2) {return "TacoBell";}
        if(randNum == 3) {return "Dominos";}
        if(randNum == 4) {return "Subway";}
        if(randNum == 5) {return "Chipotle";}
        if(randNum == 6) {return "Qdoba";}
        return "Safeway Sushi";
        // switch(randNum) {
        //     case 0:
        //         return "McDonald's";
        //         break;
        //     case 1:
        //         return "Wendy's";
        //         break;
        //     case 2:
        //         return "Taco Bell";
        //         break;
        //     case 3:
        //         return "Dominos";
        //         break;
        //     case 4:
        //         return "Subway";
        //         break;
        //     case 5:
        //         return "Chipotle";
        //         break;
        //     case 6:
        //         return "Qdoba";
        //         break;
        //     default:
        //         return "Safeway Sushi";
        // }
    } else if (foodType == "sitdown") {
        int randNum = random()%6;
        // Enzos, ElTapatio, Tequilas, Chilis, Suehiros, SafewaySushi
        switch(randNum) {
            case 0:
                return "Enzo's";
                break;
            case 1:
                return "El Tapatio";
                break;
            case 2:
                return "Tequila's";
                break;
            case 3:
                return "Chili's";
                break;
            case 4:
                return "Suehiro's";
                break;
            default:
                return "Safeway Sushi";
        }
    } else if (foodType == "takeout") {
        int randNum = random()%5;
        // Dominos, DragonTreasure, Munchies, ElTapatio, SafewaySushi
        switch(randNum) {
            case 0:
                return "Dominos";
                break;
            case 1:
                return "El Tapatio";
                break;
            case 2:
                return "Dragon Treasure";
                break;
            case 3:
                return "Munchies";
                break;
            default:
                return "Safeway Sushi";
        }
    } else {
        int randNum = random()%4;
        // PizzaHut, Walmart, SafewaySushi, Pho88
        switch(randNum) {
            case 0:
                return "Pizza Hut";
                break;
            case 1:
                return "WalMart";
                break;
            case 2:
                return "Pho88";
                break;
            default:
                return "Safeway Sushi";
        }
    }
    return "";
}

string foodCat() {
    int randNum = random()%4;
    // fastfood
    // sitdown
    // takeout
    // delivery

    switch(randNum) {
        case 0:
            return "fastfood";
            break;
        case 1:
            return "sitdown";
            break;
        case 2:
            return "takeout";
            break;
        default:
            return "delivery";
    }
    // if(randNum == 0) {
    //     return "fastfood";
    // } else if(randNum == 1) {
    //     return "sitdown";
    // } else if(randNum == 2) {
    //     return "takeout";
    // } else {
    //     return "deliver";
    // }

    return "";
}

bool getPass(string userPass) {
    string enterPass;
    cout << "Please enter the password to continue: ";
    getline(cin, enterPass);

    if (userPass == enterPass) {
        return true;
    }
    return false;
}