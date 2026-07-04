/* Runtime dump - VKLabelTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKLabelTileSource : VKTileSetBackedTileSource
{
    struct shared_ptr<vk::LabelManager> _labelManager;
    char _localizeLabels;
    int _labelScaleFactor;
}

@property (nonatomic) char localizeLabels;
@property (nonatomic) int labelScaleFactor;

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (char)localizeLabels;
- (void)setLocalizeLabels:(char)arg0;
- (int)labelScaleFactor;
- (void)setLabelScaleFactor:(int)arg0;
- (VKLabelTileSource *)initWithTileSet:(GEOActiveTileSet *)arg0 resourceManifestConfiguration:(NSDictionary *)arg1 locale:(NSObject *)arg2 labelManager:(struct shared_ptr<vk::LabelManager> *)arg3;
- (char)minimumZoomLevelBoundsCamera;
- (char)maximumZoomLevelBoundsCamera;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (int)defaultMaximumZoomLevel;
- (unsigned char)_labelTileType;

@end
