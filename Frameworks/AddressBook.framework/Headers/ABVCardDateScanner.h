/* Runtime dump - ABVCardDateScanner
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardDateScanner : NSObject
{
    NSString * _string;
    unsigned int _position;
}

@property (readonly) unsigned int position;

+ (NSString *)scannerWithString:(NSString *)arg0;

- (unsigned int)lengthOfCalendarUnit:(unsigned int)arg0;
- (int)scanComponentValueOfLength:(unsigned int)arg0;
- (int)scanCalendarUnit:(unsigned int)arg0;
- (char)scanLeapMarker;
- (unsigned int)position;
- (ABVCardDateScanner *)initWithString:(NSString *)arg0;
- (char)isAtEnd;
- (unsigned short)nextCharacter;

@end
