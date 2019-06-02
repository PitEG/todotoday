public class TodoElement {
  private String name;
  private TodoList list;

  private static String DEFAULT_NAME = "default";

  public TodoElement() {
    this(DEFAULT_NAME);
  }

  public TodoElement(String n) {
    this(n, null;
  }

  public TodoElement(String n, TodoList l) {
    name = n;
    list = l;
  }
 
  public String getName() {
    return name;
  }
  
  public void setName(String n) {
    name = n;
  } 

}
