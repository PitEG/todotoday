using System;

namespace TodoToday {
  public class TodoList {
    private DailyList dailies;
    private ProjectList projects;
    private Backlog backlog;

    public TodoList() {
      this.dailies = new DailyList();
      this.projects = new ProjectList();
      this.backlog = new Backlog();
    }
  }
}
