#define uchar unsigned char
#define uint unsigned int
	/*
  a
f   b
  g 
e   c
  d

  hgfe dcba 
0=0011 1111
*/
//                         0     1     2   3     4   5    6     7    8   9      
uchar seg_a_code[]={0x3f,0x06,0x5b,0x4f,0x66,0x6d,0x7d,0x07,0x7f,0x6f}; //共阴段码
uchar dig_code[]={0x01,0x02,0x04,0x08};//位码
uint count=0;
