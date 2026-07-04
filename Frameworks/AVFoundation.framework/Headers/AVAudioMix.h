/* Runtime dump - AVAudioMix
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAudioMix : NSObject <NSCopying, NSMutableCopying>
{
    AVAudioMixInternal * _audioMix;
}

@property (readonly, copy, nonatomic) NSArray * inputParameters;

- (NSArray *)inputParameters;
- (NSObject *)_audioMixInputParametersForTrackID:(int)arg0;
- (void)setInputParameters:(NSArray *)arg0;
- (void)dealloc;
- (AVAudioMix *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (AVAudioMix *)copyWithZone:(struct _NSZone *)arg0;
- (AVAudioMix *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void)finalize;

@end
