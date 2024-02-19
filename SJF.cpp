#include <iostream>

using namespace std;
int main()
{
    int n, temp, tt = 0, min, d, i, j;
    float atat = 0, awt = 0, stat = 0, swt = 0;

    cout << "Enter no. of process=";
    cin >> n;
    int a[n], b[n], e[n], tat[n], wt[n];
    cout << "Enter Arrival Time : " << endl;
    for (i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << ": "; // Input Arrival Time
        cin >> a[i];
    }
    cout << "Enter Burst Time :" << endl;
    for (i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << ": "; // Input Burst Time
        cin >> b[i];
    }
    for (i = 0; i < n; i++)
    {
        for (j = i + 1; j < n; j++)
        {
            if (b[i] > b[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;

                temp = b[i];
                b[i] = b[j];
                b[j] = temp;
            }
        }
    }
    min = a[0];
    for (i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
            d = i;
        }
    }
    tt = min;
    e[d] = tt + b[d];
    tt = e[d];

    for (i = 0; i < n; i++)
    {
        if (a[i] != min)
        {
            e[i] = b[i] + tt;
            tt = e[i];
        }
    }
    for (i = 0; i < n; i++)
    {

        tat[i] = e[i] - a[i];
        stat = stat + tat[i];
        wt[i] = tat[i] - b[i];
        swt = swt + wt[i];
    }
    atat = stat / n;
    awt = swt / n;
    cout << "Process  Arrival-time(s)  Burst-time(s)  Waiting-time(s)  Turnaround-time(s)\n";

    for (i = 0; i < n; i++)
    {
        cout << "P" << i + 1 << "              " << a[i] << "                " << b[i] << "                  " << wt[i] << "               " << tat[i] << endl;
    }
    cout << "Total Average Time=" << swt << endl
         << "Total Turn Around Time=" << stat << endl;
    cout << "Average Waiting Time=" << awt << endl
         << "Average Turn Around Time=" << atat; // average waiting time and turn around time
}