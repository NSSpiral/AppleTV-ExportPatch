/* Runtime dump - VKMapTileList
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKMapTileList : NSObject
{
    struct vector<VKMapTile *, std::__1::allocator<VKMapTile *> > _list;
    float _maximumStyleZ;
}

@property (readonly, nonatomic) id * tileList;
@property (readonly, nonatomic) unsigned int numTiles;
@property (readonly, nonatomic) float maximumStyleZ;

- (VKMapTileList *)init;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)clearList;
- (void)addTileToList:(NSArray *)arg0;
- (void)consolidateList;
- (float)maximumStyleZ;
- (unsigned int)numTiles;
- (id *)tileList;

@end
