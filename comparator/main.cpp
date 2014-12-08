
#include<iostream>
#include<vector>
#include<algorithm>

struct Rectangle
{
	public:
		double a;
		double b;

	double area() const { return a * b; }

	bool operator < (const Rectangle& right) const { return area() < right.area(); }
};

bool sort_rectangle(const Rectangle& a, const Rectangle& b);

using namespace std;

int main(int argc, char** argv)
{
	int k = 0;
	vector<Rectangle> v;
	//vector <Rectangle> :: iterator it;
    freopen("sample.txt", "r", stdin);
	
	cin >> k;
		
	for (int i = 0; i < k; i++) 
	{ 
		Rectangle r;
		cin >> r.a >> r.b;
		v.push_back(r);
	};

	cout<<" original "<<endl;
		
	for(int i=0;i<k;i++) 
	{
		cout<<v[i].a<<" "<<v[i].b<<endl;
	};	

	sort(v.begin(), v.end(), sort_rectangle);	
	
	cout<<" sorted"<<endl;	
	
	for(int i=0;i<k;i++) 
	{
		cout<<v[i].a<<" "<<v[i].b<<endl;
	};

 return 0;
}

bool sort_rectangle(const Rectangle& A, const Rectangle& B)
{
	return A.area() > B.area();
}
