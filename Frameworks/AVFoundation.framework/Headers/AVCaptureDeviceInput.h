/* Runtime dump - AVCaptureDeviceInput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceInput : AVCaptureInput
{
    AVCaptureDeviceInputInternal * _internal;
}

@property (readonly, nonatomic) AVCaptureDevice * device;

+ (NSObject *)deviceInputWithDevice:(AVCaptureDevice *)arg0 error:(id *)arg1;
+ (AVCaptureDeviceInput *)alloc;
+ (void)initialize;

- (NSError *)notReadyError;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg0;
- (void)_handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (NSArray *)ports;
- (AVCaptureDeviceInput *)initWithDevice:(AVCaptureDevice *)arg0 error:(id *)arg1;
- (char)_authorizedToUseDevice:(NSObject *)arg0;
- (void)_sourceFormatDidChange:(struct opaqueCMFormatDescription *)arg0;
- (int)_requestCameraRecordPermissionForDevice:(NSObject *)arg0;
- (void)dealloc;
- (AVCaptureDeviceInput *)init;
- (NSString *)description;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (struct OpaqueCMClock *)clock;
- (AVCaptureDevice *)device;

@end
