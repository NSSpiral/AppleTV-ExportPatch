/* Runtime dump - CAMStillImageCaptureRequest
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMStillImageCaptureRequest : CAMCaptureRequest <NSCopying, NSMutableCopying>
{
    char _transient;
    int _deviceOrientation;
    int _captureDevice;
    int _flashMode;
    int _hdrMode;
    char _usesStillImageStabilization;
    char _wantsAudioForCapture;
    <CAMStillImageCaptureRequestDelegate> * _delegate;
}

@property (readonly, nonatomic) char transient;
@property (readonly, nonatomic) int deviceOrientation;
@property (readonly, nonatomic) int captureDevice;
@property (readonly, nonatomic) int flashMode;
@property (readonly, nonatomic) int hdrMode;
@property (readonly, nonatomic) char usesStillImageStabilization;
@property (readonly, nonatomic) char wantsAudioForCapture;
@property (readonly, weak, nonatomic) <CAMStillImageCaptureRequestDelegate> * delegate;

- (int)flashMode;
- (CAMStillImageCaptureRequest *)init;
- (<CAMStillImageCaptureRequestDelegate> *)delegate;
- (CAMStillImageCaptureRequest *)copyWithZone:(struct _NSZone *)arg0;
- (int)deviceOrientation;
- (CAMStillImageCaptureRequest *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (char)isTransient;
- (int)captureDevice;
- (int)hdrMode;
- (char)usesStillImageStabilization;
- (char)wantsAudioForCapture;

@end
