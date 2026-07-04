/* Runtime dump - EDPivotItem
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPivotItem : NSObject
{
    unsigned int mRepeatedItemCounts;
    int mType;
    EDCollection * mItemIndexes;
}

+ (<MFDraggableItem> *)pivotItem;

- (void)dealloc;
- (EDPivotItem *)init;
- (void)setType:(int)arg0;
- (int)type;
- (unsigned int)repeatedItemCounts;
- (void)setRepeatedItemCounts:(unsigned int)arg0;
- (NSIndexSet *)itemIndexes;

@end
