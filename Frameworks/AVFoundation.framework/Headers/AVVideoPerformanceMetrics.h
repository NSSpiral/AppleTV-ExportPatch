/* Runtime dump - AVVideoPerformanceMetrics
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVVideoPerformanceMetrics : NSObject
{
    AVVideoPerformanceMetricsInternal * _performanceMetricsInternal;
}

@property (readonly, nonatomic) unsigned long totalNumberOfVideoFrames;
@property (readonly, nonatomic) unsigned long numberOfDroppedVideoFrames;
@property (readonly, nonatomic) unsigned long numberOfCorruptedVideoFrames;
@property (readonly, nonatomic) double totalFrameDelay;

- (unsigned long)totalNumberOfVideoFrames;
- (unsigned long)numberOfCorruptedVideoFrames;
- (double)totalFrameDelay;
- (unsigned long)numberOfDroppedVideoFrames;
- (void)dealloc;
- (AVVideoPerformanceMetrics *)init;
- (AVVideoPerformanceMetrics *)initWithDictionary:(NSDictionary *)arg0;
- (void)finalize;

@end
