#include <unistd.h>
#include <stdio.h>

void	ptime(int hr)
{
	if (hr >= 100)
		hr = hr / 100;
	if (hr >= 24)
		hr = hr - 24;
	if (hr < 0)
		hr = hr + 24;
	if (hr < 12)
	{
		if (hr == 0)
			hr = 12;
		printf("%d.00 A.M. ", hr);
	}
	else
	{
		if (hr > 12)
			hr -= 12;
		printf("%d.00 P.M. ", hr);
	}
}

void	ft_takes_place(int hr)
{
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	ptime(hr);
	printf("AND ");
	ptime(++hr);
	printf("\n");
}

int main()
{
	ft_takes_place(23);
}
