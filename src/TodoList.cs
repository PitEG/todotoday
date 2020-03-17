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

    public TodoList(string filepath) : this() {
      //Open file and build todolist from it
      BuildListFromFile(filepath);
    }

    private void BuildListFromFile(string filepath) {
      using (StreamReader sr = new StreamReader(filepath)) { 
        //read dailies
        sr.ReadLine();
        while (sr.Peek() != '#') {
          //read whitespace 
          while (sr.Peek() == ' ' || 
              sr.Peek() == '-' ||
              sr.Peek() == '\t') {
            sr.Read();    
          }

          //read cost TODO doesn't work
          string costStr = "";
          while (sr.Peek() != ' ') {
            costStr += sr.Read(); 
          }
          int cost = Int32.Parse(costStr);
          sr.Read();

          //read the name of the task
          string taskName = sr.ReadLine(); 
          Task dailyTask = new Task(taskName, "", cost);
          dailies.Add(dailyTask);
          
          Console.WriteLine("made " + taskName);
        }
        //read projects
        sr.ReadLine();

        //read backlog
        //read accomplishments
      }
    }

    public void PrintTodoList() {
      dailies.PrintList();
      projects.PrintList();
      backlog.PrintList();
    }

    public void CreateTask() {
      Console.WriteLine("Creating a Task");
      Console.WriteLine("name: ");
      string name = Console.ReadLine();
      Console.WriteLine("category: ");
      string category = Console.ReadLine();
      Console.WriteLine("cost: ");
      int cost = Int32.Parse(Console.ReadLine());

      Task task = new Task(name, category, cost);

      bool invalidList = true;
      while (invalidList) {
        Console.WriteLine("add to which list? \n" +
            "dailies, projects, or backlog? ");
        string list = Console.ReadLine();
        switch (list) {
          case "d":
          case "daily":
            Add(ListType.Daily, task);
            invalidList = false;
            break;
          case "p":
          case "projects":
            Add(ListType.Projects, task);
            invalidList = false;
            break;
          case "b":
          case "backlog":
            Add(ListType.Projects, task);
            invalidList = false;
            break;
          default:
            break;
        }
      }

      Console.WriteLine("added " + task.Name + "!");
    }

    public bool Add(ListType listType, Task task) { 
      if (listType == ListType.Daily) {
        dailies.Add(task);
        return true;
      }
      if (listType == ListType.Projects) {
        projects.Add(task);
        return true;
      }
      if (listType == ListType.Backlog) {
        backlog.Add(task);
        return true;
      }
      if (listType == ListType.Accomplished) {
        //not implemented yet
        //accomplishedList.Add(task);
        return true;

      }
      //if type T didn't match any of hte list types
      return false;
    }
  }

  public enum ListType {
    Daily, Projects, Backlog, Accomplished
  }
}
