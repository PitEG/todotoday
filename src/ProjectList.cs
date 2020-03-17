using System;
using System.Collections.Generic;

namespace TodoToday {
  public class ProjectList : TaskList {
    public ProjectList() {
      Console.WriteLine("made projects");
    }

    public override void PrintList() {
      List<List<Task>> lists = new List<List<Task>>();
      
      //make lists of categories
      for (int i = 0; i < tasks.Count; i++) {
        Task currTask = tasks[i];
        if (lists.Count == 0) {
          lists.Add(new List<Task>());
          lists[lists.Count - 1].Add(currTask);
          continue;
        }
        for (int j = 0; j < lists.Count; j++) {
          if (lists[j][0].Category == tasks[i].Category) {
            lists[j].Add(currTask);
            break;
          }
          if (j == lists.Count - 1) {
            lists.Add(new List<Task>());
            lists[j].Add(currTask);
          }
        }
      }

      //print
      Console.WriteLine("# Projects");
      for (int i = 0; i < lists.Count; i++) {
        Console.WriteLine("  : " + lists[i][0].Category);
        for (int j = 0; j < lists[i].Count; j++) {
          Console.WriteLine("    - " + lists[i][j].Cost + " " +
              lists[i][j].Name);
        }
      }
    }
  }
}
