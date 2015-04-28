#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;

#define get getchar_unlocked()
#define in long long int

inline int scan()
{
	in n = 0, ch = get;

	while (ch < 48 || ch > 57)
		ch = get;
	while (ch >= 48 && ch <= 57) {
		n = (n<<3) + (n<<1) + ch -48;
		ch = get;
	}

	return n;
}

in a[1000001], b[1000001];
	
int main()
{
	in n, m, i, j, k, l, r;
	
	n = scan();
	for (i = 0; i < n; i++)
		a[i] = scan();
	memset(b, 0, sizeof(b));
	
	m = scan();
	
	while (m--) {
		l = scan();
		r = scan();
		k = scan();
		b[l-1] += k;
		b[r] -= k;	
	}

	for (i = 0; i < n; i++) {
		b[i] += b[i-1];
	}
	for (i = 0; i < n; i++) 
		a[i] += b[i];
	for (i = 0; i < n; i++)
		printf("%lld\n", a[i]);
	return 0;
}
	
