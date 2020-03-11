using System;
using System.IO;

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
    
  }
}
