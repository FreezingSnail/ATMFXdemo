#pragma once

/**** FX data header generated by fxdata-build.py tool version 1.15 ****/

using uint24_t = __uint24;

// Initialize FX hardware using  FX::begin(FX_DATA_PAGE); in the setup() function.

constexpr uint16_t FX_DATA_PAGE  = 0xfff9;
constexpr uint24_t FX_DATA_BYTES = 1640;

constexpr uint24_t explosion = 0x000000;
constexpr uint16_t explosionWidth  = 8;
constexpr uint16_t explosionHeight = 8;
constexpr uint8_t  explosionFrames = 6;

constexpr uint24_t titleShip = 0x000064;
constexpr uint16_t titleShipWidth  = 96;
constexpr uint16_t titleShipHeight = 64;

