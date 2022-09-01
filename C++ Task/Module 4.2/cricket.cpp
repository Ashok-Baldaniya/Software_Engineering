#include<iostream>
using namespace std;

class cricket
{
    protected:
    int total_run;
    int total_match;
    int best_p=123;
    public:
    void setdata(int total_run,int total_match)
    {
        this->total_run=total_run;
        this->total_match=total_match;
    }
    
};

class batsman : public cricket
{
    public:
    void displaydata()
    {
        cout<<"total run is "<<total_run<<endl;
        cout<<"total match is "<<total_match<<endl;
        cout<<"Average run is "<<(float)total_run/(float)total_match<<endl;
        cout<<"overall performance is "<<best_p<<endl;
        
    }
};

int main()
{
    batsman o1;
    o1.setdata(200,4);
    o1.displaydata();
    return 0;
}