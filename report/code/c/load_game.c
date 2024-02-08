@\textbf{\textcolor{DarkBloodRed}{FRESULT}}@ fres;                    // File result
@\textbf{\textcolor{DarkBloodRed}{FIL}}@ fil;                         // File handler
@\textbf{\textcolor{DarkBloodRed}{UINT}}@ bytesRead;                  // Bytes read from file
@\textbf{\textcolor{DarkBloodRed}{unsigned char}}@ *file_data = NULL; // Pointer to file data

fres = f_open(&fil, games[game_selected], FA_READ);
data = malloc(f_size(&fil));
f_read(&fil, file_data, (@\textbf{\textcolor{DarkBloodRed}{UINT}}@)f_size(&fil), &bytesRead);
f_close(&fil);
memcpy(&vm.RAM[PC_OFFSET], data, f_size(&fil));
free(data);
