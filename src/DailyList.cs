using System;
using System.IO;
using System.Collections;

namespace TodoToday {

  public class DailyList : TaskList {
    static private readonly char TAB = '	';

    public DailyList() {
      Console.WriteLine("made dailylist");
    }

    public override void PrintList() {
      Console.WriteLine("///DAILY///");
      for (int i = 0; i < tasks.Count; i++) {
        Console.WriteLine(TAB + tasks[i].Cost + " " + tasks[i].Name);
      }

    }
  }
}
