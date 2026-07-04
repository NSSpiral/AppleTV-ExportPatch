/* Runtime dump - MCTextConversion
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MCTextConversion : NSObject

+ (NSString *)stringAttributesWithAttributedString:(NSAttributedString *)arg0;
+ (NSDictionary *)attributedStringWithCTAttributesFromStringAttributes:(NSDictionary *)arg0;
+ (NSString *)styleForFontDisplayName:(NSString *)arg0 andFamilyName:(NSString *)arg1;
+ (NSString *)weightForFontDisplayName:(NSString *)arg0 andFamilyName:(NSString *)arg1;
+ (NSString *)stretchForFontDisplayName:(NSString *)arg0 andFamilyName:(NSString *)arg1;
+ (MCTextConversion *)stringFromTextAlignment:(int)arg0;
+ (NSObject *)textFormatFromUnderlineStyle:(unsigned int)arg0;
+ (MCTextConversion *)stringFromLigature:(int)arg0;
+ (NSString *)textFormatWithCTAttributesForText:(NSString *)arg0 attributes:(NSDictionary *)arg1;
+ (NSString *)textFormatWithNSAttributesForText:(NSString *)arg0 attributes:(NSDictionary *)arg1;
+ (int)textAlignmentFromString:(NSString *)arg0;
+ (unsigned int)underlineStyleFromTextFormat:(NSString *)arg0;
+ (int)ligatureFromString:(NSString *)arg0;
+ (NSDictionary *)attributedStringWithNSAttributesFromStringAttributes:(NSDictionary *)arg0;

@end
