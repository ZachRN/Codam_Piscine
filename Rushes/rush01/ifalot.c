void 	input_compare(char array[6][6])
{
/////////////////// i ='2'opposite i = 2
	if ( array[1][0] == '2' && array[1][5]== '2' && array[0][1] == '2' && array[0][2] == '1')
	{
		// i ='2'opposite i ='2'v
		array[1][1] = '3';
		array[1][2] = '4';
		array[1][3] = '1';
		array[1][4] = '2';
	}
	if (array[1][0] =='2'&& array[1][5] =='2'&& array[0][4]=='2'&& array[0][3] == '1')
	{
		// i ='2'opposite i ='2'^ 
		array[1][1] = '2';
		array[1][2] = '1';
		array[1][3] = '4';
		array[1][4] = '3';
	}
	if (array[0][1] =='2'&& array[5][1] =='2'&& array[1][0] =='2'&& array[2][0] == '1')
	{
		// i ='2'opposite i ='2'>
		array[1][1] = '3';
		array[2][1] = '4';
		array[3][1] = '1';
		array[4][1] = '2';
	}
	if (array[0][1] =='2'&& array[5][1] =='2'&& array[4][0]=='2'&& array[3][0] == '1')
	{
		// i ='2'opposite i ='2'<
		array[1][1] = '2';
		array[2][1] = '1';
		array[3][1] = '4';
		array[4][1] = '3';
	}
	if (array[4][0] =='2'&& array[4][5] =='2'&& array[5][1] =='2'&& array[5][2] == '1')
	{
		// i ='2'opposite i ='2'v
		array[4][1] = '3';
		array[4][2] = '4';
		array[4][3] = '1';
		array[4][4] = '2';
	}
	if (array[4][0] =='2'&& array[4][5] =='2'&& array[5][4] =='2'&& array[5][3] == '1')
	{
		// i ='2'opposite i ='2'^
		array[4][1] = '2';
		array[4][2] = '1';
		array[4][3] = '4';
		array[4][4] = '3';
	}
	if (array[5][4] =='2'&& array[0][4] =='2'&& array[4][5] =='2'&& array[3][5] == '1')
	{
		// i ='2'opposite i ='2'<
		array[4][4] = '3';
		array[3][4] = '4';
		array[2][4] = '1';
		array[1][4] = '2';
	}
	if (array[5][4] =='2'&& array[0][4] =='2'&& array[1][5] =='2'&& array[2][5] == '1')
		{
		// i ='2'opposite i ='2'> 
		array[1][4] = '3';
		array[2][4] = '4';
		array[3][4] = '1';
		array[4][4] = '2';
	}
/////////////////// i ='2'opposite i = 3
	if ( array[1][0] =='2'&& array[1][5]=='3'&& array[0][1] =='2'&& array[0][2] == '1')
	{
		// i ='2'opposite i ='3'v
		array[1][1] = '3';
		array[1][2] = '4';
		array[1][3] = '2';
		array[1][4] = '1';
	}
	if (array[1][0] =='3'&& array[1][5] =='2'&& array[0][4]=='2'&& array[0][3] == '1')
	{
		// i ='2'opposite i ='3'^ 
		array[1][1] = '1';
		array[1][2] = '2';
		array[1][3] = '4';
		array[1][4] = '3';
	}
	if (array[0][1] =='2'&& array[5][1] =='3'&& array[1][0] =='2'&& array[2][0] == '1')
	{
		// i ='2'opposite i ='3'>
		array[1][1] = '3';
		array[2][1] = '4';
		array[3][1] = '2';
		array[4][1] = '1';
	}
	if (array[0][1] =='3'&& array[5][1] =='2'&& array[4][0]=='2'&& array[3][0] == '1')
	{
		// i ='2'opposite i ='3'<
		array[1][1] = '1';
		array[2][1] = '2';
		array[3][1] = '4';
		array[4][1] = '3';
	}
	if (array[4][0] =='2'&& array[4][5] =='3'&& array[5][1] =='2'&& array[5][2] == '1')
	{
		// i ='2'opposite i ='3'v
		array[4][1] = '3';
		array[4][2] = '4';
		array[4][3] = '2';
		array[4][4] = '1';
	}
	if (array[4][0] =='3'&& array[4][5] =='2'&& array[5][4] =='2'&& array[5][3] == '1')
	{
		// i ='2'opposite i ='3'^
		array[4][1] = '1';
		array[4][2] = '2';
		array[4][3] = '4';
		array[4][4] = '3';
	}
	if (array[5][4] =='2'&& array[0][4] =='3'&& array[4][5] =='2'&& array[3][5] == '1')
	{
		// i ='2'opposite i ='3'<
		array[4][4] = '3';
		array[3][4] = '4';
		array[2][4] = '2';
		array[1][4] = '1';
	}
	if (array[5][4] =='3'&& array[0][4] =='2'&& array[1][5] =='2'&& array[2][5] == '1')
		{
		// i ='2'opposite i ='3'> 
		array[1][4] = '3';
		array[2][4] = '4';
		array[3][4] = '2';
		array[4][4] = '1';
	}
/////////////////// i ='3'opposite i = 1
	if ( array[1][0] =='3'&& array[1][5] =='1'&& array[0][4] =='1'&& array[0][3] == '2')
	{
		// i ='3'opposite i ='1'v
		array[1][1] = '2';
		array[1][2] = '1';
		array[1][3] = '3';
		array[1][4] = '4';
	}
	if (array[1][0] =='1'&& array[1][5] =='3'&& array[0][1]=='1'&& array[0][2] == '2')
	{
		// i ='3'opposite i ='1'^ 
		array[1][1] = '4';
		array[1][2] = '3';
		array[1][3] = '1';
		array[1][4] = '2';
	}
	if (array[0][1] =='3'&& array[5][1] =='1'&& array[4][0] =='1'&& array[3][0] == '2')
	{
		// i ='3'opposite i ='1'>
		array[1][1] = '2';
		array[2][1] = '1';
		array[3][1] = '3';
		array[4][1] = '3';
	}
	if (array[0][1] =='1'&& array[5][1] =='3'&& array[1][0]=='1'&& array[2][0] == '2')
	{
		// i ='3'opposite i ='1'<
		array[1][1] = '4';
		array[2][1] = '3';
		array[3][1] = '1';
		array[4][1] = '2';
	}
	if (array[4][0] =='3'&& array[4][5] =='1'&& array[5][4] =='1'&& array[5][3] == '2')
	{
		// i ='3'opposite i ='1'v
		array[4][1] = '2';
		array[4][2] = '1';
		array[4][3] = '3';
		array[4][4] = '4';
	}
	if (array[4][0] =='1'&& array[4][5] =='3'&& array[5][1] =='1'&& array[5][2] == '2')
	{
		// i ='3'opposite i ='1'^
		array[4][1] = '4';
		array[4][2] = '3';
		array[4][3] = '1';
		array[4][4] = '2';
	}
	if (array[5][4] =='3'&& array[0][4] =='1'&& array[1][4] =='1'&& array[2][5] == '2')
	{
		// i ='3'opposite i ='1'<
		array[4][4] = '2';
		array[3][4] = '1';
		array[2][4] = '3';
		array[1][4] = '4';
	}
	if (array[5][4] =='1'&& array[0][4] =='3'&& array[4][5] =='1'&& array[3][5] == '2')
	{
		// i ='3'opposite i ='1'> 
		array[1][4] = '2';
		array[2][4] = '1';
		array[3][4] = '3';
		array[4][4] = '4';
	}
/////////////////// i ='2'opposite i = 1
	if ( array[1][0] =='2'&& array[1][5]=='1'&& array[0][1] =='2'&& array[0][2] =='2'&& array[2][0] == '2')
	{
		// i ='2'opposite i ='1'v
		array[1][1] = '3';
		array[1][2] = '1';
		array[1][3] = '2';
		array[1][4] = '4';
		array[2][2] = '4';
	}
	if (array[1][0] =='1'&& array[1][5] =='2'&& array[0][4]=='2'&& array[0][3] =='2'&& array[2][5] == '2')
	{
		// i ='2'opposite i ='1'^ 
		array[1][1] = '4';
		array[1][2] = '2';
		array[1][3] = '1';
		array[1][4] = '3';
		array[2][3] = '4';
	}
	if (array[0][1] =='2'&& array[5][1] =='1'&& array[1][0] =='2'&& array[2][0] =='2'&& array[0][2] == '2')
	{
		// i ='2'opposite i ='1'>
		array[1][1] = '3';
		array[2][1] = '1';
		array[3][1] = '2';
		array[4][1] = '4';
		array[2][2] = '4';
	}
	if (array[0][1] =='1'&& array[5][1] =='2'&& array[4][0]=='2'&& array[3][0] =='2'&& array[5][2] == '2')
	{
		// i ='2'opposite i ='1'<
		array[1][1] = '4';
		array[2][1] = '2';
		array[3][1] = '1';
		array[4][1] = '3';
		array[3][2] = '4';
	}
	if (array[4][0] =='2'&& array[4][5] =='1'&& array[5][1] =='2'&& array[5][2] =='2'&& array[3][0] == '2')
	{
		// i ='2'opposite i ='1'v
		array[4][1] = '3';
		array[4][2] = '1';
		array[4][3] = '2';
		array[4][4] = '4';
		array[3][2] = '4';
	}
	if (array[4][0] =='1'&& array[4][5] =='2'&& array[5][4] =='2'&& array[5][3] =='2'&& array[3][5] == '2')
	{
		// i ='2'opposite i ='1'^
		array[4][1] = '4';
		array[4][2] = '2';
		array[4][3] = '1';
		array[4][4] = '3';
		array[3][3] = '4';
	}
	if (array[5][4] =='2'&& array[0][4] =='1'&& array[4][5] =='2'&& array[3][5] =='2'&& array[5][3] == '2')
	{
		// i ='2'opposite i ='1'<
		array[4][4] = '3';
		array[3][4] = '1';
		array[2][4] = '2';
		array[1][4] = '4';
		array[3][3] = '4';
	}
	if (array[5][4] =='1'&& array[0][4] =='2'&& array[1][5] =='2'&& array[2][5] =='2'&& array[0][3] == '2')
		{
		// i ='2'opposite i ='2'> 
		array[1][4] = '3';
		array[2][4] = '1';
		array[3][4] = '2';
		array[4][4] = '4';
		array[2][3] = '4';
	}
	// diff
	if (array[1][0] =='2'&& array[1][5] =='2'&& array[0][3] =='1'& array[0][4] =='2') // i=2 opposite i=2 down
	{
		array[1][1]='2';
		array[1][2]='1';
		array[1][3]='4';
		array[1][4]='3';
	}
	if (array[1][0] =='2'&& array[1][5] =='2'&& array[0][3] =='1'& array[0][4] =='2') // i=2 opposite i=2 down
	{
		array[1][1]='3';
		array[1][2]='4';
		array[1][3]='1';
		array[1][4]='2';
	}
	if (array[0][1] =='2' && array[5][1] =='2' && array[1][0] =='2'& array[2][0] =='1') // i=2 left to right
	{
		array[1][1]='3';
		array[2][1]='4';
		array[3][1]='1';
		array[4][1]='2';
	}
	if (array[0][1] =='2'&& array[5][1] =='2'&& array[3][0] =='1'  & array[4][0] == '2') // right to left 
	{
		array[1][1]='2';
		array[2][1]='1';
		array[3][1]='4';
		array[4][1]='3';
	}
	if (array[4][0] =='2'&& array[4][5] =='2'&& array[5][3] =='1'  & array[5][4] =='2') // 
	{
		array[4][1]='2';
		array[4][2]='1';
		array[4][3]='4';
		array[4][4]='3';
	}
	if (array[4][0] =='2'&& array[4][5] =='2'&& array[5][1] =='2'& array[5][2] =='1') // 
	{
		array[4][1]='3';
		array[4][2]='4';
		array[4][3]='1';
		array[4][4]='2';
	}
	if (array[0][4] =='2'&& array[5][4] =='2'&& array[3][5] =='1'& array[4][5] =='2') // 
	{
		array[1][4]='2';
		array[2][4]='1';
		array[3][4]='4';
		array[4][4]='3';
	}
	if (array[0][4] =='2'&& array[5][4] =='2'&& array[1][5] =='2'& array[2][5] =='1') // 
	{
		array[1][4]='3';
		array[2][4]='4';
		array[3][4]='1';
		array[4][4]='2';
	}
}
