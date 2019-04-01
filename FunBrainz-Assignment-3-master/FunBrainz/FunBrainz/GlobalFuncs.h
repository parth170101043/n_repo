#pragma once
#include <stdio.h>  
#include <utility> 
#include<cmath>
#include<ctime>
#include<string>
#include<iostream>

using namespace std;
ref class GlobalFuncs
{
public:
	GlobalFuncs(void);

public: static std::pair <std::string, int> generateQuestion(int operatorIndex, int level)
		 {
					  if (operatorIndex == 4)
					  {
						  operatorIndex = rand() % 4;
						  std::pair < std::string, int > temp;
						  temp = generateQuestion(operatorIndex, level);
						  return temp;

					  }

					  else
					  {
						  std::pair < std::string, int > temp;

						  int range;

						  if (operatorIndex < 2)
						  {
							  range = pow((double)2, level + 3);
						  }

						  else
						  {
							  range = pow((double)2, level);
						  }

						  int num1, num2;

						  num1 = rand() % range;
						  num2 = rand() % range;

						  if (operatorIndex >= 2)
						  {
							  if (range >= 100)
							  {
								  num2 = rand() % 100 + 1;
							  }
						  }
						  // 		cout << num << " ";
						  int result;


						  std::string question = "";
						  question += std::to_string((long long)num1);

						  if (operatorIndex == 0)
						  {
							  result = num1 + num2;
							  question += '+';
						  }

						  else if (operatorIndex == 1)
						  {
							  result = num1 - num2;
							  question += '-';

						  }

						  else if (operatorIndex == 2)
						  {
							  result = num1 * num2;
							  question += '*';

						  }

						  else if (operatorIndex == 3)
						  {
							  result = rand() % range + 1;

							  if (result > 50)
							  {
								  result = rand() % 50 + 1;
							  }

							  num2 = rand() % range + 1;

							  if (num2 >= 100)
								  num2 = rand() % 100 + 1;

							  num1 = num2 * result;

							  question = "";
							  question += std::to_string((long long)num1);
							  question += '/';
						  }

						  question += std::to_string((long long)num2);
						  temp.first = question;
						  temp.second = result;
						  return temp;
					  }

		 }
};

