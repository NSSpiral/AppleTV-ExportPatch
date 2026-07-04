/* Runtime dump - AVAudioEnvironmentReverbParameters
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioEnvironmentReverbParameters : NSObject
{
    void * _impl;
}

@property (nonatomic) char enable;
@property (nonatomic) float level;
@property (readonly, nonatomic) AVAudioUnitEQFilterParameters * filterParameters;

- (void)loadFactoryReverbPreset:(int)arg0;
- (void)dealloc;
- (AVAudioEnvironmentReverbParameters *)init;
- (void)setLevel:(float)arg0;
- (float)level;
- (char)enable;
- (AVAudioEnvironmentReverbParameters *)initWithEnvironment:(struct AVAudioEnvironmentNodeImpl *)arg0;
- (AVAudioUnitEQFilterParameters *)filterParameters;
- (void)setEnable:(char)arg0;

@end
