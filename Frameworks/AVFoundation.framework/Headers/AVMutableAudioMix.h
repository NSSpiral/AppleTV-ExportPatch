/* Runtime dump - AVMutableAudioMix
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVMutableAudioMix : AVAudioMix
{
    AVMutableAudioMixInternal * _mutableAudioMix;
}

@property (copy, nonatomic) NSArray * inputParameters;

+ (AVAudioMix *)audioMix;

- (NSArray *)inputParameters;
- (void)setInputParameters:(NSArray *)arg0;

@end
