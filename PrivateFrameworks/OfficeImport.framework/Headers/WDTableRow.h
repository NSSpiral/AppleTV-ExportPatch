/* Runtime dump - WDTableRow
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDTableRow : NSObject
{
    unsigned int mIndex;
    WDTable * mTable;
    WDTableRowProperties * mProperties;
    NSMutableArray * mCells;
}

- (void)dealloc;
- (NSString *)description;
- (RMTable *)table;
- (unsigned int)index;
- (NSDictionary *)properties;
- (void)setIndex:(unsigned int)arg0;
- (unsigned int)cellCount;
- (id)cellAt:(unsigned int)arg0;
- (NSObject *)addCell;
- (WDTableRow *)initWithTable:(GKTable *)arg0 at:(unsigned int)arg1;
- (NSObject *)cellIterator;
- (NSObject *)newCellIterator;
- (NSObject *)addCellWithIndex:(unsigned int)arg0;

@end
