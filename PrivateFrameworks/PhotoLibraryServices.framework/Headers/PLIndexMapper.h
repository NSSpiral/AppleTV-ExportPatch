/* Runtime dump - PLIndexMapper
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLIndexMapper : NSObject
{
    <PLIndexMapperDataSource> * _dataSource;
}

- (PLIndexMapper *)initWithDataSource:(<PLIndexMapperDataSource> *)arg0;
- (char)applyContainerChangeNotification:(NSNotification *)arg0 changeTypes:(int)arg1 toFilteredIndexes:(NSArray *)arg2;
- (unsigned int)indexForBackingIndex:(unsigned int)arg0;
- (unsigned int)backingIndexForIndex:(unsigned int)arg0;
- (NSIndexSet *)backingIndexesForIndexes:(NSArray *)arg0;
- (NSIndexSet *)indexesForBackingIndexes:(NSArray *)arg0;

@end
