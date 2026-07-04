/* Runtime dump - AVCaptureDeviceFakeBiasControlRequest
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceFakeBiasControlRequest : AVCaptureDeviceControlRequest
{
    float _fakeBias;
    struct ? _fakeBiasCompletionTime;
}

@property (nonatomic) float fakeBias;
@property (nonatomic) struct ? fakeBiasCompletionTime;

- (void)setFakeBias:(float)arg0;
- (void)setFakeBiasCompletionTime:(struct ?)arg0;
- (float)fakeBias;
- (struct ?)fakeBiasCompletionTime;

@end
