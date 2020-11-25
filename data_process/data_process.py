#!/usr/bin/python
# -*- coding: UTF-8 -*-

in_file = open("./gdb_output.txt", "r")
out_file = open("./gdb_output_p.txt", "w")
flag = -1
count = 0
count_109 = 0
count_1 = 0
count_2 = 0
order = ["esp", "error_code", "fs", "es", "ds", "ebp", "esi", "edi", "edx", "ecx", "ebx", "eax"]
tty_order_1 = ["channel", "buf", "nr"]
tty_order_2 = ["b", "c", "tty->write_q"]
while True:
    line = in_file.readline()
    if len(line) == 0:
        break
    if line == "\n":
        count_109 = 0
        count_1 = 0
        count_2 = 0
        continue
    if "asm.s" in line:
        count_109 = 0
        count_1 = 0
        count_2 = 0
        flag = 0
        code = in_file.readline()
        count += 1
        print(file=out_file)
        print(count, file=out_file)
        print("asm.s:", code[0:len(code)-1], file=out_file)
        continue
    if "traps.c:109" in line:
        flag = 1
        code = in_file.readline()
        count_109 = 0
        count_1 = 0
        count_2 = 0
        count += 1
        print(file=out_file)
        print(count, file=out_file)
        print("traps.c:", code[0:len(code)-1], file=out_file)
        continue
    if "traps.c:110" in line:
        flag = 2
        code = in_file.readline()
        count_109 = 0
        count_1 = 0
        count_2 = 0
        count += 1
        print(file=out_file)
        print(count, file=out_file)
        print("traps.c:", code[0:len(code)-1], file=out_file)
        continue
    if "printk.c:26" in line or "printk.c:29" in line:
        flag = 3
        code = in_file.readline()
        count_109 = 0
        count_1 = 0
        count_2 = 0
        count += 1
        print(file=out_file)
        print(count, file=out_file)
        print("printk.c:", code[0:len(code)-1], file=out_file)
        continue
    if "printk.c:40" in line:
        flag = 4
        code = in_file.readline()
        count_109 = 0
        count_1 = 0
        count_2 = 0
        count += 1
        print(file=out_file)
        print(count, file=out_file)
        print("printk.c:", code[0:len(code)-1], file=out_file)
        continue
    if "tty_io.c:297" in line:
        flag = 5
        code = in_file.readline()
        count_109 = 0
        count_1 = 0
        count_2 = 0
        count += 1
        print(file=out_file)
        print(count, file=out_file)
        print("tty_io.c:", code[0:len(code)-1], file=out_file)
        continue
    if "tty_io.c:305" in line:
        flag = 6
        code = in_file.readline()
        count_109 = 0
        count_1 = 0
        count_2 = 0
        count += 1
        print(file=out_file)
        print(count, file=out_file)
        print("tty_io.c:", code[0:len(code)-1], file=out_file)
        continue
    if flag == 0:
        name = ""
        value = ""
        begin = 0
        for i in range(0, len(line)):
            if line[i] == " " and name == "":
                name = line[0: i]
            if line[i] != " " and name != "" and begin == 0:
                begin = i
            if line[i] == "\t" and name != "":
                value = line[begin: i]
                begin = 0
        print(name + " " + value, file=out_file)

    if flag == 1:
        t = line.split("=")
        str = t[1][1:len(t[1])-1]
        print(order[count_109], " ", str, file=out_file)
        count_109 += 1

    if flag == 2:
        t = line.split("=")
        str = t[1][1:len(t[1])-1]
        print("tr ", str, file=out_file)

    if flag == 3:
        t = line.split("=")
        str = t[1][1:len(t[1]) - 1]
        print("buf ", str, file=out_file)

    if flag == 4:
        t = line.split("=")
        str = t[1][1:len(t[1]) - 1]
        print("i ", str, file=out_file)

    if flag == 5:
        t = line.split("=")
        str = t[1][1:len(t[1])-1]
        print(tty_order_1[count_1], " ", str, file=out_file)
        count_1 += 1

    if flag == 6:
        if count_2 < 2:
            t = line.split("=")
            str = t[1][1:len(t[1]) - 1]
            print(tty_order_2[count_2], " ", str, file=out_file)
        else:
            print("tty->write_q", file=out_file)
            sub_string_s = line[line.index("{") + 1: len(line)]
            sub_string_s = sub_string_s.split(", ")
            for s in sub_string_s:
                s = s.replace("\n", "")
                if s != "":
                    print("\t" + s, file=out_file)
            line = in_file.readline()
            print("\t" + line[line.index("buf"): len(line)-2], file=out_file)
        count_2 += 1

in_file.close()
out_file.close()
