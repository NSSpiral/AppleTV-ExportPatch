/* Runtime dump - BRAudioDeviceManager
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRAudioDeviceManager : NSObject

+ (void)initializeAudio;
+ (void)_deviceWillSleep:(id)arg0;
+ (void)_deviceWillWake:(id)arg0;
+ (int)preferredAudioFormat;
+ (void)setPreferredAudioFormat:(int)arg0;
+ (void)setAudioOutputQuality:(int)arg0;
+ (void)_serverDiedHandler:(id /* block */)arg0;
+ (void)_initializeAudioSession;
+ (void)setConstantAudioOutputEnabled:(char)arg0;
+ (void)initialize;

@end
