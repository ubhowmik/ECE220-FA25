float fun(float x)
{
	float y;
	y=x*x+2*x+3;
	return y;
}

float reimann_int(int n, float a, float b)
{
     float dx; int i;
     dx=(b-a)/n; float s=0.0;
     float x, y;
     for (i=0;i<n;i++) {
	     x=a+dx*i;
	     y=fun(x);
	     s+=y*dx;
}
return s;
}

