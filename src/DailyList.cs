using System;
using System.IO;
using System.Collections;

namespace TodoToday {

  public class DailyList : TaskList {

    public DailyList() {
      Console.WriteLine("made dailylist");
    }

    public override void PrintList() {
      Console.WriteLine("# Daily");
      for (int i = 0; i < tasks.Count; i++) {
        Console.WriteLine("  - " + tasks[i].Cost + " " + tasks[i].Name);
      }

    }
  }
}
