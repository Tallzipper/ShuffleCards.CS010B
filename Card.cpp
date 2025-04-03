#include <iostream>
#include <string> 
#include <vector> 


using namespace std;

#include "Card.h"

Card::Card()
{

    this->suit = 'c';
    this->rank = 2;

}

Card::Card(char suit, int rank)
{

    suit = tolower(suit);

    if(suit == 'c' || suit == 'd'|| suit == 'h'||  suit == 's')
    {
        this->suit = suit;
    }
    else
    {
        this->suit = 'c';
    }

    if(rank < 0 || rank > 13)
    {
        this->rank = 2;
    }
    else
    {
        this->rank = rank;
    }

}

char Card::getSuit() const
{

    return this->suit;

}

int Card::getRank() const
{

    return this->rank;

}

ostream & operator<<(ostream& out, const Card& card)
{
   
    vector<string> suits = {"SuitE", "Clubs", "Diamonds", "Hearts", "Spades"}; // Unneeded but want to optimize
    vector<string> ranks = {"RankE", "Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};

    string suit;

    if(card.suit == 'c')
    {

        suit = "Clubs";

    }
    else if(card.suit == 'd')
    {

        suit = "Diamonds";

    }
    else if(card.suit == 'h')
    {

        suit = "Hearts";

    }
    else if(card.suit == 's')
    {

        suit = "Spades";

    }

    out << ranks.at(card.rank) << " of " << suit;
    return out;

}