#include <iostream>
#include <cstring>
using namespace std;
class CWH
{
protected:
    string title;
    float r;

public:
    CWH(string s, float ra) : title(s), r(ra) {}
    virtual void display()=0;//Do-nothing function().
};
class CWHVideo : public CWH
{
    float video;

public:
    CWHVideo(string s, float ra, float video1) : CWH(s, ra)
    {
        video = video1;
    }
    void display()
    {
        cout << "The title of video is : " << title << endl;
        cout << "The rating of video is : " << r << " out of 5 stars." << endl;
        cout << "The video length of the video is : "
             << video << " minutes." << endl;
    }
};
class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float ra, int words1) : CWH(s, ra)
    {
        words = words1;
    }
    void display()
    {
        cout << "The title of video is : " << title << endl;
        cout << "The rating of video is : " << r << " out of 5 stars." << endl;
        cout << "The number of words in the video is : "
             << words << endl;
    }
};
int main()
{
    string s;
    float ra, video;
    int words;

    s = "Tutorial Video.";
    ra = 4.9;
    video = 5.7;
    CWHVideo ob(s, ra, video);

    s = "Tutorial Text.";
    ra = 4.786;
    words = 504;
    CWHText ob1=CWHText(s, ra, words);

    CWH *ptr[2];
    ptr[0] = &ob;
    ptr[1] = &ob1;
    ptr[0]->display();
    ptr[1]->display();
    return 0;
}