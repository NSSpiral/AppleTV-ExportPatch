/* Runtime dump - NSScanner
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSScanner : NSObject <NSCopying>

@property (readonly, copy) NSString * string;
@property unsigned int scanLocation;
@property (copy) NSCharacterSet * charactersToBeSkipped;
@property char caseSensitive;
@property (retain) id locale;

+ (NSString *)localizedScannerWithString:(NSString *)arg0;
+ (NSScanner *)allocWithZone:(struct _NSZone *)arg0;
+ (NSScanner *)scannerWithString:(NSString *)arg0;

- (char)tsu_scanCGFloat:(float *)arg0;
- (char)scanCGFloat:(float *)arg0;
- (char)mf_scanUpToRegularExpression:(NSObject *)arg0;
- (struct _NSRange)_rangeOfFirstMatchWithRegularExpression:(NSRegularExpression *)arg0;
- (NSString *)mf_remainingString;
- (char)mf_scanUpAndOverString:(NSString *)arg0;
- (id)mf_nextTokenWithPunctuation:(struct __CFCharacterSet *)arg0;
- (NSString *)_remainingString;
- (char)_scanDecimal:(unsigned int)arg0 into:(int *)arg1;
- (NSCharacterSet *)charactersToBeSkipped;
- (char)caseSensitive;
- (char)scanUnsignedLongLong:(unsigned long long *)arg0;
- (NSSet *)_invertedSkipSet;
- (char)scanFloat:(float *)arg0;
- (char)scanHexDouble:(double *)arg0;
- (char)scanHexFloat:(float *)arg0;
- (char)scanUnsignedInteger:(unsigned int *)arg0;
- (char)scanDecimal:(struct ? *)arg0;
- (NSScanner *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)string;
- (NSScanner *)initWithString:(NSString *)arg0;
- (void)setLocale:(NSLocale *)arg0;
- (char)scanString:(NSString *)arg0 intoString:(id *)arg1;
- (char)scanInteger:(int *)arg0;
- (char)isAtEnd;
- (char)scanUpToString:(NSString *)arg0 intoString:(id *)arg1;
- (void)setScanLocation:(unsigned int)arg0;
- (NSLocale *)locale;
- (char)scanDouble:(double *)arg0;
- (void)setCaseSensitive:(char)arg0;
- (char)scanHexLongLong:(unsigned long long *)arg0;
- (char)scanCharactersFromSet:(NSSet *)arg0 intoString:(id *)arg1;
- (char)scanInt:(int *)arg0;
- (void)setCharactersToBeSkipped:(NSCharacterSet *)arg0;
- (char)scanLongLong:(long long *)arg0;
- (char)scanUpToCharactersFromSet:(NSSet *)arg0 intoString:(id *)arg1;
- (char)scanHexInt:(unsigned int *)arg0;
- (unsigned int)scanLocation;

@end
