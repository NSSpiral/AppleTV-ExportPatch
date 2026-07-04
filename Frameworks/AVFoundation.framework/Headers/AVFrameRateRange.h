/* Runtime dump - AVFrameRateRange
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFrameRateRange : NSObject
{
    AVFrameRateRangeInternal * _internal;
}

@property (readonly) double minFrameRate;
@property (readonly) double maxFrameRate;
@property (readonly) struct ? maxFrameDuration;
@property (readonly) struct ? minFrameDuration;

+ (AVFrameRateRange *)frameRateRangeWithMinRate:(int)arg0 maxFrameRate:(int)arg1;

- (double)minFrameRate;
- (double)maxFrameRate;
- (struct ?)maxFrameDuration;
- (struct ?)minFrameDuration;
- (AVFrameRateRange *)initWithMinFrameRate:(int)arg0 maxFrameRate:(int)arg1;
- (char)includesFrameRate:(double)arg0;
- (char)includesFrameDuration:(struct ?)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;

@end
