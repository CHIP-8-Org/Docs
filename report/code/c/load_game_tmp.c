@\textbf{\textcolor{DarkBloodRed}{FRESULT}}@ fres;                    // File result
@\textbf{\textcolor{DarkBloodRed}{FIL}}@ fil;                         // File handler
@\textbf{\textcolor{DarkBloodRed}{UINT}}@ bytesRead;                  // Bytes read from file
@\textbf{\textcolor{DarkBloodRed}{unsigned char}}@ *file_data = NULL; // Pointer to file data


fres = @\textcolor{BlueJeanColor}{f\_open}@(&fil, games[game_selected], FA_READ);
data = @\textcolor{BlueJeanColor}{malloc}@(@\textcolor{BlueJeanColor}{f\_size}@(&fil));
@\textcolor{BlueJeanColor}{f\_read}@(&fil, file_data, (@\textbf{\textcolor{DarkBloodRed}{UINT}}@)@\textcolor{BlueJeanColor}{f\_size}@(&fil), &bytesRead);
@\textcolor{BlueJeanColor}{f\_close}@(&fil);

@\textcolor{BlueJeanColor}{memcpy}@(&vm.RAM[PC_OFFSET], data, @\textcolor{BlueJeanColor}{f\_size}@(&fil));

@\textcolor{BlueJeanColor}{free}@(data);
