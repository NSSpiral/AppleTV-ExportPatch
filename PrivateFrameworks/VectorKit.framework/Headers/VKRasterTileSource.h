/* Runtime dump - VKRasterTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKRasterTileSource : VKTileSetBackedTileSource
{
    NSMutableDictionary * _genericTextureCache;
    struct /* ? */ _gglGenericRasterTextureCache;
}

- (void)dealloc;
- (void).cxx_construct;
- (void).cxx_destruct;
- (VKRasterTileSource *)initWithTileSet:(GEOActiveTileSet *)arg0 resourceManifestConfiguration:(NSDictionary *)arg1 locale:(NSObject *)arg2;
- (void)clearCaches;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (void)_fetchedTile:(id)arg0;
- (void)decodeData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;

@end
