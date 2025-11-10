#include <raylib.h>

void DrawCircleDiameter(int centerX, int centerY, int diameter, Color color) {
  DrawCircle(centerX, centerY, ((float)diameter) / 2.0f, color);
}

void DrawRingDiameter(int centerX, int centerY, int innerDiameter, int outerDiameter, Color color) {
  DrawRing((Vector2){.x = centerX, .y = centerY}, ((float)innerDiameter) / 2.0f, ((float)outerDiameter) / 2.0f, 0.0f, 360.0f, 100, color);
}
