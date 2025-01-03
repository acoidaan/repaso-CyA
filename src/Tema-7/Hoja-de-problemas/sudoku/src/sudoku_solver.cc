bool Sudoku::solve(void) {
  short row, col;
  
  // Si no hay celdas libres, sudoku resuelto
  if (!find_empty_cell(row, col)) {
    return true;
  }

  for (short num = 1; num <= N; num++) {
    if (check_all(row, col, num)) {
      m_(row, col) = num;

      // Si solve devuelve true, encontró solución y se propaga hacia atrás.
      if (solve()) return true;
    }

    // No se puede rellenar celdas
    m_(row, col) = 0; // vacío
    return false;
  }
}

