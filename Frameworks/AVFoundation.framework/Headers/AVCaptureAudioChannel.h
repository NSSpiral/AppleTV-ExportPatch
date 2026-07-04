/* Runtime dump - AVCaptureAudioChannel
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAudioChannel : NSObject
{
    AVCaptureAudioChannelInternal * _internal;
}

@property (readonly, nonatomic) float averagePowerLevel;
@property (readonly, nonatomic) float peakHoldLevel;

- (float)averagePowerLevel;
- (float)peakHoldLevel;
- (void)dealloc;
- (void)invalidate;
- (AVCaptureAudioChannel *)initWithConnection:(NSURLConnection *)arg0;

@end
