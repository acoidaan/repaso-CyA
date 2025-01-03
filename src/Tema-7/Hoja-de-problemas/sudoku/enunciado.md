![sudoku sin resolver](../../imagenes/sudoku1.png)
![sudoku resuelto](../../imagenes/sudoku2.png)

La clase Sudoku, que almacena la cuadrícula en un objeto `m_` de la clase `matrix_t<short>`, contiene los siguientes datosy métodos ya desarrollados:

- `const short N = 9`: define la constante N = 9.
- `bool check_row(const short row, const short num)`: Devuelve `false` si la fila `row` en `m_` contiene el valor `num`, y `true` en caso contrario.
- `bool check_col(const short col, const short num)`: Devuelve `false` si la columna `col` en `m_` contiene el valor `num`, y `true` en caso contrario.
- `bool check_box(const short row, const short col, const short num)`: Devuelve `false` si la subcadrícula donde está la fila `row` y la columna `col` en `m_` contiene el valor `num`, y `true` en caso contrario.
- `bool check_all(const short row, const short col, const short num)`: Devuelve `true` si, para un valor concreto `num`, las tres comprobaciones anteriores se cumplen para una fila `row`, una columna `col` y una subcuadrícula concretas.
- `bool find_empty_cell(short& row, short& col)`: Devuelve `true` si en `m_` existe una fila `row`y una columna `col` vacía (con un 0), o `false` en caso contrario, devolviendo los índices en los correspondientes parámetros.
- **Las filas y columnas del objeto `m_` se indexan desde 1 hasta N.**

Se pide, utilizando la estrategia **Greedy (voraz)** y de forma recursiva (en pseudo-C++), desarrollar el método que resuelva el Sudoku, y que tenga la siguiente cabecera:

```cpp
bool Sudoku::solve(void)
```
