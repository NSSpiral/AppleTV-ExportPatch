/* Runtime dump - AVAssetProxy
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVAssetProxy : AVAsset
{
    AVAssetProxyInternal * _assetProxy;
}

+ (NSString *)makePropertyListForMovieProxyHeader:(NSString *)arg0 name:(NSString *)arg1;
+ (AVAssetProxy *)assetProxyWithPropertyList:(NSArray *)arg0;

- (struct OpaqueFigAsset *)_figAsset;
- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (AVAssetProxy *)initWithPropertyList:(NSArray *)arg0;
- (void)dealloc;
- (char)isProxy;
- (NSArray *)tracks;
- (void)finalize;

@end
