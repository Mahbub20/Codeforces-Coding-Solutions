#include <stdio.h>
#include <string.h>
char arr[500];
int arr2[500];
int main() {
	int n, m; scanf("%d %d", &n, &m);
	scanf("%s", arr);
	int len = strlen(arr);
	for (int i = 0; i < len; i++) {
		arr2[arr[i] - 'a']++;
	}
	int cnt = 0;
	int ch = 0;
	for (int i = 0; i < 26; i++) {
		if (arr2[i] != 0) {
			ch++;
			cnt += i+1;
			i++;
		}
		if (ch == m) break;
	}
	if (ch < m) printf("%d", -1);
	else printf("%d", cnt);
	return 0;
}
