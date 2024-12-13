#include <stdio.h>
typedef struct BOOK
{
    char Title[50];
    char Author[50];
    char ISBN[14];
    int Quantity;
} book;
typedef struct Member
{
    char Name[20];
    int ID;
    char Book_loaned[14];
} mem;

typedef struct library
{
    book books[100]; // Array to store books
    mem members[50]; // Array to store members
    int bookCount;   // Keep track of number of books
    int memberCount; // Keep track of number of members
} library;

library lib = {0}; // Initialize all members to 0

void addBook();
void issueBook();
void returnBook();
void searchBook();
void displayMemberDetails();
int main()
{
    char i = 'Y';
    while (i == 'Y')
    {
        int a;
        printf("Library Management System\n");
        printf("1. Add Book\n");
        printf("2. Issue Book\n");
        printf("3. Return Book\n");
        printf("4. Search Book\n");
        printf("5. Display Member Details\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &a);

        switch (a)
        {
        case 1:
            addBook();
            break;
        case 2:
            issueBook();
            break;
        case 3:
            returnBook();
            break;
        case 4:
            searchBook();
            break;
        case 5:
            displayMemberDetails();
            break;
        case 0:
            printf("Thank you for using the system!\n");
            break;
        default:
            printf("Invalid choice!\n");
            break;
        }
        printf("Do you want do any other operations(Y/N): ");
        scanf("%c", &i);
    }
    return 0;
}
void addBook()
{
    book b;
    printf("Enter Book Title: ");
    scanf(" %[^\n]s", b.Title);
    printf("Enter Author Name: ");
    scanf(" %[^\n]s", b.Author);
    printf("Enter ISBN: ");
    scanf("%s", b.ISBN);
    printf("Enter Quantity: ");
    scanf("%d", &b.Quantity);

    // Add book to library
    if (lib.bookCount < 100)
    {
        lib.books[lib.bookCount++] = b;
        printf("Book added successfully!\n");
    }
    else
    {
        printf("Library is full! Cannot add more books.\n");
    }
}
