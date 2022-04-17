#include <iostream>
// #include <cstring>

using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display()
    {
    }
};

class CWHVideo : public CWH
{
    float videoLength;

public:
    CWHVideo(string s, float r, float vl) : CWH(s, r)
    {
        videoLength = vl;
    }

    void display()
    {
        cout << "This is an amazing video with title : " << title << endl;
        cout << "Rating : " << rating << " (out of 5 stars) " << endl;
        cout << "Length of video : " << videoLength << endl;
    }
};

class CWHText : public CWH
{
    int words;

public:
    CWHText(string s, float r, int wc) : CWH(s, r)
    {
        words = wc;
    }

    void display()
    {
        cout << "This is an amazing text tutorial with title : " << title << endl;
        cout << "Rating of this text tutorial : " << rating << " (out of 5 stars) " << endl;
        cout << "Number of words in this text tutorial : " << words << endl;
    }
};

int main()
{
    string title;
    float rating, vlen;
    int words;

    // for cwh video
    title = "Python tutorial";
    vlen = 4.65;
    rating = 4.89;

    CWHVideo pyvideo(title, rating, vlen);
    // pyvideo.display();

    // for cwh text
    title = "Python tutorial text";
    words = 433;
    rating = 4.19;

    CWHText pytext(title, rating, words);
    // pytext.display();

    CWH *tuts[2];
    tuts[0] = &pyvideo;
    tuts[1] = &pytext;

    tuts[0]->display();
    tuts[1]->display();

    return 0;
}