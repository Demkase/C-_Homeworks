// Є прямокутна дачна ділянка, потрібно для неї замовити паркан.
// Попросіть користувача ввести розмір (довжину/ширину) ділянки у метрах, а потім виведіть довжину паркану і його повну вартість.
// Паркан продається лише по метрам (треба округлити).
// Вартість одного метру паркану - $10.15

#include <stdio.h>
#include <math.h>

float l, w, fp, pr, tl;

int main()

{
	printf ("Enter site size:\n");
	scanf ("%f %f", &l, &w);
	
	tl = (l + w) * 2;
	fp = tl / 1;
	pr = ceil(fp) * 10.15;

	printf ("Fence length: %.2f m\n", tl);
	printf ("Fence pieces needed: %.0f\n", ceil(fp));
	printf ("Total price: %.2f $\n", pr);
}