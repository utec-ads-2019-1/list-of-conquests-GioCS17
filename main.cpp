#include <iostream>
#include<sstream>
#include<map>

using namespace std;

int main(int argc, char *argv[]) {
	
	string line;
	string country;
	int n;
	cin>>n;
	cin.ignore();
	map<string,int> dict;
	while(n--){
		getline(cin,line);
		stringstream s(line);
		s>>country;
		if(dict.count(country)==0)
			dict[country]=1;
		else
			dict[country]++;

	}

	for(auto t=dict.begin();t!=dict.end();t++)
		cout<<t->first<<" "<<t->second<<endl;
    return 0;
}
