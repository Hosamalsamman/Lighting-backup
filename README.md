# Lighting-backup
When the light starts dimming due to (sunset or power cut ...) the system is provided with (LDR sensor) to measure the amount of light needed to
back up the lost light in the place and send it to a microcontroller via (ADC) driver , the microcontroller saves this value and starts to send 
it continuously to another microcontroller via (USART) communication protocol. 
This microcontroller's role is to receive the sent value from the first microcontroller and turn on the backup light gradually depending on the 
sent value by using (PWM) driver.
