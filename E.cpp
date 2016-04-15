#include <bits/stdc++.h>

using namespace std;

int main ()
{
	int cases ;

	scanf("%d\n", &cases);
	int m;
	
	while (cases > 0){
		scanf("\n%d", &m);
		
		pair<int, int> coord [100010];
		memset(coord, -1, 100010);	
		int count = 0;
		while (scanf("%d %d", &coord[count].first, &coord[count].second) == 2){
		if (coord[count].first + coord[count].second == 0) break;
			//printf ("%d %d", coord[count].first,coord[count].second);
			++count;	
		}
		

			 			
		bool zero = false, isM = false;
		int ind [10010];
		int index =0; 
		for ( int i = 0; i < count; ++i)
		{	
			
			if (coord[i].first >= 0 && coord[i].second <= m)
			{
				ind[index]	= i;
				++index;
				if (coord[i].first == 0) zero = true;
				if ( coord[i].second == m) isM  = true;
			}
		}	
		

		if (zero && isM) 
		{
			printf("%d\n", index);
			for ( int i; i < index; ++i)
			{
				printf("%d %d\n\n", coord[ind[i]].first, coord[ind[i]].second);	
			}
			
		} else {
			printf("%d\n\n", -1);				
		}
		--cases;
	}	
	
	return 0;
}
