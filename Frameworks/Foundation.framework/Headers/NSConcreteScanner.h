/* Runtime dump - NSConcreteScanner
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConcreteScanner : NSScanner
{
    NSString * scanString;
    NSCharacterSet * skipSet;
    NSCharacterSet * invertedSkipSet;
    id locale;
    unsigned int scanLocation;
    struct ? flags;
}

- (NSCharacterSet *)charactersToBeSkipped;
- (char)caseSensitive;
- (NSSet *)_invertedSkipSet;
- (void)dealloc;
- (NSString *)string;
- (NSConcreteScanner *)initWithString:(NSString *)arg0;
- (void)setLocale:(NSLocale *)arg0;
- (void)setScanLocation:(unsigned int)arg0;
- (NSLocale *)locale;
- (void)setCaseSensitive:(char)arg0;
- (char)scanInt:(int *)arg0;
- (void)setCharactersToBeSkipped:(NSCharacterSet *)arg0;
- (char)scanLongLong:(long long *)arg0;
- (void)finalize;
- (unsigned int)scanLocation;

@end
