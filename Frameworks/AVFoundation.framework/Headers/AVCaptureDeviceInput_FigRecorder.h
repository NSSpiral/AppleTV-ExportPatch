/* Runtime dump - AVCaptureDeviceInput_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureDeviceInput_FigRecorder : AVCaptureInput_FigRecorder
{
    AVCaptureDeviceInputInternal_FigRecorder * _internal;
}

@property (readonly, nonatomic) AVCaptureDevice_FigRecorder * device;

+ (NSObject *)deviceInputWithDevice:(AVCaptureDevice_FigRecorder *)arg0 error:(id *)arg1;
+ (void)initialize;

- (void)_applyOverridesToCaptureOptions:(NSDictionary *)arg0;
- (void)didStopForSession:(NSObject *)arg0 error:(NSError *)arg1;
- (void)didStartForSession:(NSObject *)arg0;
- (void)handleNotification:(NSNotification *)arg0 payload:(NSData *)arg1;
- (NSError *)notReadyError;
- (NSArray *)ports;
- (AVCaptureDeviceInput_FigRecorder *)initWithDevice:(AVCaptureDevice_FigRecorder *)arg0 error:(id *)arg1;
- (char)_authorizedToUseDevice:(NSObject *)arg0;
- (void)_setDevice:(NSObject *)arg0;
- (void)willStartForSession:(NSObject *)arg0;
- (void)_checkForFigCameraAccess;
- (int)_requestCameraRecordPermission;
- (void)dealloc;
- (AVCaptureDeviceInput_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (NSString *)description;
- (void)observeValueForKeyPath:(NSString *)arg0 ofObject:(NSObject *)arg1 change:(NSDictionary *)arg2 context:(void *)arg3;
- (void)setSession:(NSObject *)arg0;
- (struct OpaqueCMClock *)clock;
- (AVCaptureDevice_FigRecorder *)device;

@end
