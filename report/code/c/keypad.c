HAL_GPIO_WritePin(C1.port, C1.pin, 1);
HAL_GPIO_WritePin(C2.port, C2.pin, 0);
HAL_GPIO_WritePin(C3.port, C3.pin, 0);
HAL_GPIO_WritePin(C4.port, C4.pin, 0);

if      (GPIO_Pin == R1.pin && HAL_GPIO_ReadPin(R1.port, R1.pin)) { c8_press_key(vm, KEY_00); }
else if (GPIO_Pin == R2.pin && HAL_GPIO_ReadPin(R2.port, R2.pin)) { c8_press_key(vm, KEY_01); }
else if (GPIO_Pin == R3.pin && HAL_GPIO_ReadPin(R3.port, R3.pin)) { c8_press_key(vm, KEY_02); }
else if (GPIO_Pin == R4.pin && HAL_GPIO_ReadPin(R4.port, R4.pin)) { c8_press_key(vm, KEY_03); }
