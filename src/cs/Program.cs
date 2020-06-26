using System;
using System.IO;

namespace TodoToday {
  public class Program {  
    public static void Main(string[] args) {
      //input must be a file directory
      if (args.Length > 1) {
        Console.WriteLine("Invalid input!");
        return;
      }

      bool noFile = false;
      if (args.Length == 0) {
        noFile = true; 
      }

      string fileDirectory = args[0];
      if (!File.Exists(fileDirectory)) {
        Console.WriteLine("File directory does not exist!");
      }

      //make todolist
      TodoList todolist;
      if (noFile) {
        todolist = new TodoList();
      }
      else {
        todolist = new TodoList(fileDirectory);
      }
      
      //shell loop
      while(true) {
        todolist.PrintTodoList();

        Console.WriteLine("** add, move, delete tasks **");
        string command = Console.ReadLine(); 
        switch (command) {
          case "a":
          case "add":
            todolist.CreateTask();
            break;
          case "m":
          case "move":
            break;
          default:
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
