const int sensor_pin = A0;
const int write_pin = A2;

int sensor_value;

void setup() {
        pinMode(sensor_pin, INPUT);
        pinMode(write_pin, OUTPUT);
        Serial.begin(9600);
}

void loop() {
        sensor_value = analogRead(sensor_pin);
        sensor_value = map(sensor_value,0,1023,0,255);
        analogWrite(write_pin, sensor_value);
        Serial.println(sensor_value);
        delay(10);
}

