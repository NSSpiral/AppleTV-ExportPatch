/* Runtime dump - AVAssetInspectorLoader
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetInspectorLoader : NSObject <NSCopying, AVAsynchronousKeyValueLoading>
{
    AVWeakReference * _weakReference;
}

@property (readonly, nonatomic) NSURL * URL;
@property (readonly, nonatomic) struct OpaqueFigFormatReader * formatReader;
@property (readonly, nonatomic) struct OpaqueFigAsset * figAsset;
@property (readonly, nonatomic) struct OpaqueFigPlaybackItem * playbackItem;
@property (readonly, nonatomic) Class classForTrackInspectors;
@property (readonly, nonatomic) struct ? duration;
@property (readonly, nonatomic) NSString * lyrics;
@property (readonly, nonatomic) char playable;
@property (readonly, nonatomic) char exportable;
@property (readonly, nonatomic) char readable;
@property (readonly, nonatomic) char composable;
@property (readonly, nonatomic) char compatibleWithSavedPhotosAlbum;
@property (readonly, nonatomic) NSArray * figChapterGroupInfo;
@property (readonly, nonatomic) NSArray * figChapters;
@property (readonly, nonatomic) NSURL * resolvedURL;
@property (readonly, nonatomic) unsigned long long downloadToken;
@property (readonly, nonatomic) char hasProtectedContent;
@property (readonly, nonatomic) char streaming;
@property (readonly, nonatomic) AVWeakReference * weakReference;

+ (void)initialize;

- (struct OpaqueFigAsset *)_figAsset;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 keysForCollectionKeys:(NSArray *)arg1 completionHandler:(id /* block */)arg2;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (void)_ensureAllDependenciesOfKeyAreLoaded:(id)arg0;
- (void)_serverHasDied;
- (char)isExportable;
- (char)isComposable;
- (AVWeakReference *)_weakReference;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (NSArray *)figChapterGroupInfo;
- (NSArray *)figChapters;
- (AVAssetInspector *)assetInspector;
- (NSError *)_mapFigErrorCodeToNSError:(long)arg0;
- (char)_isStreaming;
- (void)dealloc;
- (AVAssetInspectorLoader *)init;
- (struct ?)duration;
- (AVAssetInspectorLoader *)copyWithZone:(struct _NSZone *)arg0;
- (NSURL *)URL;
- (unsigned long long)downloadToken;
- (NSString *)lyrics;
- (char)hasProtectedContent;
- (char)isReadable;
- (char)isCompatibleWithSavedPhotosAlbum;
- (int)statusOfValueForKey:(NSString *)arg0 error:(id *)arg1;
- (void)loadValuesAsynchronouslyForKeys:(NSArray *)arg0 completionHandler:(id /* block */)arg1;
- (char)isPlayable;
- (void)cancelLoading;
- (NSURL *)resolvedURL;

@end
