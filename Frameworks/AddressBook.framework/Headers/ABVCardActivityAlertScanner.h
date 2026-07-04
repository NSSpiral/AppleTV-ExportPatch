/* Runtime dump - ABVCardActivityAlertScanner
 * Image: /System/Library/Frameworks/AddressBook.framework/AddressBook
 */

@interface ABVCardActivityAlertScanner : NSObject
{
    NSString * _string;
    unsigned int _position;
}

+ (char)characterIsStringValueCharacter:(unsigned short)arg0;
+ (NSString *)scanAlertValueFromString:(NSString *)arg0;
+ (NSString *)scannerWithString:(NSString *)arg0;

- (id)scanAlertValue;
- (id)scanKeyValuePair;
- (char)scanPastItemDelimiter;
- (NSString *)scanStringValue;
- (char)scanPastKeyValueSeparator;
- (char)atEnd;
- (unsigned short)nextUnescapedCharacter;
- (NSString *)scanQuotedStringValue;
- (NSString *)scanUnquotedStringValue;
- (unsigned short)scanCharacter;
- (char)scanPastCharacter:(unsigned short)arg0;
- (unsigned short)scanCharacterWithEscaping:(char)arg0;
- (void)scanPastWhitespace;
- (void)dealloc;
- (unsigned int)position;
- (ABVCardActivityAlertScanner *)initWithString:(NSString *)arg0;
- (unsigned short)nextCharacter;

@end
