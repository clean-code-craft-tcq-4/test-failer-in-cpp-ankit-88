#include <iostream>
#include <assert.h>
int getPairNumber(int majorColorIdx, int minorColorIdx)
{       
    return majorColorIdx*5+minorColorIdx;  
}
const char* getMajorColor(int majorColorIdx, int minorColorIdx, const char* majorColor[])
{       
        int pairNumber = getPairNumber(majorColorIdx, minorColorIdx);
		int majorColorIndex = (pairNumber-1) / 5;
		
		return majorColor[majorColorIndex];
}	
const char* getMinorColor(int majorColorIdx, int minorColorIdx, const char* minorColor[])
{
	    int pairNumber = getPairNumber(majorColorIdx, minorColorIdx);
		int minorColorIndex = (pairNumber) % 5;
		
		return minorColor[minorColorIndex];
}
int printColorMap() {
    const char* majorColor[] = {"White", "Red", "Black", "Yellow", "Violet"};
    const char* minorColor[] = {"Blue", "Orange", "Green", "Brown", "Slate"};
    int i = 0, j = 0;
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            std::cout << i * 5 + j << " | " << getMajorColor(i,j, majorColor) << " | " << getMinorColor(i,j , minorColor) << "\n";
            assert(getPairNumber(i,j) == (i*5+j)+1);
            assert(getMajorColor(i,j,majorColor) == majorColor[i]);
            assert(getMinorColor(i,j,minorColor) == minorColor[j]);
            
        }
    }
    return i * j;
}

int main() {
    int result = printColorMap();
    assert(result == 25);
    std::cout << "All is well (maybe!)\n";
    return 0;
}