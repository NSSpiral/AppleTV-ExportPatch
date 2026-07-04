/* Runtime dump - MKQuadTrie
 * Image: /System/Library/Frameworks/MapKit.framework/MapKit
 */

@interface MKQuadTrie : NSObject
{
    unsigned int _maxItems;
    struct ? _minSize;
    struct ? _initialRegion;
    void * __root;
}

- (MKQuadTrie *)initWithInitialRegion:(struct ?)arg0 minimumSize:(struct ?)arg1 maximumItems:(NSArray *)arg2;
- (void)foreach:(ODXForEach *)arg0;
- (void)insert:(_NSOrderedSetDiffInsert *)arg0;
- (NSObject *)itemsInMapRect:(struct ?)arg0;
- (id)itemsPassingRectTest:(id /* block */)arg0 coordinateTest:(/* block */ id)arg1;
- (void)clearAllItemsPerforming:(id)arg0;
- (NSObject *)_itemsInMapRect:(struct ?)arg0;
- (NSString *)breadthFirstDescription;
- (NSString *)depthFirstDescription;
- (id)itemDescriptions;
- (void)dealloc;
- (unsigned int)count;
- (NSString *)description;
- (void).cxx_construct;
- (NSArray *)allItems;
- (char)contains:(id)arg0;
- (char)remove:(NSIndexSet *)arg0;

@end
