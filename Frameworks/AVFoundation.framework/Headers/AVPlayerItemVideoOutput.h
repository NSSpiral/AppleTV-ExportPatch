/* Runtime dump - AVPlayerItemVideoOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemVideoOutput : AVPlayerItemOutput
{
    AVPlayerItemVideoOutputInternal * _videoOutputInternal;
}

@property (readonly, nonatomic) <AVPlayerItemOutputPullDelegate> * delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * delegateQueue;

- (char)suppressesPlayerRendering;
- (struct OpaqueFigVisualContext *)_visualContext;
- (NSDictionary *)_pixelBufferAttributes;
- (char)_attachToPlayerItem:(NSObject *)arg0;
- (void)_setTimebase:(struct OpaqueCMTimebase *)arg0;
- (void)_detachFromPlayerItem;
- (void)_dispatchOutputMediaDataWillChange;
- (void)_stopObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase *)arg0;
- (void)_startObservingTimebaseNotificationsForTimebase:(struct OpaqueCMTimebase *)arg0;
- (void)_setTagBuffersWithConversionInformation;
- (void)_dispatchOutputSequenceWasFlushed;
- (void)dealloc;
- (AVPlayerItemVideoOutput *)init;
- (<AVPlayerItemOutputPullDelegate> *)delegate;
- (NSObject<OS_dispatch_queue> *)delegateQueue;
- (void)finalize;
- (void)setDelegate:(<AVPlayerItemOutputPullDelegate> *)arg0 queue:(NSObject *)arg1;
- (void)setSuppressesPlayerRendering:(char)arg0;
- (AVPlayerItemVideoOutput *)initWithPixelBufferAttributes:(NSDictionary *)arg0;
- (char)hasNewPixelBufferForItemTime:(struct ?)arg0;
- (struct __CVBuffer *)copyPixelBufferForItemTime:(struct ?)arg0 itemTimeForDisplay:(struct ? *)arg1;
- (void)requestNotificationOfMediaDataChangeWithAdvanceInterval:(double)arg0;

@end
