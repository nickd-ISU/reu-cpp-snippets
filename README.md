# reu-cpp-snippets
Use this repository to refer back to what we learned in the lab. You can copy and paste code from these files as a starting point for your mini assignments.

**/snippets** -> contains code snippets from what we learned in the lab lectures  
**/challenges** -> contains extra challenges for you to work on  
**/images** -> Contains local images used in Readme (disregard this folder)

## 🚨 Extra Challenges 📝
In the **/challenges** folder, I've added some supplemental challenges for you to work on. These are not required, but they will help you practice the concepts we've learned in the lab. Use code from the **/snippets** folder to help you solve the problems!

Add a new project to your solution for each new challenge.

# Visual Studio 👨‍💻
## Project Structure
Visual Studio applications are organized into **solutions** and **projects**. A solution is a collection of projects. A project is a collection of files that are compiled together. Everytime you create a new file with a **main()** function, you will need to create a new project!

You have ALREADY created a **solution** called *Assignments*, which contains all your projects. Continue to add projects to this solution for future work (challenges, lecture, ...etc)

## Creating a Project
1. Right click on the solution name in the **Solution Explorer** window.
2. Select **Add** -> **New Project**.
![NewProjectImage](images/new_project.png)
3. Highlight **Console App** and click **Next**.
4. Name your project (UpperCamelCase) and click **Create**.

*A new project should automatically initialize a .cpp file with a **main()** function. If it doesn't, you can add a new file to the project (see below)*

## Adding Files to a Project
1. Right click on the project name in the **Solution Explorer** window.
2. Select **Add** -> **New Item**.
![NewFileImage](images/new_file.png)
3. Highlight **C++ File (.cpp)**.
4. Name your file (lowerCamelCase) and click **Add**.
5. Add include statements and a **main()** function to your new file (if necessary).
```{c++}
#include <iostream>

int main() {
    // Code goes here
}
```
