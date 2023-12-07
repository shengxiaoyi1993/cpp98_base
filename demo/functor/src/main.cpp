#include <iostream>
#include <string>
#include "export.h"
#include <cstring>
#include <cstdlib>
#include <cstdio>


void test_readWithShort();
void readAndWriteWithFile();
void readAndWriteWithFile_array();
void readAndWriteWithFile_array_read();
using namespace std;
int main() {


  //   char pchar[]={'1','2'};
  //   unsigned short pshort ;
  //   memcpy(&pshort,pchar,2);
  //   std::cout << "pshort:"<<hex<<pshort << '\n';
  //   std::cout << "pchar[0]:"<<pchar[0] << '\n';
  //   std::cout << "pchar[0]:"<<pchar[1] << '\n';
  //   // pshort=0x3231;
  //   // memcpy(pchar, &pshort,2);
  //   char *pchar_fromshort=(char*)&pshort;
  //   std::cout << "pchar_fromshort:"<<hex<<pshort << '\n';
  //   std::cout << "pchar_fromshort[0]:"<<pchar_fromshort[0] << '\n';
  //   std::cout << "pchar_fromshort[0]:"<<pchar_fromshort[1] << '\n';
  //   readAndWriteWithFile();
  //   readAndWriteWithFile_array();
  readAndWriteWithFile_array_read();




  return 0;
}

void readAndWriteWithFile(){
  FILE* fp_char=fopen("0914_char.txt","a+");
  FILE* fp_short=fopen("0914_short.txt","a+");

  if(fp_char == NULL || fp_short == NULL){
    return;
  }

  char pchar[]={'1','2','1','2','1','2'};
  //   unsigned short pshort =pchar[0]<<8+pchar[1] ;
  //   unsigned short pshort =(unsigned short)pchar[0]|((unsigned short)pchar[1]) <<8;
  unsigned short pshort;

  memcpy(&pshort,pchar,2);
  cout<<"unsigned short："<<sizeof (unsigned short)<<endl;

  cout << "pshort:"<<hex<<pshort << '\n';
  cout <<hex<<(int)pchar[0]<<" "<<(int)pchar[1]<<endl;
  cout <<dec<<(int)pchar[0]<<" "<<(int)pchar[1]<<endl;

  fwrite(pchar,1,2,fp_char);
  fwrite(&pshort,2,1,fp_short);

  fclose(fp_char);
  fclose(fp_short);

}

void readAndWriteWithFile_array(){
  FILE* fp_char=fopen("0914_char.txt","a+");
  FILE* fp_short=fopen("0914_short.txt","a+");

  if(fp_char == NULL || fp_short == NULL){
    return;
  }

  char pchar[]={'1','2','1','2','1','2'};
  //   unsigned short pshort =pchar[0]<<8+pchar[1] ;
  //   unsigned short pshort =(unsigned short)pchar[0]|((unsigned short)pchar[1]) <<8;
  unsigned short pshort[3];

  memcpy(pshort,pchar,6);
  cout<<"unsigned short："<<sizeof (unsigned short)<<endl;

  cout << "pshort:"<<hex<<pshort << '\n';
  cout <<hex<<(int)pchar[0]<<" "<<(int)pchar[1]<<endl;
  cout <<dec<<(int)pchar[0]<<" "<<(int)pchar[1]<<endl;

  fwrite(pchar,1,6,fp_char);
  fwrite(&pshort,2,3,fp_short);

  fclose(fp_char);
  fclose(fp_short);

}

void readAndWriteWithFile_array_read(){
  FILE* fp_char=fopen("0914_char.txt","a+");
  FILE* fp_short=fopen("0914_short.txt","a+");

  if(fp_char == NULL || fp_short == NULL){
    return;
  }

  char pchar[6];
  unsigned short pshort[3];
  fread(pchar,1,6,fp_char);
  cout <<hex<<(int)pchar[0]<<" "<<(int)pchar[1]<<endl;

  fseek(fp_char,0,SEEK_SET);
  fread(pshort,2,3,fp_char);
  cout <<hex<<pshort[0]<<" "<<pshort[1]<<endl;

  unsigned short data_short;
  fseek(fp_char,0,SEEK_SET);
  fread(&data_short,2,1,fp_char);
  cout <<hex<<data_short<<endl;


  fclose(fp_char);
  fclose(fp_short);

}




void test_readWithShort(){
  // char line[32]="encrypted:458f15ada8e3cfdec5dbc";
  // char key[16];
  // char value[24];
  // sscanf(line,"%[^:]:%24[^:]",key,value);
  // printf("key:%s\n",key );
  // printf("value:%s\n",value );
  // string v_str("hello world");
  // std::cout << "v_str:"<<v_str << '\n';
  // std::cout << "size:"<<v_str.size() << '\n';
  // unsigned char *pdata=new unsigned char[v_str.size()];
  //
  // memcpy(pdata,v_str.c_str(),v_str.size());
  //
  // std::cout << "0:"<<hex<<(int)pdata[0] << '\n';
  // std::cout << "1:"<<hex<<(int)pdata[1] << '\n';
  // std::cout << "2:"<<hex<<(int)pdata[2] << '\n';
  // std::cout << "3:"<<hex<<(int)pdata[3] << '\n';
  // delete []pdata;
  //
  // unsigned short *pshort=new unsigned short[5];
  // memcpy(pshort,v_str.c_str(),11);
  // std::cout << "0:"<<hex<<pshort[0] << '\n';
  // std::cout << "1:"<<pshort[1] << '\n';
  // std::cout << "2:"<<pshort[2] << '\n';
  // std::cout << "3:"<<pshort[3] << '\n';
  // std::cout << "0:"<<dec<<pshort[0] << '\n';
  //
  // delete []pshort;

}
