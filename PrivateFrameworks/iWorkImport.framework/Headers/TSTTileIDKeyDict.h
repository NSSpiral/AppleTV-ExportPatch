/* Runtime dump - TSTTileIDKeyDict
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTileIDKeyDict : TSPContainedObject
{
    struct /* ? */ * mMap;
}

- (void)saveToArchive:(struct TileStorage *)arg0 archiver:(NSObject *)arg1;
- (TSTTileIDKeyDict *)initWithArchive:(struct TileStorage *)arg0 unarchiver:(struct TileStorage)arg1 owner:(NSObject *)arg2;
- (NSObject *)tileForID:(struct ?)arg0;
- (void)setTile:(VKLabelTile *)arg0 forID:(struct ?)arg1;
- (void)removeTileForID:(struct ?)arg0;
- (void)applyFunction:(/* block */ id *)arg0 withState:(void *)arg1;
- (void)makeTilesPerformSelector:(SEL)arg0;
- (TSTTileIDKeyDict *)initWithOwner:(TSPObject *)arg0;
- (void)dealloc;
- (int)count;
- (void)removeAllTiles;

@end
