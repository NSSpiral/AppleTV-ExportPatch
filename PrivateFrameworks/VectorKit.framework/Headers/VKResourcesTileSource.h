/* Runtime dump - VKResourcesTileSource
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKResourcesTileSource : VKTileSource
{
    GEOTileKeyMap * _keyToKeysMap;
}

- (void)dealloc;
- (int)tileSize;
- (VKResourcesTileSource *)initWithResourceManifestConfiguration:(GEOResourceManifestDownload *)arg0 locale:(NSLocale *)arg1;
- (char)minimumZoomLevelBoundsCamera;
- (char)maximumZoomLevelBoundsCamera;
- (NSData *)tileForData:(NSData *)arg0 downloadKey:(struct _GEOTileKey *)arg1 sourceKey:(struct _GEOTileKey)arg2;
- (unsigned int)minimumDownloadZoomLevel;
- (char)canFetchTileForKey:(struct VKTileKey *)arg0;
- (struct VKTileKey)sourceKeyForRenderKey:(struct VKTileKey *)arg0;
- (unsigned int)maximumDownloadZoomLevel;
- (int)zEquivalenceClass;
- (id)tileLoader;
- (struct _GEOTileKey)downloadKeyAtX:(unsigned int)arg0 y:(unsigned int)arg1 z:(unsigned int)arg2;
- (void)performDownload:(struct _GEOTileKey *)arg0;
- (void)cancelDownload:(struct _GEOTileKey *)arg0;

@end
