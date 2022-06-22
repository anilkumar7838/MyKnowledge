#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    int i, no_of_process, sum = 0, count = 0, y, quant, wt = 0, tat = 0, at[10], bt[10], temp[10];
    float avg_wt, avg_tat;
    cout << "Total number of process in the system: " << endl;
    cin >> no_of_process;
    y = no_of_process; // y hold the available no of process 

    for (i = 0; i < no_of_process; i++)
    {
        cout <<" Enter Arrival and Burst time of Process[" << i+1 <<"]" << endl;
        cout <<" Arrival time is: "; // Accept arrival time
        cin  >> at[i];
        cout << "Burst time is: "; // Accept the Burst time
        cin  >> bt[i];
        temp[i] = bt[i]; // store the burst time in temp array
    }
    cout << "Enter the Time Quantum for the process: ";
    cin >> quant;

    // Display the process No, burst time, Turn Around Time and the waiting time
    cout << "Process No \t\t Burst Time \t\t TAT \t\t Waiting Time " << endl;

    for (sum = 0, i = 0; y != 0;)
    {
        if (temp[i] <= quant && temp[i] > 0)
        {
            sum = sum + temp[i];
            temp[i] = 0;
            count = 1;
        }
        else if (temp[i] > 0)
        {
            temp[i] = temp[i] - quant;
            sum = sum + quant;
        }
        if (temp[i] == 0 && count == 1)
        {
            y--; // decrement the available process no .
            cout << "Process No[" <<i+1 << "] \t\t  " << bt[i] << "\t\t\t " << sum - at[i] << "\t\t\t " << sum - at[i] - bt[i] << endl;
            wt = wt + sum - at[i] - bt[i];
            tat = tat + sum - at[i];
            count = 0;
        }
        if (i == no_of_process - 1)
            i = 0;
        else if (at[i + 1] <= sum)
            i++;
        else
            i = 0;
    }
    // represents the average waiting time and Turn Around time
    avg_wt = wt * 1.0 / no_of_process;
    avg_tat = tat * 1.0 / no_of_process;
    cout << "Average Turn Around Time: \t" << avg_wt << endl;
    cout << "Average Waiting Time: \t" << avg_tat;
}