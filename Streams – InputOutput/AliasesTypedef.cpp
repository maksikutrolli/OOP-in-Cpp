/*
 *      Author: MaksiKutrolli
 */


#include <iostream>

// Define a Class for representing a Card type
class Card {
public:
    int cardNumber;
    std::string cardHolder;
};

// Create a typedef alias CardPtr for Card*
typedef Card* CardPtr;

int main() {
    // Create a Card object and a CardPtr pointing to it
    Card myCard;
    myCard.cardNumber = 12345;
    myCard.cardHolder = "Alice";

    CardPtr ptrToCard = &myCard;

    // Access the card information using the pointer
    std::cout << "Card Number: " << ptrToCard->cardNumber << std::endl;
    std::cout << "Card Holder: " << ptrToCard->cardHolder << std::endl;

    return 0;
}
