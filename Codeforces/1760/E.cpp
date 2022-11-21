#include <bits/stdc++.h>
using namespace std;

#define int long long int

int merge(int a[], int left, int mid, int right) {
  int i=left, j=mid, k=0;
  int cnt=0;
  int temp[(right-left+1)];
 
  while((i<mid)&&(j<=right)) {
    if(a[i]<=a[j]) {
      temp[k]=a[i];
      ++k;
      ++i;
    } else {
      temp[k]=a[j];
      cnt+=(mid-i);
      ++k;
      ++j;
    }
  }
 
  while(i<mid) {
    temp[k]=a[i];
    ++k;
    ++i;
  }
 
  while (j<=right) {
    temp[k]=a[j];
    ++k;
    ++j;
  }
 
  for(i=left,k=0; i<=right;i++,k++) {
    a[i]=temp[k];
  }
 
  return cnt;
}

int mergeSort(int a[], int left, int right) {
	int cnt=0;
	if(right>left) {
		int mid=(right+left)/2;
		cnt=mergeSort(a, left, mid);
		cnt+=mergeSort(a, mid+1, right);
		cnt+=merge(a, left, mid+1, right);
	}
	return cnt;
}

int getInv(int a[], int n) {
	return mergeSort(a, 0, n-1);
}

void solve() {
	int n, cnt=0;
	cin>>n;
	int a[n], b[n], c[n];
	bool f=0;
	for(int i=0;i<n;i++) {
		cin>>a[i];
		b[i]=a[i];
		c[i]=a[i];
	}
	
	int ans3=getInv(c, n);
	
	for(int i=0;i<n;i++) {
		if(a[i]==0) {
			a[i]=1;
			f=1;
			break;
		}
	}
	
	if(f==0) {
		a[n-1]=0;
	}
	
	int ans1=getInv(a, n);
	
	f=0;
	
	for(int i=n-1;i>=0;i--) {
		if(b[i]==1) {
			b[i]=0;
			f=1;
			break;
		}
	}
	
	if(f==0) {
		b[0]=1;
	}
	
	int ans2=getInv(b, n);
	int ans=max({ans1, ans2, ans3});
	cout<<ans<<"\n";
	
}

int32_t main() {
	int t=1;
	cin>>t;
	while(t--) {
		solve();
	}
	return 0;
}
