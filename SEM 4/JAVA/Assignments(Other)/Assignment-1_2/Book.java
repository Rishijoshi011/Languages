import java.util.Scanner;

class BookPublication extends Book {
    private String title;

    BookPublication(String authorName, String title) {
        super(authorName);
        this.title = title;
    }

    void display(){
        System.out.println("Author Name: " + super.getAuthorName());
        System.out.println("Book Publication Title: " + title);
    }
}

class PaperPublication extends Book {
    private String title;
    
    PaperPublication(String authorName, String title) {
        super(authorName);
        this.title = title;
    }

    void display(){
        System.out.println("Author Name: " + super.getAuthorName());
        System.out.println("Paper Publication Title: " + title);
    }
}

public abstract class Book {
    private String authorName;

    Book(String authorName){ this.authorName = authorName; }
    abstract void display();
    String getAuthorName() { return authorName; }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter Name of the Author: ");
        String authorName = sc.nextLine();

        System.out.print("Enter Title: ");
        String title = sc.nextLine();
        
        Book b = new PaperPublication(authorName, title);
        b.display();
        
        System.out.print("Enter Title: ");
        title = sc.nextLine();
        b = new BookPublication(authorName, title);
        b.display(); 

        sc.close();
    }
}

