#include <iostream>
#include <cstdlib>
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <vector>
#include <algorithm>

using namespace std;

#include "Deck.h"
#include "Card.h"

// Returns true if vector of Cards passed in contains at least 2 Cards with the same rank.
bool hasPair(const vector<Card> &hand);

// Sends to output stream a hand of Cards on a single line, 
// each Card separated by a comma.
// If the vector is empty, do not output anything.
// Example (vector size of 3): Ace of Spades, Two of Hearts, King of Clubs 
ostream & operator<<(ostream &, const vector<Card> &);

bool operator<(const Card&, const Card&);

int main() {
    srand(2222);

    unsigned int handNum = 0;
    unsigned int simNum = 0;
    unsigned int pairFound = 0;

    string fileBool;
    string fileName;


    cout << "Do you want to output all hands to a file?(Yes/No) ";
    cin >> fileBool;

    if(fileBool == "Yes" || fileBool == "yes")
    {

        cout << "Enter name of output file:";
        cin >> fileName;

    }

    cout << "Enter number of cards per hand: ";
    cin >> handNum;
    vector<Card> hand; 

    cout << "Enter number of deals (simulations): ";
    cin >> simNum;


    Deck Deck;

    for(unsigned int j = 0; j < simNum; j++)
    {

         Deck.shuffleDeck();

        for(unsigned int i = 0; i < handNum; i++)
        {

            Card temp;

            temp = (Deck.dealCard());

            hand.push_back(temp);

        }

        if(hasPair(hand))
        {

            pairFound++;
            
        }

        hand.clear();

    }

    double percent = double(pairFound) / double(simNum); 

    cout << "Chances of receiving a pair in a hand of " << handNum << " cards is: " << percent*100 << "%";

    // Card s1 = Card('s', 1);
    // Card s2 = Card('s', 2);
    // Card s3 = Card('s', 3);
    // Card s4 = Card('s', 4);
    // Card s5 = Card('s', 5);
    // Card s6 = Card('s', 6);
    // Card s7 = Card('s', 7);
    // Card s8 = Card('s', 8);
    // Card s9 = Card('s', 9);
    // Card s10 = Card('s', 10);
    // Card s11 = Card('s', 11);
    // Card s12 = Card('s', 12);
    // Card s13 = Card('s',13);        

    // cout << "s1: " << s1 << endl;
    // cout << "s2: " << s2 << endl;
    // cout << "s3: " << s3 << endl;
    // cout << "s4: " << s4 << endl;
    // cout << "s5: " << s5 << endl;
    // cout << "s6: " << s6 << endl;
    // cout << "s7: " << s7 << endl;
    // cout << "s8: " << s8 << endl;
    // cout << "s9: " << s9 << endl;
    // cout << "s10: " << s10 << endl;
    // cout << "s11: " << s11 << endl;
    // cout << "s12: " << s12 << endl;
    // cout << "s13: " << s13 << endl;

    return 0;
}

bool hasPair(const vector<Card> &hand)
{

    bool ans = false;

    vector<int> collect;

    for(unsigned int i = 0; i < hand.size(); i++)
    {

        collect.push_back(hand.at(i).getRank());

    }

    sort(collect.begin(),collect.end());

    for(unsigned int i = 0; i + 1 < collect.size(); i++)
    {

        if(collect.at(i) == collect.at(i+1))
        {

            ans = true;

        }

    }

    return ans;

}

bool operator<(const Card& a, const Card& b)
{

    return a.getRank() < b.getRank();

}