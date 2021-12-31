long int faktoriyel(long int n)
{
	long int i, f=1;
	for(i=1;i<=n;i++)
		f*=i;
	return f;
}
long int C(long int n,long int r)
{
	return (faktoriyel(n)/faktoriyel(r)*faktoriyel(n-r));
}
