/* Runtime dump - TSTCellDictionary
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTCellDictionary : NSObject
{
    TSUIntegerKeyDictionary * mDict;
    struct _opaque_pthread_rwlock_t mDictRWLock;
}

- (NSObject *)cellAtCellID:(struct ?)arg0;
- (void)setCell:(NSObject *)arg0 atCellID:(struct ?)arg1;
- (void)removeAllCells;
- (id)allCells;
- (void)applyBlockToAllCells:(id)arg0;
- (void)dealloc;
- (TSTCellDictionary *)init;

@end
