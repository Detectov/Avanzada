#include <iostream>
#include <string>
#include <vector>

using namespace std;

enum Priority {LOW, MEDIUM, HIGH};

struct Task{
    string name;
    Priority priority;
};

void addTask(vector<Task> &tasks){
    Task newTask;
    int priority;
    cout << "Enter the name of the task: ";
    cin >> newTask.name;
    cout << "Enter the priority of the task\n1. Low\n2. Medium\n3. High\n ";
    cin >> priority;

    if (priority >= 1 && priority <= 3){
        newTask.priority = static_cast<Priority>(priority - 1);
        tasks.push_back(newTask);
        cout << "Task added successfully" << endl;
    }
    else{
        cout << "Invalid priority, please try again" << endl;
    }
    
}

void showTasks(const vector<Task> &tasks){
    if(!tasks.empty()){
        cout << "Tasks: " << endl;
        for (const Task& task : tasks){
            string prioritys;
            switch(task.priority){
                case LOW:
                    prioritys = "Low";
                break;
                case MEDIUM:
                    prioritys = "Medium";
                break;
                case HIGH:
                    prioritys = "High";
                break;
            }
            cout << "Name: " << task.name << " Priority: " << prioritys << endl;
        }
    }
    else{
        cout << "No tasks to show" << endl;
    }   
}

void deleteTask(vector<Task> &tasks){
    if (!tasks.empty()){
        string taskName;
        cout << "Enter the name of the task you want to delete: ";
        cin >> taskName;

        for (size_t i = 0; i < tasks.size(); i++){
            if (tasks[i].name == taskName){
                tasks.erase(tasks.begin() + i);
                cout << "Task deleted successfully" << endl;
                return;
            }
            else if (i == tasks.size() - 1){
                cout << "Task not found" << endl;
            }
        }
    }
    else{
        cout << "No tasks to delete" << endl;
    }
}

int main(){
    int option;
    vector<Task> tasks;
    while (option != 4){
        cout << "What do you want to do?\n1. Add a task\n2. Show tasks\n3. Delete a task\n4. Exit\n";
        cin >> option;
        switch(option){
            case 1:
                addTask(tasks);
            break;
            case 2:
                showTasks(tasks);
            break;
            case 3:
                deleteTask(tasks);
            break;
            case 4:
                cout << "Thanks for using!" << endl;
            break;
            default:
                cout << "Invalid option, please try again" << endl;

        }

    }
}