# Arduino Utils

## functions

### `_assert()`

this function will error and halt the program if the first value is false.

#### Syntax
```c++
  _assert(ssd1306.begin(), "failed to initialize!");
```

#### Parameters
* `value`: the false that will error the script if its false.
* `error`: the message that will print if the value was false.

#### Returns
None

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
