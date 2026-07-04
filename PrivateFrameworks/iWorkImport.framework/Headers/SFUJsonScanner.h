/* Runtime dump - SFUJsonScanner
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface SFUJsonScanner : NSObject
{
    NSString * mString;
    unsigned short * mCharacters;
    unsigned int mLength;
    unsigned int mOffset;
    NSCharacterSet * mWhitespaceCharacterSet;
    NSCharacterSet * mDecimalDigitCharacterSet;
}

- (void)dealloc;
- (SFUJsonScanner *)initWithString:(NSString *)arg0;
- (void)skipWhitespace;
- (id)parseObjectWithMaxDepth:(int)arg0;
- (id)parseArrayWithMaxDepth:(int)arg0;
- (id)parseDictionaryWithMaxDepth:(int)arg0;
- (unsigned short)nextCharacter;
- (void)appendCharactersInRange:(struct _NSRange)arg0 toString:(NSString *)arg1;
- (id)parseHexCharacter;
- (NSString *)parseString;
- (char)parseConstantString:(char *)arg0;
- (id)parseNull;
- (id)parseTrue;
- (id)parseFalse;
- (NSNumber *)parseNumber;

@end
