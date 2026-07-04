/* Runtime dump - TSTCellMapIterator
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellMapIterator : NSObject
{
    TSTCellMap * _cellMap;
    TSTCellUIDIterator * _cellUIDIterator;
    unsigned int _index;
    char _oneToMany;
    struct TSTCellUID _currentCellUID;
    TSTCell * _currentCell;
}

- (TSTCellMapIterator *)initWithCellMap:(TSTCellMap *)arg0;
- (struct pair<TSTCell *, TSTCellUID>)nextCellAndCellUID;
- (struct TSTCellUID *)currentCellUID;
- (TSTCell *)currentCell;
- (void).cxx_construct;

@end
