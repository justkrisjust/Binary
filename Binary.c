
int main(){
	int a[10],lt=0,rt=9,i,val,md=(lt+rt)/2;
	
	printf("enter the elements you want to store in order only :");
	for (i=0;i<10;i++)
	scanf("%d",&a[i]);
	
	printf("enter the value you want to search  : ");
	scanf("%d",&val);
	
	while (lt<=rt){
		if (val>a[md])
		lt=md+1;
		else
		if (val<a[md])
		rt=md-1;
	   
	    else {
		printf("the element found : %d",md+1);
		break;
	}
	md=(lt+rt)/2;}
	
	if (lt>rt)
	printf("the element is not found in the array sorry...");
	getch();
	
}