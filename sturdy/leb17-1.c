#include <stdio.h>
#include <string.h>

// สร้างโครงสร้างข้อมูลหนังสือ
struct Book {
    int id;
    char title[100];
    char author[100];
    int year;
};

// ประกาศชื่อโครงสร้างเป็น type
typedef struct Book Book;

// ฟังก์ชันประกาศล่วงหน้า
void addBook(Book books[], int *count);
void searchBook(Book books[], int count, char title[]);
void displayBooks(Book books[], int count);

int main() {
    Book books[100]; // เก็บได้สูงสุด 100 เล่ม
    int count = 0;
    int choice;
    char searchTitle[100];

    while (1) {
        printf("\n===== Library Menu =====\n");
        printf("1. Add new book\n");
        printf("2. Search book by title\n");
        printf("3. Display all books\n");
        printf("4. Exit\n");
        printf("Choose an option: ");
        scanf("%d", &choice);
        getchar(); // เคลียร์ buffer

        switch (choice) {
            case 1:
                addBook(books, &count);
                break;
            case 2:
                printf("Enter Title to Search: ");
                fgets(searchTitle, sizeof(searchTitle), stdin);
                searchTitle[strcspn(searchTitle, "\n")] = '\0'; // ตัด newline
                searchBook(books, count, searchTitle);
                break;
            case 3:
                displayBooks(books, count);
                break;
            case 4:
                printf("Exiting program...\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}

// ------------------- ฟังก์ชันเพิ่มหนังสือ -------------------
void addBook(Book books[], int *count) {
    printf("Enter Book ID: ");
    scanf("%d", &books[*count].id);
    getchar(); // ล้าง buffer

    printf("Enter Title: ");
    fgets(books[*count].title, sizeof(books[*count].title), stdin);
    books[*count].title[strcspn(books[*count].title, "\n")] = '\0'; // ลบ \n

    printf("Enter Author: ");
    fgets(books[*count].author, sizeof(books[*count].author), stdin);
    books[*count].author[strcspn(books[*count].author, "\n")] = '\0';

    printf("Enter Year: ");
    scanf("%d", &books[*count].year);

    (*count)++;
    printf("Book added successfully!\n");
}

// ------------------- ฟังก์ชันค้นหาหนังสือ -------------------
void searchBook(Book books[], int count, char title[]) {
    int i, found = 0;

    for (i = 0; i < count; i++) {
        if (strcmp(books[i].title, title) == 0) {
            printf("Book ID: %d\n", books[i].id);
            printf("Title: %s\n", books[i].title);
            printf("Author: %s\n", books[i].author);
            printf("Year: %d\n", books[i].year);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Book not found.\n");
    }
}

// ------------------- ฟังก์ชันแสดงรายชื่อหนังสือ -------------------
void displayBooks(Book books[], int count) {
    int i;
    if (count == 0) {
        printf("No books in the library.\n");
        return;
    }

    for (i = 0; i < count; i++) {
        printf("Book ID: %d\n", books[i].id);
        printf("Title: %s\n", books[i].title);
        printf("Author: %s\n", books[i].author);
        printf("Year: %d\n", books[i].year);
        printf("-----------------------\n");
    }
}
