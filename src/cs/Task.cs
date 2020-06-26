using System;

namespace TodoToday {

  public class Task {
    private string category;
    private string name;
    private int cost;
    bool done;

    public string Category {
      get { return this.category; }
    }

    public string Name {
      get { return this.name; }
    }

    public int Cost {
      get { return this.cost; }
    }

    public bool Done {
      get { return this.done; }
      set { this.done = value; }
    }

    public Task() : this("noname", "default", 0){
    }

    public Task(string name, string category, int cost) {
      this.name = name;
      this.category = category;
      this.done = false;
      this.cost = cost;
    }

  }
}
