/* Runtime dump - CIDetector
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDetector : NSObject

+ (NSObject *)detectorOfType:(NSObject *)arg0 context:(NSObject *)arg1 options:(NSDictionary *)arg2;

- (UIImage *)featuresInImage:(UIImage *)arg0 options:(NSDictionary *)arg1;
- (UIImage *)featuresInImage:(UIImage *)arg0;
- (CIDetector *)init;

@end
