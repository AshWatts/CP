#include <iostream>

using namespace std;
/*
 * Create classes Rectangle and RectangleArea
 */
 
 class Rectangle
 {
    protected:
    int a,b;
    
    public:
    
    virtual void display()
    {
        cout<<a<<" "<<b<<endl;
    }
    
 };
 
 class RectangleArea : public Rectangle
 {
    public:
     
    void read_input()
    {
        cin>>Rectangle::a;
        cin>>Rectangle::b;
    }
    
    void display() override
    {
        cout<<a*b;        
    }
    
 };


int main()
{
    /*
     * Declare a RectangleArea object
     */
    RectangleArea r_area;
    
    /*
     * Read the width and height
     */
    r_area.read_input();
    
    /*
     * Print the width and height
     */
    r_area.Rectangle::display();
    
    /*
     * Print the area
     */
    r_area.display();
    
    return 0;
}