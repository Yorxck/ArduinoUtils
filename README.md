# [Arduino Utils](utils.h)
## library
To use this library:
```cpp
  #include "utils.h"
```

<br/><br/>

## functions

### `asrt()`

this function will error and halt the program if the first value is false, basic assert function.

#### Syntax
```c++
  asrt(ssd1306.begin(), "failed to initialize!");
```

#### Parameters
* `value`: the false that will error the script if its false.
* `error`: the message that will print if the value was false.

#### Returns
None

## 
<br/>

### `uptime()`

this function will return the uptime of the arduino in a format as `h:mm:ss`.

#### Syntax
```c++
  char* upt = uptime();

  Serial.println(upt); // 0:01:23
```

#### Parameters
None

#### Returns
None

## 
<br/>

### `print()`

this function will print all params to the serial.

#### Syntax
```c++
  print("Uptime:", uptime());
  print("Uptime:", millis(), "ms");
```

#### Parameters
* `any`: will print any type

#### Returns
None

## 
<br/>

### `rad2deg()`

this function will calculate radians to degrees.

#### Syntax
```c++
  float deg = rad2deg(1);
```

#### Parameters
* `rad`: the radians you want to calculate to degrees.

#### Returns
* `deg`: the result of the calculation.

#### See also
* [deg2rad](#deg2rad)

## 
<br/>

### `deg2rad()`

this function will calculate degrees to radians.

#### Syntax
```c++
  float rad = deg2rad(90);
```

#### Parameters
* `deg`: the degrees you want to calculate to radians.

#### Returns
* `rad`: the result of the calculation.

#### See also
* [rad2deg](#rad2deg)
