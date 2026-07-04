/* Runtime dump - AVAudioClient
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVAudioClient : NSObject
{
    AVAudioDeviceList * deviceList;
}

@property (nonatomic) id changeListener;
@property (retain, nonatomic) AVAudioDeviceList * deviceList;

+ (void)setAudioSessionProperties:(NSDictionary *)arg0;
+ (void)startAudioSession;
+ (void)startAudioSessionWithCompletionHandler:(id /* block */)arg0;
+ (void)stopAudioSession;
+ (char)hasActiveAudioSession;
+ (AVAudioClient *)defaultInputDevice;
+ (AVAudioClient *)defaultOutputDevice;
+ (AVAudioClient *)currentInputDevice;
+ (char)setInputDevice:(NSObject *)arg0;
+ (void)initializeAudioSessionQ;

- (void)dealloc;
- (AVAudioClient *)init;
- (AVAudioDeviceList *)deviceList;
- (void)setChangeListener:(id)arg0;
- (id)changeListener;
- (NSArray *)devices;
- (id)inputDevices;
- (id)outputDevices;
- (void)setDeviceList:(AVAudioDeviceList *)arg0;

@end
