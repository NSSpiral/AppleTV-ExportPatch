/* Runtime dump - AVPlaybackItemInspectorLoader
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlaybackItemInspectorLoader : AVAssetMakeReadyForInspectionLoader
{
    struct OpaqueFigPlaybackItem * _playbackItem;
    NSArray * _trackIDs;
    char _shouldCacheDuration;
    struct ? _cachedDuration;
}

@property (readonly, nonatomic) struct OpaqueFigPlaybackItem * playbackItem;

- (AVPlaybackItemInspectorLoader *)initWithURL:(NSString *)arg0 playbackItem:(struct OpaqueFigPlaybackItem *)arg1 trackIDs:(NSArray *)arg2 dynamicBehavior:(char)arg3;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (Class)_classForTrackInspectors;
- (AVAssetInspector *)assetInspector;
- (struct OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)arg0;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (char)_inspectionRequiresAFormatReader;
- (NSArray *)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(NSArray *)arg0;
- (void)_addFigObjectNotifications;
- (void)_removeFigObjectNotifications;
- (NSArray *)_playbackItemPropertiesForKeys:(NSArray *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (struct ?)duration;
- (void)finalize;
- (void)cancelLoading;

@end
