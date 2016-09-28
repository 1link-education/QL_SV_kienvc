// bt1_4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "UI.h"


int main(int argc, char argv[])
{
	SVView view;
	SVController ds = SVController(view);
	UI ui;
	ui.xuly(ds);

	return 0;
}

