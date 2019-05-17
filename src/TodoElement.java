public class TodoElement {
  private String category;
  private String project;
  private String task;

  private static final String EMPTY_STRING = "";

  public TodoElement() {
  }

  public TodoElement(String c) {
    this.category = c;
    this.project = EMPTY_STRING;
    this.task = EMPTY_STRING;
  }

  public TodoElement(String c, String p, String t) {
    this.category = c;
    this.project = p;
    this.task = t;
  }
}
