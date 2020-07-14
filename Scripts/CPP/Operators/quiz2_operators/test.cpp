#include <iostream>

// conditional operators are fucking sick
//

int main() {
	int x{1};
	int y{2};
	int z{3};
	((x > y) ? printf("%d",x) : printf("%d",y));
}
