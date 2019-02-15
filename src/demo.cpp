#include "utils.h"
#include "option_list.h"
#include <string.h>
void func1(int argc, char* argv[])
{
	int name1 = find_arg(argc, argv, "-bool");//нч╡н
	int name2 = find_int_arg(argc, argv, "-int", -1);//int
	char *name3 = find_char_arg(argc, argv, "-str", "hahah");//char
	float name4 = find_float_arg(argc, argv, "-float", 0.5f);//float
	printf("%s:%d,%s:%d,%s:%s,%s:%f\n", "name1", name1, "name2", name2, "name3", name3, "name4", name4);

}
void func2(int argc, char* argv[])
{
	char* option_file = find_char_arg(argc, argv, "-option", "test.txt");
	list *options = read_data_cfg(option_file);
	int name1 = option_find_int(options, "name1", 1);
	char* name2 = option_find_str(options, "name2", "ahahha");
	float name3 = option_find_float(options, "name3", 3.0f);
	printf("%s:%d,%s:%s,%s:%f\n", "name1", name1, "name2", name2, "name3", name3);
	
}
int main(int argc,char* argv[])
{
	if (argc < 2) {
		fprintf(stderr, "usage: %s <function>\n", argv[0]);
		return 0;
	}
	if (0 == strcmp(argv[1], "f1")) {
		func1(argc, argv);
	}
	else if (0 == strcmp(argv[1], "f2")) {
		func2(argc, argv);
	}
	return 0;
}