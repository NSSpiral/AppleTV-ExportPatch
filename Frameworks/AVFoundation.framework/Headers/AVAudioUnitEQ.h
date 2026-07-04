/* Runtime dump - AVAudioUnitEQ
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitEQ : AVAudioUnitEffect

@property (readonly, nonatomic) NSArray * bands;
@property (nonatomic) float globalGain;

- (AVAudioUnitEQ *)initWithNumberOfBands:(unsigned int)arg0;
- (NSArray *)bands;
- (float)globalGain;
- (void)setGlobalGain:(float)arg0;
- (AVAudioUnitEQ *)init;

@end
