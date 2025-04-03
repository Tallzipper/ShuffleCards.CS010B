#include <iostream>
#include <string> 
#include <algorithm>

#include "Deck.h"
#include "Card.h"

Deck::Deck()
{

    // Card Creation //

    Card c1 = Card('c', 1);
    Card c2 = Card('c', 2);
    Card c3 = Card('c', 3);
    Card c4 = Card('c', 4);
    Card c5 = Card('c', 5);
    Card c6 = Card('c', 6);
    Card c7 = Card('c', 7);
    Card c8 = Card('c', 8);
    Card c9 = Card('c', 9);
    Card c10 = Card('c', 10);
    Card c11 = Card('c', 11);
    Card c12 = Card('c', 12);
    Card c13 = Card('c',13);


    // Diamonds

    Card d1 = Card('d', 1);
    Card d2 = Card('d', 2);
    Card d3 = Card('d', 3);
    Card d4 = Card('d', 4);
    Card d5 = Card('d', 5);
    Card d6 = Card('d', 6);
    Card d7 = Card('d', 7);
    Card d8 = Card('d', 8);
    Card d9 = Card('d', 9);
    Card d10 = Card('d', 10);
    Card d11 = Card('d', 11);
    Card d12 = Card('d', 12);
    Card d13 = Card('d',13);


    // Hearts

    Card h1 = Card('h', 1);
    Card h2 = Card('h', 2);
    Card h3 = Card('h', 3);
    Card h4 = Card('h', 4);
    Card h5 = Card('h', 5);
    Card h6 = Card('h', 6);
    Card h7 = Card('h', 7);
    Card h8 = Card('h', 8);
    Card h9 = Card('h', 9);
    Card h10 = Card('h', 10);
    Card h11 = Card('h', 11);
    Card h12 = Card('h', 12);
    Card h13 = Card('h',13);


    // Spades

    Card s1 = Card('s', 1);
    Card s2 = Card('s', 2);
    Card s3 = Card('s', 3);
    Card s4 = Card('s', 4);
    Card s5 = Card('s', 5);
    Card s6 = Card('s', 6);
    Card s7 = Card('s', 7);
    Card s8 = Card('s', 8);
    Card s9 = Card('s', 9);
    Card s10 = Card('s', 10);
    Card s11 = Card('s', 11);
    Card s12 = Card('s', 12);
    Card s13 = Card('s',13);

    // Card Creation - end //

    // Put in Deck //


    // Spades 

    theDeck.push_back(s13);
    theDeck.push_back(s12);
    theDeck.push_back(s11);
    theDeck.push_back(s10);
    theDeck.push_back(s9);
    theDeck.push_back(s8);
    theDeck.push_back(s7);
    theDeck.push_back(s6);
    theDeck.push_back(s5);
    theDeck.push_back(s4);
    theDeck.push_back(s3);
    theDeck.push_back(s2);
    theDeck.push_back(s1);


    // Hearts

    theDeck.push_back(h13);
    theDeck.push_back(h12);
    theDeck.push_back(h11);
    theDeck.push_back(h10);
    theDeck.push_back(h9);
    theDeck.push_back(h8);
    theDeck.push_back(h7);
    theDeck.push_back(h6);
    theDeck.push_back(h5);
    theDeck.push_back(h4);
    theDeck.push_back(h3);
    theDeck.push_back(h2);
    theDeck.push_back(h1);


    // Diamonds

    theDeck.push_back(d13);
    theDeck.push_back(d12);
    theDeck.push_back(d11);
    theDeck.push_back(d10);
    theDeck.push_back(d9);
    theDeck.push_back(d8);
    theDeck.push_back(d7);
    theDeck.push_back(d6);
    theDeck.push_back(d5);
    theDeck.push_back(d4);
    theDeck.push_back(d3);
    theDeck.push_back(d2);
    theDeck.push_back(d1);


    // Clubs

    theDeck.push_back(c13);
    theDeck.push_back(c12);
    theDeck.push_back(c11);
    theDeck.push_back(c10);
    theDeck.push_back(c9);
    theDeck.push_back(c8);
    theDeck.push_back(c7);
    theDeck.push_back(c6);
    theDeck.push_back(c5);
    theDeck.push_back(c4);
    theDeck.push_back(c3);
    theDeck.push_back(c2);
    theDeck.push_back(c1);

    // Put in Deck - end //

}

Card Deck::dealCard()
{

    Card temp = theDeck.back();

    dealtCards.push_back(temp);
    theDeck.pop_back();

    return temp;

}

void Deck::shuffleDeck()
{

    for(unsigned int i = 0; i < dealtCards.size(); i++)
    {

        theDeck.push_back(dealtCards.at(i));

    }

    dealtCards.clear();

    random_shuffle(theDeck.begin(),theDeck.end());

}

unsigned Deck::deckSize() const
{

    return theDeck.size();

}