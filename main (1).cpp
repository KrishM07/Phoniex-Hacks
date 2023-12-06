#include <iomanip>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
    string task1, due1;
    string task2, due2;
    string task3, due3; 
    string task4, due4; 
    string task5, due5; 
    int taskCount = 0; 
    int choice;

    cout<<"ooooooooooo                      oooo        oooo     oooo                        o8"<<endl;
    cout<<"88  888  88 ooooooo    oooooooo8  888  ooooo  8888o   888   ooooooo    oooooooo8 o888oo ooooooooo8 oo oooooo   "<<endl;
    cout<<"    888     ooooo888  888ooooooo  888o888     88 888o8 88   ooooo888  888ooooooo  888  888oooooo8   888    888 "<<endl;
    cout<<"    888   888    888          888 8888 88o    88  888  88 888    888          888 888  888          888        "<<endl;
    cout<<"   o888o   88ooo88 8o 88oooooo88 o888o o888o o88o  8  o88o 88ooo88 8o 88oooooo88   888o  88oooo888 o888o  "<<endl; 
    

    do {
        cout<<"\nTo-Do List Menu:\n";
        cout<<"1. Add Task\n";
        cout<<"2. View Tasks\n";
        cout<<"3. Exit\n";
        cout<<"Enter your choice: ";
        cin>>choice;
        cin.ignore();  

        
        if(choice == 1){
            if(taskCount == 0){
                cout<<"Enter task description: ";
                getline(cin, task1);
                taskCount++;
                cout<<"Enter the due date for this task (MM-DD-YYYY): ";
                cin>>due1;
                cout<<"Task added successfully!\n"<<endl;
            } else if(taskCount == 1){
                cout<<"Enter task description: ";
                getline(cin, task2);
                taskCount++;
                cout<<"Enter the due date for this task (MM-DD-YYYY): ";
                cin>>due2;
                cout<<"Task added successfully!\n"<<endl;
            } else if(taskCount == 2){
                cout<<"Enter task description: ";
                getline(cin, task3);
                taskCount++;
                cout<<"Enter the due date for this task (MM-DD-YYYY): ";
                cin>>due3;
                cout<<"Task added successfully!\n"<<endl;
            } else if( taskCount == 3){
                cout<<"Enter task description: ";
                getline(cin,task4);
                taskCount++;
                cout<<"Enter the due date for this task (MM-DD-YYYY): ";
                cin>>due4;
                cout<<"Task added successfully!\n"<<endl;
            } else if( taskCount == 4){
                cout<<"Enter task description: ";
                getline(cin,task5);
                taskCount++;
                cout<<"Enter the due date for this task (MM-DD-YYYY): ";
                cin>>due5;
                cout<<"Task added successfully!\n"<<endl;
            } else{
                cout<<"Task list is full. Cannot add more tasks.\n";
            }
        } else if(choice == 2){
            if(taskCount == 0){
                cout<<"No tasks available.\n";
            } else{
                cout<<"Tasks:\n";
                cout<<"1. "<<task1<<"\n";
                cout<<"This task is due at "<<due1<<endl;
                if(taskCount >= 2){
                    cout<<"2. "<<task2<<"\n";
                    cout<<"This task is due at "<<due2<<endl;
                }
                if(taskCount == 3){
                    cout<< "3. "<<task3<<"\n";
                    cout<<"This task is due at "<<due3<<endl;
                }
                if(taskCount == 4){
                    cout<<"4. "<<task4<<"\n";
                    cout<<"This task is due at "<<due4<<endl;
                }
                if(taskCount == 5){
                    cout<< "5. "<<task5<<"\n";
                    cout<<"This task is due at "<<due5<<endl;
                }
            }
        } else if(choice == 3){
            cout<<"Exiting the To-Do List. Goodbye!\n";
        } else{
            cout<<"Invalid choice. Please try again.\n";
        }

    } while(choice != 3);

    return 0;
}