/* Runtime dump - CMTextFilter
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CMTextFilter : NSObject

+ (CMTextFilter *)filterHyperlinkField:(id)arg0;
+ (NSString *)covertFormatString:(NSString *)arg0;
+ (CMTextFilter *)filterSpecialCodes:(id)arg0;
+ (CMTextFilter *)convertLineBreaksToParagraphBreaks:(id)arg0;
+ (CMTextFilter *)filterToPreserveMultipleWhiteSpaces:(id)arg0;
+ (NSString *)convertToVericalString:(NSString *)arg0;

- (CMTextFilter *)init;

@end
