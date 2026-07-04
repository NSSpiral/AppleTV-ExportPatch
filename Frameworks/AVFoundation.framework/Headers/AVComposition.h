/* Runtime dump - AVComposition
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVComposition : AVAsset <NSMutableCopying>
{
    AVCompositionInternal * _priv;
}

@property (readonly, nonatomic) NSArray * tracks;
@property (readonly, nonatomic) struct CGSize naturalSize;

+ (void)initialize;

- (id)_assetInspectorLoader;
- (id)_assetInspector;
- (struct OpaqueFigFormatReader *)_formatReader;
- (Class)_classForTrackInspectors;
- (struct OpaqueFigMutableComposition *)_mutableComposition;
- (AVComposition *)_initWithComposition:(AVComposition *)arg0;
- (void)_loadAssetInspectorAndLoaderOnce;
- (NSObject *)_newTrackForIndex:(long)arg0;
- (NSArray *)_mutableTracks;
- (long)_createEmptyMutableCompositionIfNeeded;
- (void)_setNaturalSize:(struct CGSize)arg0;
- (void)dealloc;
- (AVComposition *)init;
- (NSString *)description;
- (AVComposition *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (struct CGSize)naturalSize;
- (NSArray *)tracks;
- (void)finalize;

@end
