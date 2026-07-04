/* Runtime dump - VKScene
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKScene : NSObject <NSCopying>
{
    NSSet * _tilesToRender;
    NSSet * _neighborTiles;
    VKTileKeyList * _keysInView;
    VKTileKeyList * _neighborKeys;
    GEOTileKeyList * _debugKeyList;
    char _fullyLoaded;
    char _mapIsOpaque;
    NSMutableArray * _rasterOverlayScenes;
}

@property (retain, nonatomic) NSSet * tilesToRender;
@property (retain, nonatomic) NSSet * neighborTiles;
@property (nonatomic) char fullyLoaded;
@property (nonatomic) char mapIsOpaque;
@property (retain, nonatomic) VKTileKeyList * keysInView;
@property (retain, nonatomic) VKTileKeyList * neighborKeys;
@property (retain, nonatomic) GEOTileKeyList * debugKeyList;

- (void)dealloc;
- (void)reset;
- (VKScene *)copyWithZone:(struct _NSZone *)arg0;
- (NSSet *)tilesToRender;
- (NSSet *)neighborTiles;
- (void)setTilesToRender:(NSSet *)arg0;
- (void)setNeighborTiles:(NSSet *)arg0;
- (void)setFullyLoaded:(char)arg0;
- (void)setMapIsOpaque:(char)arg0;
- (VKTileKeyList *)keysInView;
- (void)setKeysInView:(VKTileKeyList *)arg0;
- (VKTileKeyList *)neighborKeys;
- (void)setNeighborKeys:(VKTileKeyList *)arg0;
- (void)setDebugKeyList:(GEOTileKeyList *)arg0;
- (void)clearRasterOverlayScenes;
- (void)addRasterOverlayScene:(NSObject *)arg0;
- (char)fullyLoaded;
- (GEOTileKeyList *)debugKeyList;
- (char)mapIsOpaque;
- (id)rasterOverlaySceneAtLevel:(unsigned int)arg0;

@end
