@\textbf{\textcolor{DarkBloodRed}{FIL}}@ fil;
f_open(&fil, games[chosen], FA_READ);
@\textbf{\textcolor{DarkBloodRed}{FSIZE\_t}}@ size = f_size(&fil);
@\textbf{\textcolor{DarkBloodRed}{unsigned char}}@ *data = malloc(size);
@\textbf{\textcolor{DarkBloodRed}{UINT}}@ bytes_read;
f_read(&fil, data, size, &bytes_read);
f_close(&fil);
memcpy(&vm.RAM[PC_OFFSET], data, size);
free(data);
