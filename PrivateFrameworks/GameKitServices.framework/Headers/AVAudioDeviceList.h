/* Runtime dump - AVAudioDeviceList
 * Image: /System/Library/PrivateFrameworks/GameKitServices.framework/Frameworks/AVConference.framework/AVConference
 */

@interface AVAudioDeviceList : NSObject
{
    AVInternalDeviceList * _internalList;
}

@property (copy, nonatomic) id changeListener;

+ (AVAudioDeviceList *)defaultInputDevice;
+ (AVAudioDeviceList *)defaultOutputDevice;
+ (AVAudioDeviceList *)currentInputDevice;
+ (char)setInputDevice:(NSObject *)arg0;

- (void)dealloc;
- (AVAudioDeviceList *)init;
- (void)setChangeListener:(id)arg0;
- (id)changeListener;
- (NSArray *)devices;
- (id)inputDevices;
- (id)outputDevices;

@end
