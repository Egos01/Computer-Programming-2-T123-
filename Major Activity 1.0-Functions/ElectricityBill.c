#include <stdio.h>

int main() {
  int custid, con;
  float charge, suprchg = 0, unit, total;

  printf("Input Customer ID: ");
  scanf("%d", & custid);
  printf("Input the unit consumed by the customer: P ");
  scanf("%d", & con);

  if (con < 200)
    charge = 1.50;
  else if (con >= 250 && con < 400)
    charge = 1.60;
  else if (con >= 450 && con < 600)
    charge = 1.85;
  else
    charge = 2.00;
  unit = con * charge;
  if (unit > 400)
    suprchg = unit * 10 / 100.0;
  total = unit + suprchg;
  if (total < 100)
    total = 100;

  printf("\n[Electricity Bill]\n");
  printf("Customer ID#                     : %d\n", custid);
  printf("Unit Consumed                    : P %d\n", con);
  printf("Amount Charges @P%.2f per unit   : P %.2f\n", charge, unit);
  printf("Surchage Amount                  : P %.2f\n", suprchg);
  printf("Total Customer Bill              : P %.2f\n", total);

  return 0;
}
