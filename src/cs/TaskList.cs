using System;
using System.Collections.Generic;

namespace TodoToday {

  public class TaskList {
    protected string name;
    protected List<Task> tasks; 

    public TaskList() : this("no name") {
    }

    public TaskList(string name) {
      this.name = name;
      tasks = new List<Task>();
    }

    public void AddTask(Task task) {
      tasks.Add(task);
    }

    public virtual void PrintList() {
      for (int i = 0; i < tasks.Count; i++) {
        Console.WriteLine(tasks[i].Cost + " " + tasks[i].Name);
      }
    }

    public virtual bool Add(Task task) {
      tasks.Add(task);
      return true;
    }

    public virtual bool Remove(Task task) {
      return tasks.Remove(task);
    }
  }
}
