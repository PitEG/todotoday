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
      using (TextReader tr = File.OpenText(filepath)) {
        string file = tr.ReadToEnd();
        string[] lists = file.Split('#');

        //read dailies
        string[] dailiesStr = lists[1].Split('\n');

      }
      using (TextReader tr = File.OpenText(filepath)) {
        //read dailies
        tr.ReadLine();
        string currLine = tr.ReadLine().Trim();

        while (currLine[0] != '#') {
          int costIdx = 1;
          int taskStartIdx = 2;

          //create currLine's Task
          string[] taskParse = currLine.Split('\t',' ');
          int cost = Int32.Parse(taskParse[costIdx]);
          string taskName = taskParse[taskStartIdx];
          for (int i = taskStartIdx + 1; i < taskParse.Length; i++) {
            if (taskParse[i] != "")
              taskName +=  " " + taskParse[i]; 
          }
          Task newTask = new Task(taskName, "", cost);
          dailies.Add(newTask);

          currLine = tr.ReadLine().Trim();
        }

        //read projects
        tr.ReadLine();
        currLine = tr.ReadLine().Trim();
        while (currLine[0] != '#') {
          while (currLine[0] != ':') {

          }

        }

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
