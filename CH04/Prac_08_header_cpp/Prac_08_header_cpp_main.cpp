#include "Calculator.h"

int main(void) {
	Calculator cal;
	cal.Add(100, 44);

	cal.ShowResult();
	cal.Substract(100, 44);
	cal.ShowResult();

	return 0;
}