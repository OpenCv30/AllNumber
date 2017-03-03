#include <stdlib.h>
#include <stdio.h>
#include <map>
#include <string>
#include <iostream>

using namespace std;
string election[14]={"japan","india","america","india","iran","japan","america","india","veta","veta","veta","mota","mota","mota"};

int main()
{
	printf("hello world \n");
	int N =14;
	std::map<std::string,int> electionId;
	for( int i=0 ; i<N; i++)
	{
		if(electionId.empty())
		{          electionId(std::make_pair(election[i],0));
		}
		if( electionId.find(election[i]) != electionId.end())
		{
			electionId[election[i]]= 0;
		}
		else
		{
			electionId[election[i]] +=1;
		}
		
	}
	for( auto &i : electionId){
		cout << i.first << endl;
		cout << i.second;
		
	}
	
		
}