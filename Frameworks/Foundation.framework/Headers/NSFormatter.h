/* Runtime dump - NSFormatter
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFormatter : NSObject <NSCopying, NSCoding>

- (void)_gkUpdateLocale;
- (NSAttributedString *)attributedStringForObjectValue:(id)arg0 withDefaultAttributes:(NSDictionary *)arg1;
- (id)editingStringForObjectValue:(id)arg0;
- (char)isPartialStringValid:(id *)arg0 newEditingString:(id *)arg1 errorDescription:(id *)arg2;
- (char)isPartialStringValid:(id *)arg0 proposedSelectedRange:(struct _NSRange *)arg1 originalString:(NSString *)arg2 originalSelectedRange:(struct _NSRange)arg3 errorDescription:(id *)arg4;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 range:(NSObject *)arg2 error:(struct _NSRange *)arg3;
- (NSFormatter *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSFormatter *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)stringForObjectValue:(id)arg0;
- (char)getObjectValue:(id *)arg0 forString:(NSString *)arg1 errorDescription:(NSString *)arg2;

@end
