# Snabat

Grab a random line from a given file(s), and it outputs it to stdout. Cuts down on the need for scripts.

## Compiling

This uses all the standard libaries and is not an graphical app, should be easy to compile on an standards compliant unix system, give me a howler if something breaks.

## Usage

`Snabat File.1 File.2`

Options-

* [none] (Default)

	Output random line.

* -F (number)
	
	Print from first line,

* -L (Number)
	
	Print from last line,

* -M (First and last numbers)
	
	Print from speficed lines.

* -I <"items" "t0" "ign0_3">
	
	Ignore the inputted text objects, Snabat always ignores newlines.

* -Y
	
	Outputs list randomly with exectly one unique line.

## Bugs

