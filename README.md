# pantalla-Oled-con-ESP32
Explicación del Cambio

    Dirección I2C: La dirección I2C se ha establecido directamente como 0x3C en la llamada a display.begin().

Conexiones I2C

Recuerda que las conexiones I2C deben coincidir con las que estableciste:

    SCL a GPIO 22
    SDA a GPIO 21

Verificación

Asegúrate de que tu pantalla OLED tiene la dirección I2C correcta (0x3C o 0x3D). Si no estás seguro, puedes usar un escáner I2C para verificar la dirección de tu dispositivo. Aquí tienes un ejemplo de escáner I2C:
