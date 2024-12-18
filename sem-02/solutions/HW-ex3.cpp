#include <iostream>

int main()
{
    int x, y, z;
	  std::cin >> x >> y >> z;

  	if (x > y)
  	{
  		x += y;
  		y = x - y;
  		x -= y;
  	}
  
  	if (x > z)
  	{
  		x += z;
  		z = x - z;
  		x -= z;
  	}
  
  	if (y > z)
  	{
  		y += z;
  		z = y - z;
  		y -= z;
  	}
  	
  	bool xIsEven = !(x % 2);
  	bool yIsEven = !(y % 2);
  	bool zIsEven = !(z % 2);
  	
  	bool areAllEven = xIsEven && yIsEven && zIsEven;
    bool areAllOdd = !xIsEven && !yIsEven && !zIsEven;
    
    if(areAllEven)
    {
        std::cout << z;
    }
    else if(areAllOdd)
    {
        std::cout << x;
    }
    else
    {
        int maxEven = zIsEven * z + yIsEven * y * !zIsEven + xIsEven * x * (!zIsEven && !yIsEven);
        int minOdd = !zIsEven * z + !yIsEven * y * zIsEven + !xIsEven * x * (zIsEven && yIsEven);
        
        std::cout << maxEven - minOdd;
    }
    
    return 0;
}
