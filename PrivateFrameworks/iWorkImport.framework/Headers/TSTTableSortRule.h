/* Runtime dump - TSTTableSortRule
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableSortRule : NSObject <NSCopying>
{
    unsigned char mColumnIndex;
    int mDirection;
}

@property (readonly, nonatomic) unsigned char columnIndex;
@property (readonly, nonatomic) int direction;

+ (NSObject *)ruleWithColumnIndex:(unsigned char)arg0 direction:(int)arg1;

- (void)encodeToArchive:(struct TableSortOrderArchive_SortRuleArchive *)arg0;
- (TSTTableSortRule *)initFromArchive:(struct TableSortOrderArchive_SortRuleArchive *)arg0;
- (TSTTableSortRule *)initWithColumnIndex:(unsigned char)arg0 direction:(int)arg1;
- (id)ruleByChangingColumnIndexTo:(unsigned char)arg0;
- (id)ruleByChangingDirectionTo:(int)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (TSTTableSortRule *)copyWithZone:(struct _NSZone *)arg0;
- (int)direction;
- (unsigned char)columnIndex;

@end
