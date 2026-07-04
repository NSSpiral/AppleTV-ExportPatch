/* Runtime dump - AVCaptureFigAudioDevice
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFigAudioDevice : AVCaptureDevice
{
    NSObject<OS_dispatch_queue> * _fcsQueue;
    struct OpaqueFigCaptureSource * _fcs;
    NSDictionary * _attributes;
    char _levelMeteringEnabled;
    char _isConnected;
    NSString * _localizedName;
    AVWeakReference * _weakReference;
}

+ (NSArray *)_devices;
+ (AVCaptureFigAudioDevice *)alloc;
+ (void)initialize;

- (void)_handleNotification:(struct __CFString *)arg0 payload:(NSData *)arg1;
- (char)startUsingDevice:(id *)arg0;
- (void)stopUsingDevice;
- (NSString *)modelID;
- (char)hasMediaType:(char)arg0;
- (char)supportsAVCaptureSessionPreset:(NSSet *)arg0;
- (char)isInUseByAnotherApplication;
- (struct OpaqueCMClock *)deviceClock;
- (struct OpaqueFigCaptureSource *)figCaptureSource;
- (NSObject *)_initWithFigCaptureSource:(struct OpaqueFigCaptureSource *)arg0;
- (void)_setFigCaptureSource:(struct OpaqueFigCaptureSource *)arg0;
- (NSObject *)_copyFigCaptureSourceProperty:(struct __CFString *)arg0;
- (void)audioInputDevicesDidChangeHandler:(id /* block */)arg0;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id /* block */)arg0;
- (void)dealloc;
- (AVCaptureFigAudioDevice *)init;
- (NSString *)localizedName;
- (char)isConnected;
- (NSString *)uniqueID;

@end
