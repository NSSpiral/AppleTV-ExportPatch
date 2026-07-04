/* Runtime dump - CAMMutableStillImageCaptureRequest
 * Image: /System/Library/PrivateFrameworks/CameraKit.framework/CameraKit
 */

@interface CAMMutableStillImageCaptureRequest : CAMStillImageCaptureRequest

@property (nonatomic) char transient;
@property (nonatomic) int deviceOrientation;
@property (nonatomic) int captureDevice;
@property (nonatomic) int flashMode;
@property (nonatomic) int hdrMode;
@property (nonatomic) char usesStillImageStabilization;
@property (nonatomic) char wantsAudioForCapture;
@property (weak, nonatomic) <CAMStillImageCaptureRequestDelegate> * delegate;

- (void)setFlashMode:(int)arg0;
- (void)setTransient:(char)arg0;
- (void)setDelegate:(<CAMStillImageCaptureRequestDelegate> *)arg0;
- (void)setDeviceOrientation:(int)arg0;
- (void)setCaptureDevice:(int)arg0;
- (void)setHdrMode:(int)arg0;
- (void)setUsesStillImageStabilization:(char)arg0;
- (void)setWantsAudioForCapture:(char)arg0;
- (void)setParameter:(ICSRoleParameter *)arg0 forKey:(NSString *)arg1;

@end
