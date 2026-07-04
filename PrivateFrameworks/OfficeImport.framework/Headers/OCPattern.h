/* Runtime dump - OCPattern
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OCPattern : NSObject

+ (NSString *)blackAndWhiteImageDataWithPatternName:(NSString *)arg0;
+ (NSData *)colorizedImageDataWithBlackAndWhiteImageData:(NSData *)arg0 foregroundColor:(UIColor *)arg1 backgroundColor:(UIColor *)arg2;
+ (NSString *)presetPatternHeader;

@end
