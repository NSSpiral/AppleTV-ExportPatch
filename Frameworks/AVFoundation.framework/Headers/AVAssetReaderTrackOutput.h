/* Runtime dump - AVAssetReaderTrackOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput
{
    AVAssetReaderTrackOutputInternal * _trackOutputInternal;
}

@property (readonly, nonatomic) AVAssetTrack * track;
@property (readonly, nonatomic) NSDictionary * outputSettings;
@property (copy, nonatomic) NSString * audioTimePitchAlgorithm;
@property (nonatomic) char appliesPreferredTrackTransform;
@property (readonly, nonatomic) char attachedToMetadataAdaptor;

+ (AVAssetReaderTrackOutput *)assetReaderTrackOutputWithTrack:(AVAssetTrack *)arg0 outputSettings:(NSDictionary *)arg1;

- (NSSet *)_asset;
- (char)appliesPreferredTrackTransform;
- (char)_isAttachedToMetadataAdaptor;
- (void)_attachToMetadataAdaptor:(id)arg0;
- (struct opaqueCMSampleBuffer *)_copyNextSampleBufferForMetadataAdaptor;
- (NSString *)audioTimePitchAlgorithm;
- (void)setAudioTimePitchAlgorithm:(NSString *)arg0;
- (char)_trimsSampleDurations;
- (char)_enableTrackExtractionReturningError:(id *)arg0;
- (NSDictionary *)_figAssetReaderExtractionOptions;
- (AVAssetReaderTrackOutput *)initWithTrack:(AVAssetTrack *)arg0 outputSettings:(NSDictionary *)arg1;
- (void)dealloc;
- (AVAssetReaderTrackOutput *)init;
- (NSString *)description;
- (NSDictionary *)outputSettings;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)setAppliesPreferredTrackTransform:(char)arg0;
- (NSString *)mediaType;
- (void)finalize;
- (AVAssetTrack *)track;

@end
