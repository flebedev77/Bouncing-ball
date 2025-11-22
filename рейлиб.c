#include <raylib.h>
#include <stdlib.h>
#include <stdint.h>

void DrawCircleDiameter(int centerX, int centerY, int diameter, Color color) {
  DrawCircle(centerX, centerY, ((float)diameter) / 2.0f, color);
}

void DrawRingDiameter(int centerX, int centerY, int innerDiameter, int outerDiameter, Color color) {
  DrawRing((Vector2){.x = centerX, .y = centerY}, ((float)innerDiameter) / 2.0f, ((float)outerDiameter) / 2.0f, 0.0f, 360.0f, 100, color);
}

uint64_t ЗагрузитьШрифт(const char* дорога) {
  Font* f = (Font*)malloc(sizeof(Font));
  *f = LoadFont(дорога);
  return (uint64_t)f;
}

void УдалитьШрифт(uint64_t шрифт) {
  UnloadFont(*(Font*)шрифт);
}

void НарисоватьТекст(uint64_t шрифт, const char* текст, int икс, int игрек, Color цвет) {
  DrawTextEx(*((Font*)шрифт), текст, (Vector2){.x = икс, .y = игрек}, 45.f, 2.f, цвет);
}
