import java.util.ArrayList;
import java.util.HashMap;

public class TodoList {
  private HashMap<String,TodoElement> map; 
  private String file;

  public TodoList(String file) {
    this.file = file;
  }

  public boolean makeCategory(String name) {
    if (!map.containsKey(name)) {
      return false;
    }
    TodoElement category = new TodoElement(name);
    map.put(name, category);

    return true;
  }

  public boolean makeProject(String category, String name) {
    if (!map.containsKey(category) && 
        !map.get(category).getContents().containsKey(name)) {
      return false; 
    }
    TodoElement project = new TodoElement(category, name);
    map.get(category).getContents().put(name, project);

    return true;
  }

  public boolean makeTask(String category, String project, String name) {
    if (!map.containsKey(category) &&
        !map.get(category).getContents().containsKey(project) &&
        !map.get(category).getContents().get(project).getContents().containsKey(name)) {
      return false;
    }
    TodoElement task = new TodoElement(category, project, name);
    map.get(category).getContents().get(project).getContents().put(name, task);

    return true;
  }

}
