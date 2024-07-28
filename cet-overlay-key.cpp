#include <sstream>
#include <iostream>
using namespace std;



string GetKeyName(int VKCode)
{
	switch(VKCode)
	{
		case 0x0: return "CLEAR";
		case 0x0D: return "ENTER";
		case 0x01: return "Left mouse button";
		case 0x1A: return "IME Off";
		case 0x1B: return "ESC";
		case 0x1C: return "IME convert";
		case 0x1D: return "IME nonconvert";
		case 0x1E: return "IME accept";
		case 0x1F: return "IME mode change request";
		case 0x02: return "Right mouse button";
		case 0x2A: return "PRINT";
		case 0x2B: return "EXECUTE";
		case 0x2C: return "PRINT SCREEN";
		case 0x2D: return "INS";
		case 0x2E: return "DEL";
		case 0x2F: return "HELP";
		case 0x03: return "Control-break processing";
		case 0x04: return "Middle mouse button";
		case 0x4A: return "J";
		case 0x4B: return "K";
		case 0x4C: return "L";
		case 0x4D: return "M";
		case 0x4E: return "N";
		case 0x4F: return "O";
		case 0x05: return "X1 mouse button";
		case 0x5A: return "Z";
		case 0x5B: return "Left Windows";
		case 0x5C: return "Right Windows";
		case 0x5D: return "Applications";
		case 0x5F: return "Computer Sleep";
		case 0x06: return "X2 mouse button";
		case 0x6A: return "Multiply";
		case 0x6B: return "Add";
		case 0x6C: return "Separator";
		case 0x6D: return "Subtract";
		case 0x6E: return "Decimal";
		case 0x6F: return "Divide";
		case 0x7A: return "F11";
		case 0x7B: return "F12";
		case 0x7C: return "F13";
		case 0x7D: return "F14";
		case 0x7E: return "F15";
		case 0x7F: return "F16";
		case 0x08: return "BACKSPACE";
		case 0x09: return "TAB";
		case 0x10: return "SHIFT";
		case 0x11: return "CTRL";
		case 0x12: return "ALT";
		case 0x13: return "PAUSE";
		case 0x14: return "CAPS LOCK";
		case 0x15: return "IME Hangul mode";
		case 0x16: return "IME On";
		case 0x17: return "IME Junja mode";
		case 0x18: return "IME final mode";
		case 0x19: return "IME Kanji mode";
		case 0x20: return "SPACEBAR";
		case 0x21: return "PAGE UP";
		case 0x22: return "PAGE DOWN";
		case 0x23: return "END";
		case 0x24: return "HOME";
		case 0x25: return "LEFT ARROW";
		case 0x26: return "UP ARROW";
		case 0x27: return "RIGHT ARROW";
		case 0x28: return "DOWN ARROW";
		case 0x29: return "SELECT";
		case 0x30: return "0";
		case 0x31: return "1";
		case 0x32: return "2";
		case 0x33: return "3";
		case 0x34: return "4";
		case 0x35: return "5";
		case 0x36: return "6";
		case 0x37: return "7";
		case 0x38: return "8";
		case 0x39: return "9";
		case 0x41: return "A";
		case 0x42: return "B";
		case 0x43: return "C";
		case 0x44: return "D";
		case 0x45: return "E";
		case 0x46: return "F";
		case 0x47: return "G";
		case 0x48: return "H";
		case 0x49: return "I";
		case 0x50: return "P";
		case 0x51: return "Q";
		case 0x52: return "R";
		case 0x53: return "S";
		case 0x54: return "T";
		case 0x55: return "U";
		case 0x56: return "V";
		case 0x57: return "W";
		case 0x58: return "X";
		case 0x59: return "Y";
		case 0x60: return "Numeric keypad 0";
		case 0x61: return "Numeric keypad 1";
		case 0x62: return "Numeric keypad 2";
		case 0x63: return "Numeric keypad 3";
		case 0x64: return "Numeric keypad 4";
		case 0x65: return "Numeric keypad 5";
		case 0x66: return "Numeric keypad 6";
		case 0x67: return "Numeric keypad 7";
		case 0x68: return "Numeric keypad 8";
		case 0x69: return "Numeric keypad 9";
		case 0x70: return "F1";
		case 0x71: return "F2";
		case 0x72: return "F3";
		case 0x73: return "F4";
		case 0x74: return "F5";
		case 0x75: return "F6";
		case 0x76: return "F7";
		case 0x77: return "F8";
		case 0x78: return "F9";
		case 0x79: return "F10";
		case 0x80: return "F17";
		case 0x81: return "F18";
		case 0x82: return "F19";
		case 0x83: return "F20";
		case 0x84: return "F21";
		case 0x85: return "F22";
		case 0x86: return "F23";
		case 0x87: return "F24";
		case 0x90: return "NUM LOCK";
		case 0x91: return "SCROLL LOCK";
		case 0xA0: return "Left SHIFT";
		case 0xA1: return "Right SHIFT";
		case 0xA2: return "Left CONTROL";
		case 0xA3: return "Right CONTROL";
		case 0xA4: return "Left ALT";
		case 0xA5: return "Right ALT";
		case 0xA6: return "Browser Back";
		case 0xA7: return "Browser Forward";
		case 0xA8: return "Browser Refresh";
		case 0xA9: return "Browser Stop";
		case 0xAA: return "Browser Search";
		case 0xAB: return "Browser Favorites";
		case 0xAC: return "Browser Start and Home";
		case 0xAD: return "Volume Mute";
		case 0xAE: return "Volume Down";
		case 0xAF: return "Volume Up";
		case 0xB0: return "Next Track";
		case 0xB1: return "Previous Track";
		case 0xB2: return "Stop Media";
		case 0xB3: return "Play/Pause Media";
		case 0xB4: return "Start Mail";
		case 0xB5: return "Select Media";
		case 0xB6: return "Start Application 1";
		case 0xB7: return "Start Application 2";
		case 0xBA: return "Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the ;:";
		case 0xBB: return "For any country/region, the +";
		case 0xBC: return "For any country/region, the ,";
		case 0xBD: return "For any country/region, the -";
		case 0xBE: return "For any country/region, the .";
		case 0xBF: return "Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the /?";
		case 0xC0: return "Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the `~";
		case 0xDB: return "Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the [{";
		case 0xDC: return "Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the \\\\|";
		case 0xDD: return "Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the ]}";
		case 0xDE: return "Used for miscellaneous characters; it can vary by keyboard. For the US standard keyboard, the '\"";
		case 0xDF: return "Used for miscellaneous characters; it can vary by keyboard.";
		case 0xE2: return "The <> keys on the US standard keyboard, or the \\\\| key on the non-US 102-key keyboard";
		case 0xE5: return "IME PROCESS";
		case 0xE7: return "Used to pass Unicode characters as if they were keystrokes. The VK_PACKET key is the low word of a 32-bit Virtual Key value used for non-keyboard input methods. For more information, see Remark in KEYBDINPUT, SendInput, WM_KEYDOWN, and WM_KEYUP";
		case 0xF6: return "Attn";
		case 0xF7: return "CrSel";
		case 0xF8: return "ExSel";
		case 0xF9: return "Erase EOF";
		case 0xFA: return "Play";
		case 0xFB: return "Zoom";
		case 0xFC: return "Reserved";
		case 0xFD: return "PA1";
		case 0xFE: return "Clear";
	}
}

int main()
{
	unsigned long long CETOverlayKey;
	cout << "Paste your CET Overlay Key: ";
	cin >> CETOverlayKey;

	stringstream ss;
	ss << hex << CETOverlayKey;

	string bindStr, tempStr;

	while(getline(ss, tempStr, '0'))
	{
		if(!tempStr.size()) continue;

		int vkKey = stoul(tempStr, nullptr, 16);
		string keyName = GetKeyName(vkKey);

		bindStr += keyName + " + ";
	}

	cout << bindStr.erase(bindStr.rfind(" + ")) << endl;
	system("pause");
}