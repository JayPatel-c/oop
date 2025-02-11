#include<iostream>
using namespace std;

class PlotData
{
    int length,width,area,perimeter;

    public:
    void AddData()
    {
    cout<<"Enter length : ";
    cin>>length;
    cout<<"Enter Width : ";
    cin>>width;
    area=length*width;
    perimeter=2*(length+width);
    }

    void UpdateData()
    {
    cout<<"Enter New length : ";
    cin>>length;
    cout<<"Enter New Width : ";
    cin>>width;
    area=length*width;
    perimeter=2*(length+width);
    }

    void DisplayData()
    {
    cout<<"Length: "<<length<<endl<<"Width: "<<width<<endl<<"Area: "<<area<<endl<<"Perimeter: "<<perimeter<<endl;
    }
};

int main()
{
    PlotData P[20];
    int choice,NumPlot=0,i;
    cout<<"Enter"<<endl<<"1 for Add Data."<<endl<<"2 for Update Data."<<endl<<"3 for Display Data."<<endl<<"Else for exit."<<endl;
    next:
    cout<<"Enter choice :";
    cin>>choice;

    switch(choice)
    {
    case 1:
        {
            P[NumPlot].AddData();
            NumPlot++;
            break;
        }
    case 2:
        {
        cout<<"Enter Plot No. :";
        cin>>i;

            if(i<=NumPlot)
            {
                P[i-1].UpdateData();
                break;
            }
            else
            {
            cout<<"Enter valid Plot no. ..."<<endl;
            break;
            }
        }
        case 3:
        {
        cout<<"Enter Plot No. :";
        cin>>i;

            if(i<=NumPlot)
            {
                P[i-1].DisplayData();
                break;
            }
            else
            {
            cout<<"Enter valid Plot no. ..."<<endl;
            break;
            }
            break;

        }
        default:
            return 0;
    }
    goto next;
}
