#include <bits/stdc++.h>
using namespace std;

string reverseWordOrder(string &str)
{
	stack<string> wordStack;
	istringstream iss(str);
	string word, result;

	while (iss >> word)
	{
		wordStack.push(word);
	}

	while (!wordStack.empty())
	{
		result += wordStack.top();
		wordStack.pop();
		if (!wordStack.empty())
		{
			result += " ";
		}
	}

	if (!result.empty() && str.back() == '.')
	{
		result += ".";
	}

	return result;
}

int main()
{
	string original;

	getline(cin, original);

	cout << original << endl;
	string reversed = reverseWordOrder(original);

	cout << reversed << endl;
	return 0;
}
