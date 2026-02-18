import java.util.ArrayList;

class Book {
    private String title;
    private String author;
    private String isbn;
    private boolean available;

    public Book(String t, String a, String i) {
        this.title = t;
        this.author = a;
        this.isbn = i;
        this.available = true;
    }

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
        return available;
    }

    public void setAvailable(boolean available) {
        this.available = available;
    }
}


class Member {
    private String name;
    private int memberId;
    private ArrayList<Book> borrowedBooks;

    public Member(String name, int id) {
        this.name = name;
        this.memberId = id;
        this.borrowedBooks = new ArrayList<>();
    }

    public String getName() {
        return name;
    }

    public int getMemberId() {
        return memberId;
    }

    public void borrowedBook(Book b) {
        if (b.isAvailable()) {
            borrowedBooks.add(b);
            b.setAvailable(false);
            System.out.println(name + " Borrowed: " + b.getTitle());
        } else {
            System.out.println("Book not available: " + b.getTitle());
        }
    }

    public void returnBook(Book b) {
        if (borrowedBooks.remove(b)) {
            b.setAvailable(true);
            System.out.println(name + " returned: " + b.getTitle());
        } else {
            System.out.println("Book not found in borrowed list.");
        }
    }

    public ArrayList<Book> getBorrowedBooks() {
        return borrowedBooks;
    }
}


class Library {
    private ArrayList<Book> books;
    private ArrayList<Member> members;

    public Library() {
        books = new ArrayList<>();
        members = new ArrayList<>();
    }

    public void addBook(Book b) {
        books.add(b);
    }

    public void addMember(Member m) {
        members.add(m);
    }

    public void showAllBooks() {
        System.out.println("Books in Library:");
        for (Book b : books) {
            System.out.println("- " + b.getTitle() + " by " + b.getAuthor() +
                               " (Available: " + b.isAvailable() + ")");
        }
    }

    public void showAllMembers() {
        System.out.println("Library Members:");
        for (Member member : members) {
            System.out.println("- " + member.getName() + " (ID: " + member.getMemberId() + ")");
        }
    }
}


public class LibraryMain {
    public static void main(String[] args) {
        Library lib = new Library();

        Book b1 = new Book("Java Basics", "John Smith", "123");
        Book b2 = new Book("OOP Concepts", "Jane Doe", "456");

        lib.addBook(b1);
        lib.addBook(b2);

        Member m1 = new Member("Asif", 101);
        Member m2 = new Member("Nusrat", 102);

        lib.addMember(m1);
        lib.addMember(m2);

        lib.showAllBooks();
        lib.showAllMembers();

        m1.borrowedBook(b1);
        m2.borrowedBook(b1); // Already borrowed
        m1.returnBook(b1);
        m2.borrowedBook(b1); // Now available
    }
}
