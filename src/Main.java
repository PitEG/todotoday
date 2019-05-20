import java.util.Scanner;

public class Main {
  private static final boolean debug = true;
  private static Scanner scanner;

  public static void main(String[] args) {
    if (debug) System.out.println("DEBUG MODE");
    scanner = new Scanner(System.in);

    System.out.println("TESTING " + scanner.next()); 
  }
}
