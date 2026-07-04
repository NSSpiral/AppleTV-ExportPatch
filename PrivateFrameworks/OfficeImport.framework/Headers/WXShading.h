/* Runtime dump - WXShading
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WXShading : NSObject

+ (void)initialize;
+ (UIColor *)getStringFromColor:(UIColor *)arg0;
+ (NSString *)getColorFromString:(NSString *)arg0;
+ (void)readFrom:(struct _xmlNode *)arg0 to:(struct _xmlNode *)arg1 state:(struct _xmlNode *)arg2;
+ (NSString *)getColorFromCString:(char *)arg0;

@end
