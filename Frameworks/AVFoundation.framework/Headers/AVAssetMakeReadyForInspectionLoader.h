/* Runtime dump - AVAssetMakeReadyForInspectionLoader
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetMakeReadyForInspectionLoader : AVAssetInspectorLoader
{
    AVAssetInspector * _assetInspector;
    struct OpaqueFigFormatReader * _formatReader;
    struct OpaqueFigSimpleMutex * _loadingMutex;
    NSMutableArray * _keysAwaitingCompletion;
    int _status;
    long _basicInspectionFailureCode;
    NSURL * _URL;
}

- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (void)_serverHasDied;
- (char)isExportable;
- (char)isComposable;
- (struct OpaqueFigFormatReader *)_formatReader;
- (NSArray *)figChapterGroupInfo;
- (AVAssetInspector *)assetInspector;
- (int)_status;
- (void)_setStatus:(int)arg0 figErrorCode:(long)arg1;
- (struct OpaqueFigFormatReader *)_copyFormatReaderFromFigObjectWithFigErrorCode:(int *)arg0;
- (id)_dictionaryOfSpecialGettersForKeyValueStatus;
- (int)_statusOfValueWhileMutexLockedForKey:(NSString *)arg0 error:(id *)arg1;
- (char)_statusOfValuesIsTerminalWhileMutexLockedForKeys:(NSArray *)arg0;
- (char)_inspectionRequiresAFormatReader;
- (char)_updateStatusWhileMutexLocked:(int)arg0 figErrorCode:(long)arg1;
- (id)_getAndPruneCompletionsWhileMutexLocked;
- (NSArray *)_dictionaryOfSpecialLoadingMethodsForKeys;
- (NSArray *)_loadValuesUsingDefaultLoadingMethodWhileMutexLockedForKeys:(NSArray *)arg0;
- (NSArray *)_loadValuesWhileMutexLockedForKeys:(NSArray *)arg0;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (char)_providesAccurateTiming;
- (id)_statusOfValueForKeyThatIsAlwaysLoaded;
- (char)_isStreaming;
- (void)dealloc;
- (struct ?)duration;
- (AVAssetMakeReadyForInspectionLoader *)copyWithZone:(struct _NSZone *)arg0;
- (AVAssetMakeReadyForInspectionLoader *)initWithURL:(NSString *)arg0;
- (NSURL *)URL;
- (NSString *)lyrics;
- (char)hasProtectedContent;
- (char)isReadable;
- (int)statusOfValueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (char)isPlayable;
- (void)finalize;
- (void)cancelLoading;

@end
