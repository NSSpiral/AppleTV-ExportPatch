/* Runtime dump - AVCaptureFigAudioDevice_FigRecorder
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureFigAudioDevice_FigRecorder : AVCaptureDevice_FigRecorder
{
    NSDictionary * _deviceProperties;
    char _levelMeteringEnabled;
    char _isConnected;
    NSString * _localizedName;
    struct OpaqueCMClock * _deviceClock;
}

+ (NSArray *)_devices;

- (char)startUsingDevice:(id *)arg0;
- (void)stopUsingDevice;
- (NSString *)modelID;
- (char)hasMediaType:(char)arg0;
- (char)supportsAVCaptureSessionPreset:(NSSet *)arg0;
- (char)isInUseByAnotherApplication;
- (struct OpaqueCMClock *)deviceClock;
- (void)audioInputDevicesDidChangeHandler:(id /* block */)arg0;
- (void)audioInputDeviceLocalizedNameDidChangeHandler:(id /* block */)arg0;
- (NSDictionary *)devicePropertiesDictionary;
- (void)dealloc;
- (AVCaptureFigAudioDevice_FigRecorder *)init;
- (char)isKindOfClass:(Class)arg0;
- (NSString *)localizedName;
- (AVCaptureFigAudioDevice_FigRecorder *)initWithProperties:(NSDictionary *)arg0;
- (char)isConnected;
- (NSString *)uniqueID;

@end
