## 0x1B. C - Sorting algorithms & Big O


# 0. Bubble sort

[![Bubble-sort with Hungarian ("Csángó") folk dance](https://youtu.be/lyZQPjUT5B4)](https://www.youtube.com/watch?v=lyZQPjUT5B4)

Write a function that sorts an array of integers in ascending order using the [Bubble sort](https://alx-intranet.hbtn.io/rltoken/awhP8BhtkGi-lwmMc2-KAw) algorithm

*  Prototype: `void bubble_sort(int *array, size_t size);`
*  You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `0-O`, the big O notations of the time complexity of the Bubble sort algorithm, with 1 notation per line:

*  in the best case
*  in the average case
*  in the worst case


#  1. Insertion sort

[![Insert-sort with Romanian folk dance](https://youtu.be/ROalU379l3U)](https://www.youtube.com/watch?v=ROalU379l3U)

Write a function that sorts a doubly linked list of integers in ascending order using the [Insertion sort](https://alx-intranet.hbtn.io/rltoken/GocxRKbPdsmERXeOHMCO2w) algorithm

*  Prototype: `void insertion_sort_list(listint_t **list);`
*  You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
*  You’re expected to print the `list` after each time you swap two elements (See example below)

Write in the file `1-O`, the big O notations of the time complexity of the Insertion sort algorithm, with 1 notation per line:

*  in the best case
*  in the average case
*  in the worst case


#  2. Selection sort

[![Select-sort with Gypsy folk dance](https://youtu.be/Ns4TPTC8whw)](https://www.youtube.com/watch?v=Ns4TPTC8whw)

Write a function that sorts an array of integers in ascending order using the [Selection sort](https://alx-intranet.hbtn.io/rltoken/SEbg0fBEraioQcl-igvUSw) algorithm

*  Prototype: `void selection_sort(int *array, size_t size);`
*  You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `2-O`, the big O notations of the time complexity of the Selection sort algorithm, with 1 notation per line:

*  in the best case
*  in the average case
*  in the worst case



#  3. Quick sort

[![Quick-sort with Hungarian (Küküllőmenti legényes) folk dance](https://youtu.be/ywWBy6J5gz8)](https://www.youtube.com/watch?v=ywWBy6J5gz8)

Write a function that sorts an array of integers in ascending order using the [Quick sort](https://alx-intranet.hbtn.io/rltoken/_pBTrH0Xyo4BRmQn4CtnMg) algorithm

*  Prototype: `void quick_sort(int *array, size_t size);`
*  You must implement the `Lomuto` partition scheme.
*  The pivot should always be the last element of the partition being sorted.
*  You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `3-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

*  in the best case
*  in the average case
*  in the worst case



#  4. Shell sort - Knuth Sequence

Write a function that sorts an array of integers in ascending order using the [Shell sort](https://alx-intranet.hbtn.io/rltoken/FdpP4Qin3iDAaz1kuPD2Kg) algorithm, using the `Knuth sequence`

*  Prototype: `void shell_sort(int *array, size_t size);`
*  You must use the following sequence of intervals (a.k.a the Knuth sequence):
   -  `n+1 = n * 3 + 1`
   -  `1, 4, 13, 40, 121, ...`
*  You’re expected to print the `array` each time you decrease the interval (See example below).

**No big O notations of the time complexity of the Shell sort (Knuth sequence) algorithm needed - as the complexity is dependent on the size of array and gap**



#  5. Cocktail shaker sort

Write a function that sorts a doubly linked list of integers in ascending order using the [Cocktail shaker sort](https://alx-intranet.hbtn.io/rltoken/bwa4mHfUbbWTB8J2OIHvpA) algorithm

*  Prototype: `void cocktail_sort_list(listint_t **list);`
*  You are not allowed to modify the integer `n` of a node. You have to swap the nodes themselves.
*  You’re expected to print the `list` after each time you swap two elements (See example below)

Write in the file `101-O`, the big O notations of the time complexity of the Cocktail shaker sort algorithm, with 1 notation per line:

*  in the best case
*  in the average case
*  in the worst case



#  6. Counting sort

Write a function that sorts an array of integers in ascending order using the [Counting sort](https://alx-intranet.hbtn.io/rltoken/ChcoDSCqnJHGC-qrSPEGHQ) algorithm

*  Prototype: `void counting_sort(int *array, size_t size);`
*  You can assume that `array` will contain only numbers `>= 0`
*  You are allowed to use `malloc` and `free` for this task
*  You’re expected to print your counting array once it is set up (See example below)
   -  This array is of size `k + 1` where `k` is the largest number in `array`

Write in the file `102-O`, the big O notations of the time complexity of the Counting sort algorithm, with 1 notation per line:

*  in the best case
*  in the average case
*  in the worst case



#  7. Merge sort

Write a function that sorts an array of integers in ascending order using the [Merge sort](https://alx-intranet.hbtn.io/rltoken/8sZ3nAhd_YLNzHCgNbbf8A) algorithm

*  Prototype: `void merge_sort(int *array, size_t size);`
*  You must implement the `top-down` merge sort algorithm
   -  When you divide an array into two sub-arrays, the size of the left array should always be <= the size of the right array. i.e. `{1, 2, 3, 4, 5}` -> `{1, 2}, {3, 4, 5}`
  -  Sort the left array before the right array
*  You are allowed to use `printf`
*  You are allowed to use `malloc` and `free` only once (only one **call**)
*  Output: see example

Write in the file `103-O`, the big O notations of the time complexity of the Merge sort algorithm, with 1 notation per line:

*  in the best case
*  in the average case
*  in the worst case



#  8. Heap sort

Write a function that sorts an array of integers in ascending order using the [Heap sort](https://alx-intranet.hbtn.io/rltoken/YKYRdSdomaVkNrtNv1KS6Q) algorithm

*  Prototype: `void heap_sort(int *array, size_t size);`
*  You must implement the `sift-down` heap sort algorithm
*  You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `104-O`, the big O notations of the time complexity of the Heap sort algorithm, with 1 notation per line:

*  in the best case
*  in the average case
*  in the worst case



#  9. Radix sort

Write a function that sorts an array of integers in ascending order using the [Radix sort](https://alx-intranet.hbtn.io/rltoken/pBsj4j_AF_mJAgNZWmX3VQ) algorithm

*  Prototype: `void radix_sort(int *array, size_t size);`
*  You must implement the `LSD` radix sort algorithm
*  You can assume that `array` will contain only numbers `>= 0`
*  You are allowed to use `malloc` and `free` for this task
*  You’re expected to print the `array` each time you increase your `significant digit` (See example below)



#  10. Bitonic sort

Write a function that sorts an array of integers in ascending order using the [Bitonic sort](https://alx-intranet.hbtn.io/rltoken/N-bjAbxm5yr4DoeIDz5lLw) algorithm

*  Prototype: `void bitonic_sort(int *array, size_t size);`
*  You can assume that `size` will be equal to `2^k`, where `k >= 0` (when `array` is not `NULL` …)
*  You are allowed to use `printf`
*  You’re expected to print the `array` each time you swap two elements (See example below)
*  Output: see example

Write in the file `106-O`, the big O notations of the time complexity of the Bitonic sort algorithm, with 1 notation per line:

*  in the best case
*  in the average case
*  in the worst case



#  11. Quick Sort - Hoare Partition scheme

Write a function that sorts an array of integers in ascending order using the [Quick sort](https://alx-intranet.hbtn.io/rltoken/_pBTrH0Xyo4BRmQn4CtnMg) algorithm

*  Prototype: `void quick_sort_hoare(int *array, size_t size);`
*  You must implement the `Hoare` partition scheme.
*  The pivot should always be the last element of the partition being sorted.
*  You’re expected to print the `array` after each time you swap two elements (See example below)

Write in the file `107-O`, the big O notations of the time complexity of the Quick sort algorithm, with 1 notation per line:

*  in the best case
*  in the average case
*  in the worst case


#  12. Dealer

[![You're Second Best](https://youtu.be/_HJlGWXzlLA)](https://www.youtube.com/watch?v=_HJlGWXzlLA)

Write a function that sorts a deck of cards.

*  Prototype: `void sort_deck(deck_node_t **deck);`
*  You are allowed to use the C standard library function `qsort`
*  Please use the following data structures:

```
typedef enum kind_e
{
   SPADE = 0,
   HEART,
   CLUB,
   DIAMOND
} kind_t;

/**
 * struct card_s - Playing card
 *
 * @value: Value of the card
 * From "Ace" to "King"
 * @kind: Kind of the card
 */
typedef struct card_s
{
   const char *value;
   const kind_t kind;
} card_t;

/**
 * struct deck_node_s - Deck of card
 *
 * @card: Pointer to the card of the node
 * @prev: Pointer to the previous node of the list
 * @next: Pointer to the next node of the list
 */
typedef struct deck_node_s
{
   const card_t *card;
   struct deck_node_s *prev;
   struct deck_node_s *next;
} deck_node_t;
```

*  You have to push you `deck.h` header file, containing the previous data structures definition
*  Each node of the doubly linked list contains a card that you cannot modify. You have to swap the nodes.
*  You can assume there is exactly `52` elements in the doubly linked list.
*  You are free to use the sorting algorithm of your choice
*  The deck must be ordered:
   -  From `Ace` to `King`
   -  From Spades to Diamonds
   -  See example [1000-main.c](https://github.com/Okinbird/sorting_algorithms/blob/master/test_files/1000-main.c)
					    