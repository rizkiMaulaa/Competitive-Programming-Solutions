#include <stdio.h>
#include <string.h>


int main(){
    char s[3];

    scanf("%c", &s);

    if(strcmp(s,"PAS")==1){
        printf("var data:array[1..10000] of longint;\n");
        printf("    n,i,j,temp:longint;\n");
        printf("begin\n");
        printf("  readln(n);\n");
        printf("  for i:=1 to n do readln(data[i]);\n");
        printf("  for i:=1 to n-1 do\n");
        printf("    for j:=i+1 to n do\n");
        printf("      if (data[i]>data[j]) then\n");
        printf("      begin\n");
        printf("       temp:=data[i];\n");
        printf("        data[i]:=data[j];\n");
        printf("        data[j]:=temp;\n");
        printf("      end;\n");
        printf("  for i:=1 to n do writeln(data[i]);\n");
        printf("end.\n");
    }else {
        printf("int data[10001];\n");
        printf("int n,i,j,temp;\n");
        printf("int main(){\n");
        printf("  scanf(""%d"",&n);\n");
        printf("  for (i=1;i<=n;i++) scanf(""%d"",data[i]);\n");
        printf("  for (i=1;i<=n-1;i++)\n");
        printf("    for (j=i+1;j<=n;j++)\n");
        printf("      if (data[i]>data[j]){\n");
        printf("        temp=data[i];\n");
        printf("        data[i]=data[j];\n");
        printf("        data[j]=temp;\n");
        printf("      }\n");
        printf("  for (i=1;i<=n;i++) printf(""%d\n"",data[i]);\n");
        printf("  return 0;\n");
        printf("}\n");
    }
    return 0;
}