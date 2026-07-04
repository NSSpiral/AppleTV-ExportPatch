/* Runtime dump - AVPlaybackItemInspector
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaybackItemInspector : AVAssetInspector
{
    struct OpaqueFigPlaybackItem * _playbackItem;
    NSArray * _trackIDs;
}

@property (retain, nonatomic) struct OpaqueFigPlaybackItem * playbackItem;

- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (char)providesPreciseDurationAndTiming;
- (NSArray *)trackIDs;
- (NSArray *)availableMetadataFormats;
- (NSString *)metadataForFormat:(NSString *)arg0;
- (NSObject *)compatibleTrackForCompositionTrack:(NSObject *)arg0;
- (void *)_valueAsCFTypeForProperty:(struct __CFString *)arg0;
- (void)_setPlaybackItem:(struct OpaqueFigPlaybackItem *)arg0;
- (AVPlaybackItemInspector *)initWithPlaybackItem:(struct OpaqueFigPlaybackItem *)arg0 trackIDs:(NSArray *)arg1;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (struct ?)duration;
- (struct CGSize)naturalSize;
- (NSString *)lyrics;
- (long)trackCount;
- (NSArray *)commonMetadata;
- (void)finalize;

@end
