typedef enum {
    CLUBS,
    DIAMONDS,
    HEARTS,
    SPADES
} suit_t;

typedef struct {
    suit_t suit;
    int value;
} card_t;

typedef struct deck_node {
    card_t card;
    struct deck_node* next;
} deck_node_t;
