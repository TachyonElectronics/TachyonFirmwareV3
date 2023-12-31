/*
* Bitmaps.h
*
* Created: 14.4.2018 12:49:15
*  Author: Martin Hrehor
*/

#ifndef BITMAPS_H_
#define BITMAPS_H_
#include "Conf.h"

#define BITMAP_W(bmp) pgm_read_byte(&bmp[0])
#define BITMAP_H(bmp) pgm_read_byte(&bmp[1])
#define BITMAP_SIZE(bmp) BITMAP_W(bmp), BITMAP_H(bmp)

const PROGMEM uint8_t AmmoBars[][322]{
	{
		60, 12,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00, 0x0F, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xF0, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x07,
		0xFF, 0xFC, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x60, 0x1F, 0xFC,
		0xC0, 0x00, 0x00, 0x00, 0x06, 0x00, 0x0F, 0xEC, 0x00, 0x00,
		0x00, 0x00, 0x60, 0x00, 0x07, 0xC0, 0x00, 0x00, 0x00, 0x06,
		0x00, 0x00, 0x7C, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0xFE,
		0xC0, 0x00, 0x00, 0x00, 0x06, 0x01, 0xFF, 0xCC, 0x00, 0x00,
		0x00, 0x00, 0x7F, 0xFF, 0xC0, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0x00, 0x0F, 0xFF, 0xFF, 0xFF, 0xFF, 0xE0, 0x00, 0x00}
};

#define C_Ldigits_SIZE 182
const PROGMEM uint8_t C_Ldigits[][C_Ldigits_SIZE]{
	//0
	{
		24, 60,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},

	//1
	{
		24, 60,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00},

	//2
	{
		24, 60,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC,
		0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00,
		0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00,
		0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC,
		0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00,
		0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00,
		0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC,
		0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},

	//3
	{
		24, 60,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF,
		0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x03, 0xFF, 0xFF, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},

	//4
	{
		24, 60,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F},

	//5
	{
		24, 60,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00,
		0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC,
		0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00,
		0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00,
		0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC,
		0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00,
		0x00, 0xFC, 0x00, 0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},

	//6
	{
		24, 60,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
		0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00,
		0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC,
		0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00,
		0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00,
		0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC,
		0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00, 0x00, 0xFC, 0x00,
		0x00, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},

	//7
	{
		24, 60,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F},

	//8
	{
		24, 60,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF},

	//9
	{
		24, 60,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F,
		0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC,
		0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00, 0x3F, 0xFC, 0x00,
		0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
		0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F,
		0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00,
		0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00,
		0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F, 0x00, 0x00, 0x3F}};


const PROGMEM uint8_t C_Ldash[]{
	24, 60,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xFF,
	0xC0, 0x03, 0xFF, 0xC0, 0x03, 0xFF, 0xC0, 0x03, 0xFF, 0xC0,
	0x03, 0xFF, 0xC0, 0x03, 0xFF, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00};

	const PROGMEM uint8_t MainBackground[] = {
	128, 128,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x3F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFF, 0xFF,
	0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01,
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00,
	0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0,
	0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00,
	0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00,
	0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00,
	0x30, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00,
	0x00, 0x00, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x00, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01,
	0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x80, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x00,
	0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xC0, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x06,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x60, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00,
	0x00, 0x0C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x1C, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x38, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x38,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x1C, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0C, 0x00,
	0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x60, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x06, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x03, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80,
	0x01, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0x80, 0x03, 0x80, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0xC0, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xC0, 0x07, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xE0, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x60,
	0x0E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x0C, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x30, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18,
	0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x0E, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x70, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0,
	0x03, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x01, 0xC0, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x03, 0x80, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x70,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x0E, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00,
	0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x0E, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x70, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x03,
	0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x01, 0xC0, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00,
	0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E,
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00,
	0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00,
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0,
	0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x1C, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1C,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x0E, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0xE0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x80, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0xC0, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x01, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF,
	0xFF, 0xFF, 0x80, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x7F, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFE, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
	};

const PROGMEM uint8_t CompassIcons[][52] =
	{
		{
		20, 20,
		0x00, 0x60, 0x00, 0x0F, 0x00, 0x00, 0x90, 0x00, 0x19, 0x80,
		0x01, 0x08, 0x00, 0x30, 0xC0, 0x07, 0x9E, 0x00, 0x6F, 0x60,
		0x0C, 0x63, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30,
		0x06, 0x06, 0x00, 0x70, 0xE0, 0x03, 0xFC, 0x00, 0x0F, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		},

		{
		20, 20,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0xC0, 0x00, 0xE4,
		0x00, 0xF8, 0x40, 0x3F, 0x0C, 0x07, 0x10, 0x80, 0x61, 0x98,
		0x0C, 0x1F, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30,
		0x06, 0x06, 0x00, 0x70, 0xE0, 0x03, 0xFC, 0x00, 0x0F, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		},

		{
		20, 20,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0xF0, 0x00, 0x3F, 0xC0, 0x07, 0x0E, 0x00, 0x60, 0x78,
		0x0C, 0x0C, 0xE0, 0xC1, 0x83, 0x0C, 0x18, 0x30, 0xC0, 0xCE,
		0x06, 0x07, 0x80, 0x70, 0xE0, 0x03, 0xFC, 0x00, 0x0F, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		},

		{
		20, 20,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0xF0, 0x00, 0x3F, 0xC0, 0x07, 0x0E, 0x00, 0x60, 0x60,
		0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC1, 0xF0,
		0x06, 0x19, 0x80, 0x71, 0x08, 0x03, 0xF0, 0xC0, 0x0F, 0x84,
		0x00, 0x0E, 0x40, 0x00, 0x3C, 0x00, 0x00, 0x00, 0x00, 0x00
		},

		{
		20, 20,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0xF0, 0x00, 0x3F, 0xC0, 0x07, 0x0E, 0x00, 0x60, 0x60,
		0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC6, 0x30,
		0x06, 0xF6, 0x00, 0x79, 0xE0, 0x03, 0x0C, 0x00, 0x10, 0x80,
		0x01, 0x98, 0x00, 0x09, 0x00, 0x00, 0xF0, 0x00, 0x06, 0x00
		},

		{
		20, 20,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0xF0, 0x00, 0x3F, 0xC0, 0x07, 0x0E, 0x00, 0x60, 0x60,
		0x0C, 0x03, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xF8, 0x30,
		0x19, 0x86, 0x01, 0x08, 0xE0, 0x30, 0xFC, 0x02, 0x1F, 0x00,
		0x27, 0x00, 0x03, 0xC0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		},

		{
		20, 20,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
		0x00, 0xF0, 0x00, 0x3F, 0xC0, 0x07, 0x0E, 0x01, 0xE0, 0x60,
		0x73, 0x03, 0x0C, 0x18, 0x30, 0xC1, 0x83, 0x07, 0x30, 0x30,
		0x1E, 0x06, 0x00, 0x70, 0xE0, 0x03, 0xFC, 0x00, 0x0F, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		},

		{
		20, 20,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x3C, 0x00, 0x02, 0x70, 0x00,
		0x21, 0xF0, 0x03, 0x0F, 0xC0, 0x10, 0x8E, 0x01, 0x98, 0x60,
		0x0F, 0x83, 0x00, 0xC0, 0x30, 0x0C, 0x03, 0x00, 0xC0, 0x30,
		0x06, 0x06, 0x00, 0x70, 0xE0, 0x03, 0xFC, 0x00, 0x0F, 0x00,
		0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
		}
	};

const PROGMEM uint8_t IconBrightness[] =
	{
		0x0B, 0x0B, 0x04, 0x08, 0x88, 0x82, 0x07, 0x01, 0x91, 0xBA, 0xC7,
		0xC0, 0x70, 0x20, 0x88, 0x88, 0x10, 0x00};
const PROGMEM uint8_t IconBattery[] =
	{
		0x0C, 0x07, 0xFF, 0xE8, 0x03, 0xAA, 0x9A, 0xA9, 0xAA, 0x98, 0x03,
		0xFF, 0xE0};
const PROGMEM uint8_t IconClock[] =
	{
		0x07, 0x07, 0x7D, 0xAE, 0x4C, 0xD8, 0x38, 0xDF, 0x00};

const PROGMEM uint8_t IconCompass[] =
	{
		0x0D, 0x0D, 0x0F, 0x81, 0x83, 0x10, 0x44, 0x86, 0x28, 0x30, 0xC3,
		0x86, 0x14, 0x30, 0xE1, 0x86, 0x0A, 0x30, 0x91, 0x04, 0x60, 0xC0,
		0xF8, 0x00};
		
const PROGMEM uint8_t IconUP[] = {
	0x0D, 0x0D, 0x0F, 0x81, 0xFF, 0x1F, 0xFC, 0xFB, 0xEF, 0x8F, 0xF8,
	0x3F, 0x80, 0xFF, 0x1F, 0xFA, 0xFB, 0xC7, 0x9F, 0xFC, 0x7F, 0xC0,
	0xF8, 0x00};

const PROGMEM uint8_t IconPreset[] = {
	3, 5,
	0xF7, 0xC8
	};

const PROGMEM uint8_t IconSelectPreset[] = {
		10, 5,
		0x21, 0x18, 0x6E, 0x1D, 0x86, 0x21, 0x00
};
/*
const PROGMEM uint8_t Logo[] = {
0x02, 0x02, 0b10101010
};*/
#endif /* BITMAPS_H_ */
