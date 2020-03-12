using System;

namespace TodoToday {

  public class Backlog : TaskList {
    static private readonly string LIST_NAME = "Backlog";

    public Backlog() : base(LIST_NAME) {
      Console.WriteLine("made backlog");
    }
  }
}
