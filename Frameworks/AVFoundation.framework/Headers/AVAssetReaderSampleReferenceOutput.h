/* Runtime dump - AVAssetReaderSampleReferenceOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput
{
    AVAssetReaderSampleReferenceOutputInternal * _sampleReferenceOutputInternal;
}

@property (readonly, nonatomic) AVAssetTrack * track;

+ (AVAssetReaderSampleReferenceOutput *)assetReaderSampleReferenceOutputWithTrack:(AVAssetTrack *)arg0;

- (NSSet *)_asset;
- (char)_trimsSampleDurations;
- (char)_enableTrackExtractionReturningError:(id *)arg0;
- (AVAssetReaderSampleReferenceOutput *)initWithTrack:(AVAssetTrack *)arg0;
- (void)dealloc;
- (AVAssetReaderSampleReferenceOutput *)init;
- (NSString *)description;
- (NSString *)mediaType;
- (void)finalize;
- (AVAssetTrack *)track;

@end
