#include "functions.h"

#include <iostream>

void FadeOutBGM(int channel, int ms, bool unknown0) {}
void PlayBGM(int channel, const char* name, int unknown0, int unknown1) {}
void SetDrawingPointOfMessage(int u0, int u1) {}
void SetStyleOfMessageSwinging(int u) {}
void OutputLine(void* jpptr, const char* jp, void* enptr, const char* en, LineStyle style) {
	std::cout << en;
}
void OutputLineAll(void* ptr, const char* text, LineStyle style) {
	OutputLine(ptr, text, ptr, text, style);
}
void ClearMessage() {
	std::cout << std::endl;
}
void DisableWindow() {}
void DrawScene(const char* u0, int u1) {}
void DrawSceneWithMask(const char* bg, const char* u0, int u1, int u2, int u3) {}
void SetValidityOfInput(bool validity) {}
void Wait(int ms) {}
void DrawBustshotWithFiltering(int u0, const char* u1, const char* u2, int u4, int u5, int u6, bool u7, int u8, int u9, int u10, int u11, int u12, int u13, int u14, int u15) {}
void DrawBustshot(int u0, const char* u1, int u2, int u3, int u4, bool u5, int u6, int u7, int u8, int u9, int u10, int u11, int u12, int u13, int u14, bool u15) {}
void FadeBustshotWithFiltering(int u0, const char* u1, int u2, bool u3, int u4, int u5, int u6, bool u7) {}
void PlaySE(int channel, const char* name, int unknown0, int unknown1) {}
void SetSpeedOfMessage(bool u0, int u1) {}
void FadeBG(int u0, bool u1) {}
void DrawBG(const char* u0, int u1, bool u2) {}
void FadeFilm(int u0, bool u1) {}
void ShakeScreen(int u0, int u1, int u2, int u3, int u4) {}
void FadeBustshot(int u0, bool u1, int u2, int u3, int u4, int u5, int u6, bool u7) {}
void FadeAllBustshots(int u0, bool u1) {}
