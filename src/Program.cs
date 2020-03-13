using System;
using System.IO;

namespace TodoToday {
  public class Program {  
    public static void Main(string[] args) {
      //input must be a file directory
      if (args.Length != 1) {
        Console.WriteLine("Invalid input!");
        return;
      }

      string fileDirectory = args[0];
      if (!File.Exists(fileDirectory)) {
        Console.WriteLine("File directory does not exist!");
      }

      //make todolist
      TodoList todolist = new TodoList();
      
      //shell loop
      while(true) {
        todolist.PrintTodoList();

        string command = Console.ReadLine(); 
        switch (command) {
          case "a":
          case "add":
            break;
          case "m":
          case "move":
            break;
        }

        //exit
        if (command == "q" || command == "quit") {
          //TODO save back to file
          break;
        }
      }
    }
  }
}
