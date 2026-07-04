/* Runtime dump - AVFrameRateRange_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFrameRateRange_FigRecorder : NSObject
{
    AVFrameRateRangeInternal_FigRecorder * _internal;
}

@property (readonly) double minFrameRate;
@property (readonly) double maxFrameRate;
@property (readonly) struct ? maxFrameDuration;
@property (readonly) struct ? minFrameDuration;

+ (AVFrameRateRange_FigRecorder *)frameRateRangeWithMinRate:(int)arg0 maxFrameRate:(int)arg1;

- (double)minFrameRate;
- (double)maxFrameRate;
- (struct ?)maxFrameDuration;
- (struct ?)minFrameDuration;
- (AVFrameRateRange_FigRecorder *)initWithMinFrameRate:(int)arg0 maxFrameRate:(int)arg1;
- (char)includesFrameRate:(double)arg0;
- (char)includesFrameDuration:(struct ?)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;

@end
