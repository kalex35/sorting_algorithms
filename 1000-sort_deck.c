#include <stdlib.h>

// Compare function for qsort
int compare_cards(const void* a, const void* b) {
    const card_t* card_a = (const card_t*)a;
    const card_t* card_b = (const card_t*)b;

    // First, sort by suit
    if (card_a->suit < card_b->suit)
        return -1;
    else if (card_a->suit > card_b->suit)
        return 1;

    // If the suits are the same, sort by card value
    if (card_a->value < card_b->value)
        return -1;
    else if (card_a->value > card_b->value)
        return 1;

    return 0;
}

// Function to sort the deck of cards
void sort_deck(deck_node_t** deck) {
    // Count the number of cards in the deck
    int num_cards = 0;
    deck_node_t* current = *deck;
    while (current != NULL) {
        num_cards++;
        current = current->next;
    }

    // Convert the deck to an array for qsort
    card_t* card_array = (card_t*)malloc(num_cards * sizeof(card_t));
    current = *deck;
    for (int i = 0; i < num_cards; i++) {
        card_array[i] = current->card;
        current = current->next;
    }

    // Use qsort to sort the array of cards
    qsort(card_array, num_cards, sizeof(card_t), compare_cards);

    // Convert the sorted array back to a deck
    current = *deck;
    for (int i = 0; i < num_cards; i++) {
        current->card = card_array[i];
        current = current->next;
    }

    free(card_array);
}
