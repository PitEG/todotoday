import java.util.Scanner;

public class Main {
  private static final boolean debug = true;
  private static Scanner scanner;

  private static String C_ADD = "add";
  private static String C_QUIT = "quit";

  public static void main(String[] args) {
    if (debug) System.out.println("DEBUG MODE");
    
    scanner = new Scanner(System.in);
    String command = scanner.next();
    switch(command) {
      case C_ADD: add(); break;
      case C_QUIT: return;
    }
     
  }

  private void add() {
  }

}
