#ifndef UTILS_H
#define UTILS_H

 // asrt: if value is false it will print error and halt
void asrt(bool value, const char* error) {
  if (!b) {
    Serial.println(str);
    for(;;) {}
  }
}

// returns uptime as hh:mm:ss
char* uptime() {
  uint8_t seconds = (millis() / 1000) % 60;
  uint8_t minutes = (millis() / 1000 / 60) % 60;
  uint16_t hours =  (millis() / 1000 / 60 / 60);

  static char result[10];
  sprintf(result,"%d:%2.2d:%2.2d", (uint16_t) hours, (uint8_t) minutes, (uint8_t) seconds);
  return result;
}

// will print all params to the serial
template<typename Arg>
void print(Arg arg) {
  Serial.println(arg);
}

template<typename Arg, typename... Args>
void print(Arg arg, Args... args) {
  Serial.print(arg);
  Serial.print(" ");

  print(args...);
}

float rad2deg(float rad) {
  return rad * (180 / PI);
}

float deg2rad(float deg) {
  return deg * (PI / 180);
}


#endif