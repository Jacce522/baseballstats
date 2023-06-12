#include <iostream>
#include <fstream>
#include <string>

using namespace std;





void search(const string name)
{
    string line = "";
    int count=0;
    string header = "Rk,Name,Age,Tm,Lg,G,PA,AB,R,H,2B,3B,HR,RBI,SB,CS,BB,SO,BA,OBP,SLG,OPS,OPS+,TB,GDP,HBP,SH,SF,IBB,Pos Summary";

   
   
    ifstream MyReadFile("baseballstats.txt");
   

    cout << header <<"\n";
    cout<< "-----------------------------------------------------------------------------------------" << endl;
    while(getline(MyReadFile, line)) 
    {   
        bool found = line.find(name) != std::string::npos;
        if(found)
        {
           cout << line << "\n";
            ++count;
            
        }
       
           
    }


        
    cout << count << " cases found\n";
    cout <<"\n";
    MyReadFile.close();
}





int main()
{
    string name ="";
    cout << "Type in player or team to search for 2023 MLB Batting: \n";
    cin >> name;
    search(name);
   
   

    return 0;
}
