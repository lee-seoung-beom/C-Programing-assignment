#include <stdio.h>
#pragma warning (disable:4996)

int main()
{
	/*5-1
	int n;
	scanf("%d",&n);
	if (n < 0) {
		printf("cold, indoor");
	}
	if ((n >= 0) && (n < 40)) {
		printf("moderate, outdoor");
	}
	if (n >= 40) {
		printf("hot, indoor");
	}*/

	/*5-2
	unsigned int n, m;
	scanf("%u %u", &n, &m);
	if (m==n/m) {
		printf("%d*%d=%d", m, n/m, n);
	}
	else if (n==m/n) {
		printf("%d*%d=%d", n, m/n, m);
	}
	else
		printf("none");*/

	/*5-3
	int a, b, c, d, e,i=0;
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	if (a > 0) {
		i += a;
	}
	if (b > 0) {
		i += b;
	}
	if (c > 0) {
		i += c;
	}
	if (d > 0) {
		i += d;
	}
	if (e > 0) {
		i += e;
	}
	printf("%d", i);*/

	/*5-4
	char ch;
	scanf("%c", &ch);
	if ((65 <= ch) && (ch <= 90)) {
		printf("%c", ch + 32);
	}
	else if ((97 <= ch) && (ch <= 122)) {
		printf("%c", ch - 32);
	}
	else
		printf("none");*/

	/*5-5
	unsigned int num;
	scanf("%d", &num);
	if (num % 2 == 0) {
		if (num % 3 == 0) {
			if (num % 5 == 0) {
				printf("A");
			}
			else
				printf("B");
		}
		else if (num % 5 == 0) {
			printf("C");
		}
		else
			printf("E");
	}
	else if (num % 3 == 0) {
		if (num % 5 == 0) {
			printf("D");
		}
		else
			printf("E");
	}
	else if (num % 5 == 0) {
		printf("E");
	}
	else
		printf("N");*/

	/*5-6(1)
	int a, b, c, max, min;
	scanf("%d %d %d", &a, &b, &c);
	if (a > b) {
		if (b > c) {
			max = a;
			min = c;
		}
		else if (c > a) {
			max = c;
			min = b;
		}
		else {
			max = a;
			min = b;
		}
	}
	else if (b > a) {
		if (a > c) {
			max = b;
			min = c;
		}
		else if (c > b) {
			max = c;
			min = a;
		}
		else {
			max = b;
			min = a;
		}
	}printf("%d %d", max, min);*/

	/*5-6(2)
	int a, b, c;
    int min,max;
    int tmp;

	scanf("%d %d %d", &a, &b, &c);

	if (a > b){
        tmp = a;
        a = b;
        b = tmp;
    }
	if (b > c){
		tmp = b;
        b = c;
        c = tmp;
    }
    if (a > b){
        tmp = a;
        a = b;
        b = tmp;
    }
	max = c; min = a;
	printf("%d %d", max, min);*/

	/*5-7
	int n,m,re;
	scanf("%d", &n);
	scanf("%d", &m);
	if (n == m) {
		printf("RIGHT\n");
	}

	if (n > m) {
		printf("UP\n");
		scanf("%d", &re);
		if (n == re) {
			printf("RIGHT\n");
		}
		else if (n > re) {
			printf("UP\n");
		}
		else if (n < re) {
			printf("DOWN\n");
		}
	}


	if (n < m) {
		printf("DOWN\n");
		scanf("%d", &re);
		if (n == re) {
			printf("RIGHT\n");
		}
		else if (n > re) {
			printf("UP\n");
		}
		else if (n < re) {
			printf("DOWN\n");
		}
	}*/

	/*5-8
	int n;
	scanf("%d", &n);
	if (n % 4 == 0) {
		if (n % 100 == 0) {
			if (n % 400 == 0) {
				printf("leap year");
			}
			else
				printf("common year");
		}
		else
			printf("leap year");
	}
	else
		printf("common year");*/

	/*5-9
	int year1, year2, month1, month2, day1, day2;
	scanf("%d/%d/%d", &year1, &month1, &day1);
	scanf("%d/%d/%d", &year2, &month2, &day2);

	if (year1 > year2) {
		printf("%04d/%02d/%02d", year2, month2, day2);
	}
	else if (year1 < year2) {
		printf("%04d/%02d/%02d", year1, month1, day1);
	}
	else if (year1 == year2) {
		if (month1 > month2) {
			printf("%04d/%02d/%02d", year2, month2, day2);
		}
		else if (month1 < month2) {
			printf("%04d/%02d/%02d", year1, month1, day1);
		}
		else if (month1 == month2) {
			if (day1 > day2) {
				printf("%04d/%02d/%02d", year2, month2, day2);
			}
			else if (day1 < day2) {
				printf("%04d/%02d/%02d", year1, month1, day1);
			}
			else if (day1 == day2) {
				printf("%04d/%02d/%02d*", year1, month1, day1);
			}
		}
	}*/

	/*5-10
	int k, e, m, ava;
	scanf("%d %d %d", &k, &e, &m);
	ava = (k + e + m) / 3;
	if (ava >= 91.5) {
		printf("A");
	}
	else if (ava >= 85.5) {
		printf("B");
	}
	else if (ava >= 80.5) {
		printf("C");
	}
	else
		printf("F");
	
	if ((k == 100) || (e == 100) || (m == 100)) {
		printf("Good");
	}
	if ((k < 60) || (e < 60) || (m < 60)) {
		printf("Bad");
	}*/

	/*5-11
	int a1, a2, a3, q1, q2, q3;
	int s=0, b=0;
	scanf("%d %d %d", &a1, &a2, &a3);
	scanf("%d %d %d", &q1, &q2, &q3);

	if (a1 == q1) {
		s++;
	}
	else if (a1 == q2) {
		b++;
	}
	else if (a1 == q3) {
		b++;
	}

	if (a2 == q2) {
		s++;
	}
	else if (a2 == q1) {
		b++;
	}
	else if (a2 == q3) {
		b++;
	}

	if (a3 == q3) {
		s++;
	}
	else if (a3 == q1) {
		b++;
	}
	else if (a3 == q2) {
		b++;
	}
	printf("%dS%dB", s, b);*/

	int n,m,c5,c1,money;
	scanf("%d", &n);
	scanf("%d", &m);
	if (n == 1) {
		printf("Americano\n");
		money = m - 500;
	}
	if (n == 2) {
		printf("Cafe Latte\n");
		money = m - 400;
	}
	if (n == 3) {
		printf("Lemon Tea\n");
		money = m - 300;
	}
	if (money >= 500) {
		c5 = money / 500;
		c1 = (money % 500) / 100;
	}
	else if (money < 500) {
		c1 = money / 100;
	}
	printf("%d %d", c5, c1);

	return 0;
}