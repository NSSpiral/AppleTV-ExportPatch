/* Runtime dump - AVAssetReaderAudioMixOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput
{
    AVAssetReaderAudioMixOutputInternal * _audioMixOutputInternal;
}

@property (readonly, nonatomic) NSArray * audioTracks;
@property (readonly, nonatomic) NSDictionary * audioSettings;
@property (copy, nonatomic) AVAudioMix * audioMix;
@property (copy, nonatomic) NSString * audioTimePitchAlgorithm;

+ (AVAssetReaderAudioMixOutput *)assetReaderAudioMixOutputWithAudioTracks:(NSArray *)arg0 audioSettings:(NSDictionary *)arg1;

- (NSSet *)_asset;
- (AVAudioMix *)audioMix;
- (void)setAudioMix:(AVAudioMix *)arg0;
- (NSString *)audioTimePitchAlgorithm;
- (void)setAudioTimePitchAlgorithm:(NSString *)arg0;
- (char)_enableTrackExtractionReturningError:(id *)arg0;
- (NSArray *)audioTracks;
- (AVAssetReaderAudioMixOutput *)initWithAudioTracks:(NSArray *)arg0 audioSettings:(NSDictionary *)arg1;
- (NSDictionary *)audioSettings;
- (void)_setAudioVolumeCurve:(id)arg0 forTrack:(NSObject *)arg1;
- (void)_setAudioTimePitchAlgorithm:(id)arg0 forTrack:(NSObject *)arg1;
- (void)_setAudioTapProcessor:(struct opaqueMTAudioProcessingTap *)arg0 forTrack:(NSObject *)arg1;
- (NSObject *)_audioVolumeCurveForTrack:(NSObject *)arg0;
- (NSObject *)_audioTimePitchAlgorithmForTrack:(NSObject *)arg0;
- (struct opaqueMTAudioProcessingTap *)_audioTapProcessorForTrack:(NSObject *)arg0;
- (void)dealloc;
- (AVAssetReaderAudioMixOutput *)init;
- (NSString *)description;
- (NSString *)mediaType;
- (void)finalize;

@end
