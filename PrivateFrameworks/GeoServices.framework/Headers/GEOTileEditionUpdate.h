/* Runtime dump - GEOTileEditionUpdate
 * Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOTileEditionUpdate : NSObject
{
    NSMutableArray * _entries;
    char _flushEverything;
    char _invalidateEverything;
}

@property (nonatomic) char flushEverything;
@property (nonatomic) char invalidateEverything;

- (void)dealloc;
- (GEOTileEditionUpdate *)init;
- (char)invalidateEverything;
- (char)flushEverything;
- (unsigned int)tilesetCount;
- (void)tileset:(unsigned int *)arg0 edition:(unsigned int *)arg1 provider:(unsigned int *)arg2 invalidateOnly:(char *)arg3 atIndex:(unsigned int)arg4;
- (void)setFlushEverything:(char)arg0;
- (void)addTileset:(unsigned int)arg0 edition:(unsigned int)arg1 provider:(unsigned int)arg2 invalidateOnly:(char)arg3;
- (void)setInvalidateEverything:(char)arg0;

@end
