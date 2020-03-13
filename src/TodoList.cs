using System;
using System.IO;

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

    public TodoList(string filepath) {
      //Open file and build todolist from it
    }

    private void BuildListFromFile(string filepath) {
      using (FileStream fs = File.OpenRead(filepath)) {

      }
    }

    public void PrintTodoList() {
      dailies.PrintList();
      projects.PrintList();
      backlog.PrintList();
    }

    /* TYPE CHECK DOESN"T WORK 
    public bool Add<T>(Task task) where T : TaskList {
      if (T typeof DailyList) {
        dailes.Add(task);
        return true;
      }
      if (T typeof ProjectList) {
        projects.Add(task);
        return true;
      }
      if (T typeof Backlog) {
        backlog.Add(task);
        return true;
      }

      //if type T didn't match any of hte list types
      return false;
    }
    */
  }
}
