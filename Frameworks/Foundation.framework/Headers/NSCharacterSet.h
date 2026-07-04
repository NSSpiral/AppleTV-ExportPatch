/* Runtime dump - NSCharacterSet
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSCharacterSet : NSObject <NSCopying, NSMutableCopying, NSCoding>

@property (readonly, copy) NSData * bitmapRepresentation;
@property (readonly, copy) NSCharacterSet * invertedSet;

+ (NSSet *)tswp_smartSingleQuotesCharacterSet;
+ (NSSet *)tswp_invisibleCharacterSet;
+ (NSSet *)tswp_breakingSpaceCharacterSet;
+ (NSSet *)tswp_spaceCharacterSet;
+ (NSCharacterSet *)tswp_allQuotesCharacterSetExcludingRight;
+ (NSCharacterSet *)tswp_allQuotesCharacterSetExcludingLeft;
+ (NSSet *)tswp_variationSelectorCharacterSet;
+ (NSSet *)tswp_preSmartSet;
+ (NSSet *)tswp_postSmartSet;
+ (NSSet *)tswp_lineBreakingCharacterSet;
+ (NSSet *)tsce_internationalWhitespaceCharacterSet;
+ (NSSet *)tsce_singleQuoteCharacterSet;
+ (NSCharacterSet *)tsce_characterSetRequiringSingleQuotes;
+ (NSSet *)tsce_periodCharacterSet;
+ (NSSet *)tsce_internationalWhitespaceAndNewlineCharacterSet;
+ (NSSet *)tsce_internationalColonCharacterSet;
+ (NSSet *)tsce_dollarSignCharacterSet;
+ (NSSet *)tsce_listDelimiterCharacterSet;
+ (NSSet *)whitespaceNewlineAndSpecialCharacterSet;
+ (NSSet *)wordBreakCharacterSet;
+ (NSSet *)lowercaseLetterCharacterSet;
+ (NSSet *)nonBaseCharacterSet;
+ (NSSet *)decomposableCharacterSet;
+ (NSSet *)capitalizedLetterCharacterSet;
+ (NSSet *)illegalCharacterSet;
+ (NSCharacterSet *)characterSetWithContentsOfFile:(NSString *)arg0;
+ (NSCharacterSet *)characterSetWithBitmapRepresentation:(NSData *)arg0;
+ (NSSet *)URLUserAllowedCharacterSet;
+ (NSSet *)URLPasswordAllowedCharacterSet;
+ (NSSet *)URLHostAllowedCharacterSet;
+ (NSSet *)URLPathAllowedCharacterSet;
+ (NSSet *)URLFragmentAllowedCharacterSet;
+ (void)initialize;
+ (NSCharacterSet *)whitespaceAndNewlineCharacterSet;
+ (NSSet *)controlCharacterSet;
+ (NSCharacterSet *)whitespaceCharacterSet;
+ (NSSet *)newlineCharacterSet;
+ (NSSet *)uppercaseLetterCharacterSet;
+ (NSCharacterSet *)characterSetWithCharactersInString:(NSString *)arg0;
+ (NSSet *)punctuationCharacterSet;
+ (NSSet *)symbolCharacterSet;
+ (NSCharacterSet *)decimalDigitCharacterSet;
+ (NSSet *)URLQueryAllowedCharacterSet;
+ (NSSet *)letterCharacterSet;
+ (NSCharacterSet *)characterSetWithRange:(struct _NSRange)arg0;
+ (NSSet *)alphanumericCharacterSet;

- (char)longCharacterIsMember:(unsigned long)arg0;
- (char)hasMemberInPlane:(unsigned char)arg0;
- (NSDictionary *)_retainedBitmapRepresentation;
- (struct __CFCharacterSet *)_expandedCFCharacterSet;
- (unsigned long)_cfTypeID;
- (NSData *)bitmapRepresentation;
- (char)isSupersetOfSet:(NSSet *)arg0;
- (NSCoder *)replacementObjectForPortCoder:(NSCoder *)arg0;
- (char)isMutable;
- (void)makeImmutable;
- (NSCharacterSet *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (NSCharacterSet *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSCharacterSet *)copyWithZone:(struct _NSZone *)arg0;
- (char)isEmpty;
- (char)characterIsMember:(unsigned short)arg0;
- (NSCharacterSet *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (NSCharacterSet *)invertedSet;

@end
