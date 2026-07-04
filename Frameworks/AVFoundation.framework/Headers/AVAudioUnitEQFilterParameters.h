/* Runtime dump - AVAudioUnitEQFilterParameters
 * Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioUnitEQFilterParameters : NSObject
{
    void * _impl;
}

@property (nonatomic) int filterType;
@property (nonatomic) float frequency;
@property (nonatomic) float bandwidth;
@property (nonatomic) float gain;
@property (nonatomic) char bypass;

- (AVAudioUnitEQFilterParameters *)initWithImpl:(struct AVAudioUnitEQFilterParametersImpl *)arg0;
- (void)setBandwidth:(float)arg0;
- (float)bandwidth;
- (void)setBypass:(char)arg0;
- (char)bypass;
- (float)gain;
- (void)setGain:(float)arg0;
- (void)dealloc;
- (AVAudioUnitEQFilterParameters *)init;
- (float)frequency;
- (void)setFrequency:(float)arg0;
- (int)filterType;
- (void)setFilterType:(int)arg0;

@end
