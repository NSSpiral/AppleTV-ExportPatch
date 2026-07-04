/* Runtime dump - MKTileOverlay
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKTileOverlay : NSObject <MKOverlay>
{
    NSString * _URLTemplate;
    struct CGSize _tileSize;
    char _geometryFlipped;
    int _minimumZ;
    int _maximumZ;
    char _canReplaceMapContent;
    unsigned int _providerID;
    GEOTileCache * _tileCache;
}

@property struct CGSize tileSize;
@property char geometryFlipped;
@property int minimumZ;
@property int maximumZ;
@property (readonly) NSString * URLTemplate;
@property (nonatomic) char canReplaceMapContent;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) struct ? coordinate;
@property (readonly, copy, nonatomic) NSString * title;
@property (readonly, copy, nonatomic) NSString * subtitle;
@property (readonly, nonatomic) struct ? boundingMapRect;

- (struct ?)boundingMapRect;
- (char)canReplaceMapContent;
- (MKTileOverlay *)initWithURLTemplate:(NSString *)arg0;
- (void)_assignProviderID;
- (NSString *)URLForTilePath:(struct ?)arg0;
- (struct _GEOTileKey)_keyForPath:(struct ?)arg0;
- (int)_zoomLevelForScale:(float)arg0;
- (void)loadTileAtPath:(struct ?)arg0 result:(NSObject *)arg1;
- (void)_loadTile:(id)arg0 result:(NSObject *)arg1;
- (NSObject *)_tilesInMapRect:(struct ?)arg0 zoomScale:(struct ?)arg1 contentScale:(float)arg2;
- (void)_flushCaches;
- (NSString *)URLTemplate;
- (void)setMinimumZ:(int)arg0;
- (void)setMaximumZ:(int)arg0;
- (void)setCanReplaceMapContent:(char)arg0;
- (void)dealloc;
- (MKTileOverlay *)init;
- (void)setTileSize:(struct CGSize)arg0;
- (void).cxx_construct;
- (struct CGSize)tileSize;
- (void).cxx_destruct;
- (char)isGeometryFlipped;
- (void)setGeometryFlipped:(char)arg0;
- (int)minimumZ;
- (int)maximumZ;
- (struct ?)coordinate;

@end
