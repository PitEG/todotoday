import java.util.ArrayList;
import java.util.HashMap;

public class TodoElement {
  private String category;
  private String project;
  private String task;
  
  private HashMap<String,TodoElement> contents;

  private static final String EMPTY_STRING = "";

  public TodoElement(String c) {
    this(c, null, null);
  }

  public TodoElement(String c, String p) {
    this(c, p, null);
  }

  public TodoElement(String c, String p, String t) {
    this.category = c;
    this.project = p;
    this.task = t;
    contents = new HashMap<>();
  }

  public void setCategory(String s) { category = s; }
  
  public void setProject(String s) { project = s; }

  public void setTask(String s) { project = s; }

  public String getCategory() { return category; }

  public String getProject() { return project; }

  public String getTask() { return task; }

  public HashMap<String,TodoElement> getContents() {
    return contents;
  }

}
