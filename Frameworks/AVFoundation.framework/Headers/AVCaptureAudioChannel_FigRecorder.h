/* Runtime dump - AVCaptureAudioChannel_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureAudioChannel_FigRecorder : NSObject
{
    AVCaptureAudioChannelInternal_FigRecorder * _internal;
}

@property (readonly, nonatomic) float averagePowerLevel;
@property (readonly, nonatomic) float peakHoldLevel;

- (float)averagePowerLevel;
- (float)peakHoldLevel;
- (void)dealloc;
- (char)isKindOfClass:(Class)arg0;
- (void)invalidate;
- (AVCaptureAudioChannel_FigRecorder *)initWithConnection:(NSURLConnection *)arg0;

@end
