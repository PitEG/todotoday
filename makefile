.PHONY:default
.PHONY:workspace

default:
	make -C src

workspace:
	gvim -p src/Program.cs src/TodoList.cs
	gvim -p src/DailyList.cs src/ProjectList.cs src/Backlog.cs src/TaskList.cs
	gvim -p src/Task.cs
