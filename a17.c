/* Question No.5 - The buying price, the marker price
and discount are entered through
keyboard. Sometimes seller gets
profit or sometimes loss
depending upon the discount.
WAP to determine whether the
seller has made profit or incurred
loss. Also determine how much
profit he made or loss he incurred. */
#include<stdio.h>
int main()
{
float sp,pr,mp,dc,bp ;
printf("Enter the buying price: ");
scanf("%f",&bp);
printf("Enter the marker price: ");
scanf("%f",&mp);
printf("Enter the discount: ");
scanf("%f",&dc);
sp = mp - ((dc/100)*mp);
if (sp>bp)
{
pr = ((sp-bp)/bp)*100;
printf("The Profit is :%f%% ",pr) ;
}
else if (sp<bp)
{
pr=((bp-sp)/bp)*100;
printf("The loss is :%f%% ", pr); }
else {
printf("No Profit No loss");
}
}



