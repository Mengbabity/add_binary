class Solution {
public:
	string addBinary(string a, string b) {
		vector<int> s1, s2,sum;
		int extra = 0;
		int n1 = a.size();
		int n2 = b.size();
		int n = 0;
		int i = 0, j = 0, temp = 0;
		string res;

		for (int i = n1; i >0; i--)
		{
			s1.push_back((int)a[i - 1]-48);
		}

		for (int j = n2; j > 0; j--)
		{
			s2.push_back((int)b[j - 1]-48);
		}

		while (i<n1 && j<n2)
		{
			temp = s1[i] + s2[j]+extra;
			extra = temp / 2;
			temp = temp % 2;
			sum.push_back(temp);	
			i++;
			j++;

		}

		while (extra != 0 || i<n1 || j<n2)
		{
			if (i < n1)
			{
				temp = s1[i] + extra;
				extra = temp / 2;
				temp = temp % 2;
				sum.push_back(temp);
				i++;
			}
			else if (j < n2)
			{
				temp = s2[j] + extra;
				extra = temp / 2;
				temp = temp % 2;
				sum.push_back(temp);
				j++;
			}
			else
			{
				temp = extra;
				extra = temp / 2;
				temp = temp % 2;
				sum.push_back(temp);				
			}
		}

		n = sum.size();
		for (int i = n; i >0; i--)
		{
			res += to_string(sum[i-1]);
		}
		
		cout << res << endl;
		return res;
	}
};
