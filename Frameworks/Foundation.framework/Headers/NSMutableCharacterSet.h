/* Runtime dump - NSMutableCharacterSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMutableCharacterSet : NSCharacterSet <NSCopying, NSMutableCopying>

+ (NSSet *)lowercaseLetterCharacterSet;
+ (NSSet *)nonBaseCharacterSet;
+ (NSSet *)decomposableCharacterSet;
+ (NSSet *)capitalizedLetterCharacterSet;
+ (NSSet *)illegalCharacterSet;
+ (NSString *)characterSetWithContentsOfFile:(NSString *)arg0;
+ (NSDictionary *)characterSetWithBitmapRepresentation:(NSData *)arg0;
+ (NSCharacterSet *)whitespaceAndNewlineCharacterSet;
+ (NSSet *)controlCharacterSet;
+ (NSCharacterSet *)whitespaceCharacterSet;
+ (NSSet *)newlineCharacterSet;
+ (NSSet *)uppercaseLetterCharacterSet;
+ (NSString *)characterSetWithCharactersInString:(NSString *)arg0;
+ (NSSet *)punctuationCharacterSet;
+ (NSSet *)symbolCharacterSet;
+ (NSCharacterSet *)decimalDigitCharacterSet;
+ (NSSet *)letterCharacterSet;
+ (NSCharacterSet *)characterSetWithRange:(struct _NSRange)arg0;
+ (NSSet *)alphanumericCharacterSet;

- (id)tswp_initWithCharacters:(unsigned short *)arg0 length:(unsigned short)arg1;
- (void)addCharactersInRange:(struct _NSRange)arg0;
- (void)removeCharactersInRange:(struct _NSRange)arg0;
- (void)formIntersectionWithCharacterSet:(NSSet *)arg0;
- (void)invert;
- (char)isMutable;
- (NSMutableCharacterSet *)initWithCoder:(NSCoder *)arg0;
- (NSMutableCharacterSet *)init;
- (NSMutableCharacterSet *)copyWithZone:(struct _NSZone *)arg0;
- (NSMutableCharacterSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)formUnionWithCharacterSet:(NSSet *)arg0;
- (void)removeCharactersInString:(NSString *)arg0;
- (void)addCharactersInString:(NSString *)arg0;

@end
