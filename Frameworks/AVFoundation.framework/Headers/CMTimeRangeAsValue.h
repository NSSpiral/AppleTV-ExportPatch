/* Runtime dump - CMTimeRangeAsValue
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface CMTimeRangeAsValue : NSValue
{
    struct ? _timeRange;
}

+ (NSValue *)valueWithCMTimeRange:(struct ?)arg0;

- (NSString *)description;
- (void)getValue:(void *)arg0;
- (char *)objCType;
- (struct ?)CMTimeRangeValue;

@end
