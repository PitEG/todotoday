import java.util.HashMap;

public class TodoList {

  private HashMap<String, TodoElement> contents;

  public TodoList() {
    contents = new HashMap<String, TodoElement>();
  }

  public TodoList(TodoElement[] elements) {
    for (int i = 0; i < elements.length; i++) {
      add(elements[i]);
    }
  }

  public void add(TodoElement e) {
    String name = e.getName();
    contents.put(name, e);
  }

  public TodoElement get(String name) {
    return contents.get(name); 
  }

}
