/* Runtime dump - AXAttributedString
 * Image: /System/Library/PrivateFrameworks/AXRuntime.framework/AXRuntime
 */

@interface AXAttributedString : NSString <NSCopying>
{
    struct __CFAttributedString * _string;
}

+ (struct __CFAttributedString *)string;
+ (NSString *)axAttributedStringWithString:(struct __CFAttributedString *)arg0;

- (void)dealloc;
- (NSString *)description;
- (NSObject *)substringFromIndex:(unsigned int)arg0;
- (unsigned int)length;
- (void)appendString:(NSString *)arg0;
- (void)appendFormat:(NSString *)arg0;
- (AXAttributedString *)copyWithZone:(struct _NSZone *)arg0;
- (struct __CFAttributedString *)string;
- (AXAttributedString *)initWithString:(struct __CFAttributedString *)arg0;
- (unsigned short)characterAtIndex:(unsigned int)arg0;
- (NSString *)lowercaseString;
- (NSString *)uppercaseString;
- (NSObject *)attributesAtIndex:(int)arg0 effectiveRange:(struct _NSRange *)arg1;
- (void)setAttributes:(NSDictionary *)arg0;
- (NSObject *)attributedSubstringFromRange:(struct _NSRange)arg0;
- (void)convertAttachmentsWithBlock:(id /* block */)arg0;
- (struct __CFAttributedString *)cfAttributedString;
- (void)appendAXAttributedString:(NSString *)arg0;
- (void)enumerateAttributesUsingBlock:(id /* block */)arg0;
- (void)replaceString:(struct __CFString *)arg0;
- (void)removeAttributes:(NSDictionary *)arg0;
- (void)appendStringOrAXAttributedString:(NSString *)arg0;
- (NSString *)attributeValueForKey:(NSString *)arg0;
- (char)isAXAttributedString;
- (NSDictionary *)coalescedFontAttributes;
- (NSString *)axAttributedStringDescription;
- (void)setAttribute:(char *)arg0 forKey:(NSString *)arg1;
- (AXAttributedString *)initWithCFAttributedString:(struct __CFAttributedString *)arg0;
- (void)setAttribute:(char *)arg0 forKey:(NSString *)arg1 withRange:(struct _NSRange)arg2;
- (void)setAttributes:(NSDictionary *)arg0 withRange:(struct _NSRange)arg1;
- (char)hasAttribute:(char)arg0;

@end
