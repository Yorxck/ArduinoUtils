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
