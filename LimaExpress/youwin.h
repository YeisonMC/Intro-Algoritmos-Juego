#pragma once
#include "global.h"

int const FILASYOUWIN = 40;
int const COLUMNASYOUWIN = 159;

int YOUWIN[FILASYOUWIN][COLUMNASYOUWIN] = {
{3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 0, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 0, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 0, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 3, 3, 3, 0, 0, 0, 0, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 3, 3, 0, 0, 0, 0, 0, 3, 3, 0, 0, 0, 0, 0, 3, 3, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 0, 6, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 6, 0, 3, 3, 3, 0, 6, 6, 0, 3, 3, 0, 0, 6, 6, 6, 6, 6, 0, 0, 3, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 0, 0, 0, 3, 0, 6, 6, 6, 0, 0, 6, 6, 6, 0, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 0, 6, 6, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 6, 0, 0, 3, 3, 0, 6, 6, 0, 3, 0, 0, 6, 6, 6, 6, 6, 6, 6, 6, 3, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 0, 6, 0, 3, 0, 6, 6, 6, 0, 0, 6, 6, 6, 0, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 0, 0, 14, 14, 14, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 6, 6, 0, 3, 0, 6, 6, 6, 0, 3, 0, 6, 6, 6, 6, 6, 6, 6, 6, 6, 0, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 0, 6, 0, 3, 0, 6, 6, 6, 0, 0, 6, 6, 6, 0, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 0, 0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 0, 0, 0, 14, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 6, 6, 0, 0, 0, 6, 6, 0, 0, 0, 0, 6, 6, 6, 0, 0, 0, 0, 6, 6, 0, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 0, 6, 0, 3, 0, 6, 6, 6, 0, 0, 6, 6, 6, 0, 0, 6, 6, 6, 0, 0, 3, 0, 6, 6, 6, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 0, 15, 4, 4, 4, 15, 15, 15, 15, 15, 15, 15, 15, 15, 4, 4, 4, 15, 15, 15, 15, 0, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 6, 6, 0, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 0, 3, 3, 0, 6, 6, 0, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 0, 6, 0, 3, 0, 6, 6, 6, 0, 0, 6, 6, 6, 0, 0, 6, 6, 6, 6, 0, 0, 0, 6, 6, 6, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 0, 15, 4, 15, 2, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2, 15, 4, 15, 15, 15, 15, 0, 14, 14, 14, 14, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 6, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 3, 3, 0, 6, 6, 0, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 3, 0, 6, 6, 6, 0, 3, 0, 6, 0, 3, 0, 6, 6, 6, 0, 0, 6, 6, 6, 0, 0, 6, 6, 6, 6, 6, 0, 0, 6, 6, 6, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 0, 15, 15, 2, 2, 2, 15, 15, 15, 15, 15, 15, 15, 15, 15, 2, 2, 2, 15, 15, 15, 15, 15, 15, 0, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 15, 15, 15, 0, 0, 3, 3, 0, 15, 15, 6, 0, 3, 3, 3, 0, 15, 15, 0, 0, 15, 15, 15, 0, 3, 3, 0, 15, 15, 15, 0, 3, 3, 0, 15, 15, 15, 0, 0, 0, 15, 0, 0, 0, 15, 15, 15, 0, 0, 15, 15, 15, 0, 0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 0, 15, 2, 2, 2, 2, 2, 15, 15, 15, 15, 15, 15, 15, 2, 2, 2, 2, 2, 15, 15, 15, 15, 15, 0, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 12, 12, 12, 0, 3, 3, 3, 0, 12, 12, 12, 0, 3, 3, 3, 0, 12, 12, 0, 0, 12, 12, 12, 0, 3, 3, 0, 12, 12, 12, 0, 3, 3, 0, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 12, 12, 12, 0, 0, 12, 12, 12, 0, 12, 12, 12, 12, 12, 12, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 0, 15, 15, 0, 0, 0, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 0, 0, 0, 15, 15, 15, 15, 15, 0, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 12, 12, 12, 0, 3, 3, 3, 0, 12, 12, 12, 0, 0, 3, 3, 0, 12, 12, 0, 0, 12, 12, 12, 0, 3, 3, 0, 12, 12, 12, 0, 3, 3, 0, 12, 12, 12, 12, 0, 0, 0, 0, 0, 12, 12, 12, 12, 0, 0, 12, 12, 12, 0, 0, 12, 12, 12, 0, 0, 12, 12, 12, 12, 12, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 0, 15, 15, 0, 0, 0, 0, 15, 15, 15, 15, 15, 15, 15, 15, 0, 0, 0, 0, 15, 15, 15, 15, 15, 0, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 12, 12, 12, 0, 3, 3, 3, 0, 12, 12, 12, 12, 0, 3, 0, 0, 12, 12, 0, 0, 12, 12, 12, 0, 3, 3, 0, 12, 12, 12, 0, 3, 3, 0, 12, 12, 12, 12, 0, 3, 3, 3, 0, 12, 12, 12, 12, 0, 0, 12, 12, 12, 0, 0, 12, 12, 12, 0, 0, 12, 12, 12, 12, 12, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 0, 2, 2, 2, 2, 2, 15, 15, 15, 15, 15, 15, 15, 2, 2, 2, 2, 2, 15, 15, 15, 0, 0, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 12, 12, 12, 0, 3, 3, 3, 0, 0, 12, 12, 12, 0, 0, 0, 12, 12, 12, 0, 0, 12, 12, 12, 0, 0, 0, 0, 12, 12, 12, 0, 3, 3, 0, 12, 12, 12, 12, 0, 3, 3, 3, 0, 12, 12, 12, 12, 0, 0, 12, 12, 12, 0, 0, 12, 12, 12, 0, 0, 0, 12, 12, 12, 12, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 0, 2, 2, 2, 15, 15, 12, 12, 12, 12, 15, 15, 15, 2, 2, 2, 15, 15, 0, 0, 14, 14, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 12, 12, 12, 0, 3, 3, 3, 3, 0, 12, 12, 12, 12, 12, 12, 12, 12, 0, 3, 0, 0, 12, 12, 12, 12, 12, 12, 12, 12, 0, 0, 3, 3, 0, 12, 12, 12, 12, 0, 3, 3, 3, 0, 12, 12, 12, 12, 0, 0, 12, 12, 12, 0, 0, 12, 12, 12, 0, 3, 0, 12, 12, 12, 12, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 0, 2, 15, 15, 12, 12, 12, 12, 12, 12, 15, 15, 15, 2, 15, 0, 0, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 12, 12, 12, 0, 3, 3, 3, 3, 0, 0, 12, 12, 12, 12, 12, 12, 0, 0, 3, 3, 0, 0, 12, 12, 12, 12, 12, 12, 0, 0, 3, 3, 3, 0, 12, 12, 12, 12, 0, 3, 3, 3, 0, 12, 12, 12, 12, 0, 0, 12, 12, 12, 0, 0, 12, 12, 12, 0, 3, 0, 12, 12, 12, 12, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 0, 0, 15, 15, 12, 12, 12, 12, 12, 12, 12, 15, 0, 0, 0, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 6, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 3, 3, 3, 3, 3, 3, 3, 3, 3, 14, 14, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 2, 2, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 6, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 15, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 14, 14, 14, 3, 14, 14, 3, 3, 2, 3, 3, 2, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 6, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 14, 3, 3, 3, 3, 3, 3, 3, 3, 3, 7, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 0, 15, 6, 6, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 6, 14, 14, 14, 14, 14, 15, 15, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 3, 3, 3, 3, 3, 15, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 0, 0, 15, 15, 6, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 6, 6, 6, 14, 14, 14, 14, 14, 15, 15, 15, 15, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 3, 14, 3, 3, 3, 3, 3, 3, 2, 3, 7, 3, 3, 3, 3},
{3, 3, 3, 3, 0, 0, 15, 15, 15, 0, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 6, 6, 14, 14, 14, 14, 6, 6, 14, 15, 15, 15, 15, 15, 15, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 2, 2, 3, 3, 3, 12, 3, 2, 2, 3, 3, 7, 3, 3, 3, 3},
{3, 3, 3, 0, 15, 15, 15, 0, 0, 0, 6, 6, 14, 14, 14, 14, 14, 14, 14, 14, 14, 6, 6, 14, 14, 14, 14, 6, 6, 6, 14, 14, 0, 15, 15, 15, 15, 15, 15, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 13, 2, 3, 3, 3, 3, 3, 12, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 0, 0, 0, 0, 3, 3, 0, 6, 6, 14, 14, 0, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 14, 6, 6, 6, 14, 0, 0, 3, 0, 0, 15, 15, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 13, 13, 13, 13, 12, 3, 3, 12, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 3, 3, 3, 3, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 13, 13, 13, 12, 3, 3, 3, 3, 3, 3, 3, 7, 3, 15, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 0, 0, 0, 0, 0, 14, 14, 14, 14, 14, 14, 14, 14, 14, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 4, 4, 4, 13, 13, 12, 13, 13, 3, 3, 7, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 6, 0, 0, 0, 0, 0, 6, 14, 14, 14, 14, 14, 0, 15, 15, 15, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 4, 4, 4, 13, 13, 13, 13, 13, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 15, 15, 0, 0, 6, 6, 6, 6, 6, 6, 6, 6, 15, 15, 15, 15, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 5, 5, 5, 4, 4, 4, 13, 13, 13, 3, 3, 15, 15, 3, 0, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 15, 15, 15, 15, 15, 0, 0, 0, 0, 0, 0, 0, 15, 15, 15, 15, 15, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 4, 5, 5, 5, 4, 4, 4, 4, 3, 3, 3, 3, 15, 3, 3, 3, 0, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 15, 15, 15, 15, 15, 15, 0, 3, 3, 3, 3, 3, 0, 15, 15, 15, 15, 15, 15, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 5, 5, 4, 4, 4, 4, 5, 5, 5, 4, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 15, 15, 15, 15, 15, 0, 0, 3, 3, 3, 3, 3, 0, 15, 15, 15, 15, 15, 15, 15, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 5, 4, 4, 4, 4, 5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 4, 4, 5, 5, 5, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3, 3},
{0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
};

void mostrarYouWind() {
    for (int f = 0; f < FILASYOUWIN; f++) {
        for (int c = 0; c < COLUMNASYOUWIN; c++) {

            if (YOUWIN[f][c] == 0) setColor(0, 0); // Negro  #0C0C0C
            if (YOUWIN[f][c] == 1) setColor(1, 0); // Azul   #0037DA
            if (YOUWIN[f][c] == 2) setColor(2, 0); // Verde  #13A10E
            if (YOUWIN[f][c] == 3) setColor(3, 0); // Aguamarina (Cyan)  #3A96DD
            if (YOUWIN[f][c] == 4) setColor(4, 0); // Rojo   #C51019
            if (YOUWIN[f][c] == 5) setColor(5, 0); // P�rpura (Morado)   #881798
            if (YOUWIN[f][c] == 6) setColor(6, 0); // Amarillo (Marr�n)  #C19C00
            if (YOUWIN[f][c] == 7) setColor(7, 0); // Blanco / Gris claro    #CCCCCC
            if (YOUWIN[f][c] == 8) setColor(8, 0); // Gris oscuro    #767676
            if (YOUWIN[f][c] == 9) setColor(9, 0); // Azul claro     #3B78FF
            if (YOUWIN[f][c] == 10) setColor(10, 0); // Verde claro  #16C60C
            if (YOUWIN[f][c] == 11) setColor(11, 0); // Aguamarina claro #61D6D6
            if (YOUWIN[f][c] == 12) setColor(12, 0); // Rojo claro       #E74856
            if (YOUWIN[f][c] == 13) setColor(13, 0); // P�rpura claro    #B4009E
            if (YOUWIN[f][c] == 14) setColor(14, 0); // Amarillo claro   #F9F1A5
            if (YOUWIN[f][c] == 15) setColor(15, 0); // Blanco brillante #F2F2F2

            cout << (char)219;
        }
        cout << endl;
    }
}