/* Runtime dump - EDTableFilterColumn
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTableFilterColumn : NSObject
{
    unsigned int mColumnIndex;
    NSMutableArray * mFilters;
    int mFiltersRelation;
}

- (void)dealloc;
- (EDTableFilterColumn *)init;
- (void)setColumnIndex:(unsigned int)arg0;
- (unsigned int)filterCount;
- (NSObject *)filterAtIndex:(unsigned int)arg0;
- (void)addFilter:(NSObject *)arg0;
- (unsigned int)columnIndex;
- (int)filtersRelation;
- (void)setFiltersRelation:(int)arg0;

@end
