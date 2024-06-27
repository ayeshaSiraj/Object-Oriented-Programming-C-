#include <iostream>
#include <cstring>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Card
{
    int face;
    int suit;
    static string faces[13];
    static string suits[4];

    public:
    Card(int f , int s)
    {
        face=f;
        suit=s;
    }
    string toString()
    {
        return faces[face] +"of"+ suits[suit];
    }
};
string Card::faces[13]={"Ace","Two","Three","Four","Five","Six","Seven","Eight","Nine","Ten"};
string Card::suits[4]={"Diamonds","Hearts","Spade","Clubs"};


class Deck_of_Cards
{
    Card Deck[52];
    int Current_Card;

    public:
    Deck_of_Cards()
    {
        Current_Card=0;
        for(int i=0;i<52 ; i++)
         Deck[i]=Card(i%13,i/13);
    }


    Card DealCard()
    {
        return Deck[Current_Card++];//Moving to the next card
    }

    void Shuffle()
    {
        for(int i=0 ; i<52 ; i++)
        {
            int j=rand()%52;
            
            Card temp=Deck[i];
            Deck[i]=Deck[j];
            Deck[j]=temp;
        }
    }


    bool MoreCards()
    {
        if(Current_Card<52)
        return true;

        else
        return false;
    }



};

int main()
{
    srand(time(NULL));

    Deck_of_Cards D;
    D.Shuffle();

    do{
        
      cout<<D.DealCard().toString()<<endl;//calling the to string method of the current card that is returne d by the method
    }while(D.MoreCards());
}