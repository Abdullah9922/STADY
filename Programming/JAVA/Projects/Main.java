// File: Book.java

import java.util.ArrayList;
import java.util.List;
import java.io.IOException;
import java.util.Scanner;


class Book {
    private String title;
    private String author;
    private String isbn;
    private boolean isAvailable;

    // Constructor to initialize a Book object
    public Book(String title, String author, String isbn) {
        this.title = title;
        this.author = author;
        this.isbn = isbn;
        this.isAvailable = true; // By default, a new book is available
    }

    // Getters
    public String getTitle() {
        return title;
    }

    public String getAuthor() {
        return author;
    }

    public String getIsbn() {
        return isbn;
    }

    public boolean isAvailable() {
        return isAvailable;
    }

    // Setters for availability
    public void setAvailable(boolean available) {
        isAvailable = available;
    }

    // Method to display book details (demonstrates Polymorphism if overridden)
    public void displayDetails() {
        System.out.println("Title: " + title + ", Author: " + author + ", ISBN: " + isbn + ", Available: " + (isAvailable ? "Yes" : "No"));
    }

    @Override
    public String toString() {
        return "Book [Title: '" + title + "', Author: '" + author + "', ISBN: '" + isbn + "']";
    }
}




// File: Library.java

class Member {
    private String name;
    private int memberId;
    private List<Book> borrowedBooks;

    public Member(String name, int memberId) {
        this.name = name;
        this.memberId = memberId;
        this.borrowedBooks = new ArrayList<>();
    }

    // Getters
    public String getName() {
        return name;
    }

    public int getMemberId() {
        return memberId;
    }

    public List<Book> getBorrowedBooks() {
        return borrowedBooks;
    }

    // borrowBook and returnBook methods remain the same
    public void borrowBook(Book book) {
        if (book.isAvailable()) {
            book.setAvailable(false);
            this.borrowedBooks.add(book);
            System.out.println( name + " successfully borrowed '" + book.getTitle() + "'.");
        } else {
            System.out.println("   Sorry, the book '" + book.getTitle() + "' is currently not available.");
        }
    }

    public void returnBook(Book book) {
        if (borrowedBooks.contains(book)) {
            book.setAvailable(true);
            this.borrowedBooks.remove(book);
            System.out.println( name + " successfully returned '" + book.getTitle() + "'.");
        } else {
            System.out.println("   Error: This member did not borrow the book '" + book.getTitle() + "'.");
        }
    }

    /**
     * UPDATED METHOD: Displays borrowed books in a clean, tabular format.
     */
    public void displayBorrowedBooks() {
        System.out.println("\n>> Books borrowed by " + this.name + " (ID: " + this.memberId + ")");

        if (borrowedBooks.isEmpty()) {
            System.out.println("+----------------------------------------------------+");
            System.out.println("| This member has not borrowed any books.            |");
            System.out.println("+----------------------------------------------------+");
            return;
        }

        String border = "+-------------------------------------+---------------------------+-----------------+";
        String headerFormat = "| %-35s | %-25s | %-15s |%n";
        String rowFormat = "| %-35.35s | %-25.25s | %-15s |%n";

        System.out.println(border);
        System.out.printf(headerFormat, "TITLE", "AUTHOR", "ISBN");
        System.out.println(border);

        for (Book book : this.borrowedBooks) {
            System.out.printf(rowFormat, book.getTitle(), book.getAuthor(), book.getIsbn());
        }
        System.out.println(border);
    }
}





class Library {
    private List<Book> books;
    private List<Member> members;

    // Constructor
    public Library() {
        this.books = new ArrayList<>();
        this.members = new ArrayList<>();
    }

    // (Other methods like addBook, addMember remain unchanged)
    public void addBook(Book book) {
        books.add(book);
    }

    public void addMember(Member member) {
        members.add(member);
    }

    // (displayAllBooks and displayAvailableBooks remain unchanged)
    public void displayAllBooks() {
        if (books.isEmpty()) {
            System.out.println("The library has no books.");
            return;
        }
        String border = "+-------------------------------------+---------------------------+-----------------+--------------+";
        String headerFormat = "| %-35s | %-25s | %-15s | %-12s |%n";
        String rowFormat = "| %-35.35s | %-25.25s | %-15s | %-12s |%n";
        System.out.println(border);
        System.out.printf(headerFormat, "TITLE", "AUTHOR", "ISBN", "AVAILABILITY");
        System.out.println(border);
        for (Book book : books) {
            System.out.printf(rowFormat, book.getTitle(), book.getAuthor(), book.getIsbn(), book.isAvailable() ? "Yes" : "No");
        }
        System.out.println(border);
    }

    public void displayAvailableBooks() {
        boolean found = false;
        String border = "+-------------------------------------+---------------------------+-----------------+--------------+";
        String headerFormat = "| %-35s | %-25s | %-15s | %-12s |%n";
        String rowFormat = "| %-35.35s | %-25.25s | %-15s | %-12s |%n";
        System.out.println(border);
        System.out.printf(headerFormat, "TITLE", "AUTHOR", "ISBN", "AVAILABILITY");
        System.out.println(border);
        for (Book book : books) {
            if (book.isAvailable()) {
                System.out.printf(rowFormat, book.getTitle(), book.getAuthor(), book.getIsbn(), "Yes");
                found = true;
            }
        }
        if (!found) {
            System.out.printf("| %-94s |%n", "No books are currently available.");
        }
        System.out.println(border);
    }

    /**
     * NEW METHOD: Displays all members in a tabular format.
     */
    public void displayAllMembers() {
        if (members.isEmpty()) {
            System.out.println("There are no members in the library system.");
            return;
        }

        String border = "+------------+---------------------------+------------------+";
        String headerFormat = "| %-10s | %-25s | %-16s |%n";
        String rowFormat = "| %-10d | %-25s | %-16d |%n";

        System.out.println(border);
        System.out.printf(headerFormat, "MEMBER ID", "NAME", "BOOKS BORROWED");
        System.out.println(border);

        for (Member member : members) {
            System.out.printf(rowFormat,
                    member.getMemberId(),
                    member.getName(),
                    member.getBorrowedBooks().size());
        }
        System.out.println(border);
    }

    // (findBookByIsbn and findMemberById remain unchanged)
    public Book findBookByIsbn(String isbn) {
        for (Book book : books) {
            if (book.getIsbn().equalsIgnoreCase(isbn)) {
                return book;
            }
        }
        return null;
    }

    public Member findMemberById(int id) {
        for (Member member : members) {
            if (member.getMemberId() == id) {
                return member;
            }
        }
        return null;
    }
}




// File: Member.java




// File: Main.java
// (Only case 7 is changed, but providing the full code for convenience)


public class Main {

    // (displayMenu, clearConsole, pressEnterToContinue methods are unchanged)
    private static void displayMenu() {
        System.out.println("=============================================");
        System.out.println("│         Library Management System         │");
        System.out.println("=============================================");
        System.out.println("│                                           │");
        System.out.println("│   1. Add a new Book                       │");
        System.out.println("│   2. Add a new Member                     │");
        System.out.println("│   3. Display All Books                    │");
        System.out.println("│   4. Display Available Books              │");
        System.out.println("│   5. Borrow a Book                        │");
        System.out.println("│   6. Return a Book                        │");
        System.out.println("│   7. Show Member's Borrowed Books         │");
        System.out.println("│   8. Show All Members                     │");
        System.out.println("│   9. Exit                                 │");
        System.out.println("│                                           │");
        System.out.println("=============================================");
        System.out.print("-> Enter your choice: ");
    }
    public static void clearConsole() {
        try {
            String operatingSystem = System.getProperty("os.name");
            if (operatingSystem.contains("Windows")) {
                new ProcessBuilder("cmd", "/c", "cls").inheritIO().start().waitFor();
            } else {
                System.out.print("\033[H\033[2J");
                System.out.flush();
            }
        } catch (IOException | InterruptedException e) {
            System.out.println("Error trying to clear the console: " + e.getMessage());
        }
    }
    private static void pressEnterToContinue(Scanner scanner) {
        System.out.println("\nPress Enter to continue...");
        scanner.nextLine();
    }

    public static void main(String[] args) {
        Library library = new Library();
        Scanner scanner = new Scanner(System.in);

        // Sample Data
        Member alice = new Member("Alice", 101);
        Book alchemist = new Book("The Alchemist", "Paulo Coelho", "1234");
        library.addMember(alice);
        library.addBook(alchemist);
        alice.borrowBook(alchemist);
        library.addBook(new Book("Java: The Complete Reference", "Herbert Schildt", "5678"));
        library.addMember(new Member("Bob", 102));

        while (true) {
            clearConsole();
            displayMenu();

            int choice = 0;
            try {
                choice = Integer.parseInt(scanner.nextLine());
            } catch (NumberFormatException e) {
                System.out.println("   Invalid input. Please enter a number.");
                pressEnterToContinue(scanner);
                continue;
            }

            if (choice != 3 && choice != 4 && choice != 7 && choice != 8 && choice != 9) {
                clearConsole();
            }

            switch (choice) {
                // Cases 1-6 are unchanged
                case 1:
                    System.out.println("+------------------------------------------+");
                    System.out.println("|               Add a New Book             |");
                    System.out.println("+------------------------------------------+");
                    System.out.printf("%-20s: ", "Enter book title");
                    String title = scanner.nextLine();
                    System.out.printf("%-20s: ", "Enter book author");
                    String author = scanner.nextLine();
                    System.out.printf("%-20s: ", "Enter book ISBN");
                    String isbn = scanner.nextLine();
                    library.addBook(new Book(title, author, isbn));
                    System.out.println("\n   Book added successfully!");
                    break;
                case 2:
                    System.out.println("+------------------------------------------+");
                    System.out.println("|              Add a New Member            |");
                    System.out.println("+------------------------------------------+");
                    System.out.printf("%-20s: ", "Enter member name");
                    String name = scanner.nextLine();
                    System.out.printf("%-20s: ", "Enter member ID");
                    int id = Integer.parseInt(scanner.nextLine());
                    library.addMember(new Member(name, id));
                    System.out.println("\n   Member added successfully!");
                    break;
                case 3:
                    library.displayAllBooks();
                    break;
                case 4:
                    library.displayAvailableBooks();
                    break;
                    
                case 5:
                    System.out.println("+------------------------------------------+");
                    System.out.println("|                Borrow a Book             |");
                    System.out.println("+------------------------------------------+");
                    System.out.printf("%-20s: ", "Enter Member ID");
                    int memberIdBorrow = Integer.parseInt(scanner.nextLine());
                    Member borrower = library.findMemberById(memberIdBorrow);
                    if (borrower == null) {
                        System.out.println("   Member not found.");
                        break;
                    }
                    System.out.printf("%-20s: ", "Enter book ISBN");
                    String isbnBorrow = scanner.nextLine();
                    Book bookToBorrow = library.findBookByIsbn(isbnBorrow);
                    if (bookToBorrow == null) {
                        System.out.println("   Book not found.");
                        break;
                    }
                    borrower.borrowBook(bookToBorrow);
                    break;
                case 6:
                    System.out.println("+------------------------------------------+");
                    System.out.println("|                Return a Book             |");
                    System.out.println("+------------------------------------------+");
                    System.out.printf("%-20s: ", "Enter Member ID");
                    int memberIdReturn = Integer.parseInt(scanner.nextLine());
                    Member returner = library.findMemberById(memberIdReturn);
                    if (returner == null) {
                        System.out.println("   Member not found.");
                        break;
                    }
                    System.out.printf("%-20s: ", "Enter book ISBN");
                    String isbnReturn = scanner.nextLine();
                    Book bookToReturn = library.findBookByIsbn(isbnReturn);
                    if (bookToReturn == null) {
                        System.out.println("   Book not found.");
                        break;
                    }
                    returner.returnBook(bookToReturn);
                    break;

                // ** THIS IS THE CORRECTED SECTION **
                case 7:
                    System.out.println("+------------------------------------------+");
                    System.out.println("|         Show Member's Borrowed Books     |");
                    System.out.println("+------------------------------------------+");
                    System.out.printf("%-20s: ", "Enter Member ID");
                    int memberIdShow = Integer.parseInt(scanner.nextLine());
                    Member memberToShow = library.findMemberById(memberIdShow);
                    if (memberToShow != null) {
                        memberToShow.displayBorrowedBooks();
                    } else {
                        System.out.println("   Member not found.");
                    }
                    break;

                case 8:
                    library.displayAllMembers();
                    break;

                case 9:
                    System.out.println("Thank you for using the Library Management System. Exiting... 👋");
                    scanner.close();
                    return;

                default:
                    System.out.println("   Invalid choice. Please select a number between 1 and 9.");
            }

            if (choice != 9) {
                pressEnterToContinue(scanner);
            }
        }
    }
}