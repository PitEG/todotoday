using System;

namespace TodoToday {

  public class Task {
    private string category;
    private string name;
    bool done;

    public string Category {
      get { return this.category; }
    }

    public string Name {
      get { return this.name; }
    }

    public bool Done {
      get { return this.done; }
      set { this.done = value; }
    }

    public Task() : this("noname", "default"){
      Console.WriteLine("made a task");
    }

    public Task(string name, string category) {
      this.name = name;
      this.category = category;
      this.done = false;
    }

  }
}
