/* Runtime dump - AVFigAssetInspectorLoader
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVFigAssetInspectorLoader : AVAssetInspectorLoader
{
    struct OpaqueFigAsset * _figAsset;
    long _figAssetCreationStatus;
    AVWeakReference * _weakReferenceToAsset;
    AVAssetInspector * _assetInspector;
    long _assetInspectorOnce;
    NSObject<OS_dispatch_queue> * _completionHandlerQueue;
    struct OpaqueFigSimpleMutex * _loadingMutex;
    NSMutableArray * _loadingBatches;
    char _loadingCanceled;
    NSURL * _URL;
}

+ (void)_mapAssetKeys:(NSArray *)arg0 toFigAssetPropertySet:(NSSet *)arg1 figAssetTrackPropertySet:(NSSet *)arg2 callerName:(NSString *)arg3;
+ (NSArray *)_figAssetPropertiesForKeys;
+ (NSArray *)_figAssetTrackPropertiesForKeys;

- (struct OpaqueFigAsset *)_figAsset;
- (void)_addFigAssetNotifications;
- (void)_removeFigAssetNotifications;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 keysForCollectionKeys:(NSArray *)arg1 completionHandler:(id /* block */)arg2;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg0;
- (char)isExportable;
- (char)isComposable;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (NSArray *)figChapterGroupInfo;
- (NSArray *)figChapters;
- (AVFigAssetInspectorLoader *)initWithFigAsset:(struct OpaqueFigAsset *)arg0 forAsset:(NSObject *)arg1;
- (AVFigAssetInspectorLoader *)initWithURL:(NSString *)arg0 figAssetCreationFlags:(unsigned long long)arg1 figAssetCreationOptions:(NSDictionary *)arg2 forAsset:(NSObject *)arg3;
- (AVAssetInspector *)assetInspector;
- (struct OpaqueFigSimpleMutex *)_loadingMutex;
- (int)_loadStatusForProperty:(NSString *)arg0 figAsset:(struct OpaqueFigAsset *)arg1 returningError:(int *)arg2;
- (NSOperationQueue *)_completionHandlerQueue;
- (NSMutableArray *)_loadingBatches;
- (void)_invokeCompletionHandlerForLoadingBatches:(id)arg0;
- (char)_isStreaming;
- (void)dealloc;
- (struct ?)duration;
- (NSURL *)URL;
- (unsigned long long)downloadToken;
- (NSString *)lyrics;
- (char)hasProtectedContent;
- (char)isReadable;
- (char)isCompatibleWithSavedPhotosAlbum;
- (int)statusOfValueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (char)isPlayable;
- (void)finalize;
- (void)cancelLoading;
- (NSURL *)resolvedURL;

@end
