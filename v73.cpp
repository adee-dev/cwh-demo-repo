# include <iostream>
# include <map>
# include <string>

using namespace std;

int main()
{	
    map<string, int> marksMap;
    marksMap["Aditya"] = 90;
    marksMap["Suraj"] = 91;
    marksMap["Tanmay"] = 92;

    map<string, int> :: iterator iter;
    for (iter = marksMap.begin();iter!=marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" "<<(*iter).second<<"\n";
    }
    
    
    return 0;
}