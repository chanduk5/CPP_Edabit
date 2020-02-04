#include<iostream>
#include<string>

using namespace std;

int commonCharacterCount(std::string s1, std::string s2) {

	int commonChrCntstr1 = 1, commonchrcntstr2 = 0, count = 0;

	for (int i = 0; i < s1.length(); i++)
	{
		for (int j = i + 1; j < s1.length(); j++)
		{
			if (s1[i] == s1[j])
			{
				commonChrCntstr1 += 1;
				s1.erase(j, 1);
			}
		}

		for (int k = 0; k < s2.length(); k++)
		{
			if (s1[i] == s2[k])
			{
				commonchrcntstr2 += 1;
			}
		}

		if (commonchrcntstr2 != 0)
		{
			if (commonChrCntstr1 < commonchrcntstr2)
			{
				count += commonChrCntstr1;
			}
			else
			{
				count += commonchrcntstr2;
			}
		}
		commonChrCntstr1 = 1;
		commonchrcntstr2 = 0;
	}

	return count;
}

void characterCount(void)
{
	string str1, str2;

	cout << "Enter the strings: ";
	cin >> str1 >> str2;

	cout << "Common character count: " << commonCharacterCount(str1, str2);
}