/* Runtime dump - WDTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDTable : WDBlock
{
    WDTableProperties * mProperties;
    NSMutableArray * mRows;
}

- (void)clearProperties;
- (void)dealloc;
- (NSString *)description;
- (WDTable *)initWithText:(NSString *)arg0;
- (NSDictionary *)properties;
- (int)blockType;
- (unsigned int)rowCount;
- (id)rowAt:(unsigned int)arg0;
- (id)addRow;
- (int)nestingLevel;
- (NSObject *)rowIterator;
- (NSObject *)newRowIterator;
- (NSObject *)cellIterator;
- (NSObject *)newCellIterator;
- (NSObject *)insertRowAtIndex:(unsigned int)arg0;
- (void)clearRows;
- (NSObject *)newRunIterator;
- (NSObject *)runIterator;

@end
