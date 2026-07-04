/* Runtime dump - CIEnhancementHistogram
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIEnhancementHistogram : NSObject
{
    id hist;
}

+ (NSData *)histogramFromData:(float *)arg0;
+ (NSData *)histogramFromFloatData:(float *)arg0;
+ (NSData *)histogramFromDoubleData:(double *)arg0;

- (float *)values;

@end
