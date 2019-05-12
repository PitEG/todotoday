public class TodoElement {
  private string category;
  private string project;
  private string task;

  private static final String EMPTY_STRING = "";

  public TodoElement() {
  }

  public TodoElement(string c) {
    this.category = c;
    this.project = EMPTY_STRING;
    this.task = EMPTY_STRING;
  }

  public TodoElement(string c, string p, string t) {
    this.category = c;
    this.project = p;
    this.task = t;
  }
}
