#include <stdio.h>

void removeKilled(int *array, int size, int killedPrisoner);

int main()
{
	int numPrisoners, m, i;

	scanf("%d", &numPrisoners);
	scanf("%d", &m);

	int prisoners[numPrisoners];
	int killed[numPrisoners];

	// generate array 1 to numPrisoners
	for (i = 0; i < numPrisoners; i++) {
		prisoners[i] = i + 1;
	}

	int *killerPtr = &prisoners[0];

	// Select prisoner to be killed
	for (i = 0; i < numPrisoners; i++) {
        for (int step = 0; step < m - 1; step++) {
            if (*killerPtr == 0) {
                killerPtr = &prisoners[0];
                step--;
            } 
            else killerPtr++;
            if (killerPtr >= &prisoners[numPrisoners - i]) killerPtr = &prisoners[0];
        }

		// append number of prisoner who is killed to array `killed`
		killed[i] = *killerPtr;
		// remove number killed prisoner from array `prisoners`
		removeKilled(&prisoners[0], numPrisoners - i, *killerPtr);
	}

	for (i = 0; i < numPrisoners; i++) {
		printf("%d ", killed[i]);
	}
	return 0;
}

void removeKilled(int *array, int size, int killedPrisoner)
{
  for (int i = 0; i < size; i++) {
    if (array[i] == killedPrisoner) {
      for (int j = i; j < size - 1; j++) {
        array[j] = array[j + 1];
      }
      array[size - 1] = 0;
      return;
    }
  }
}
