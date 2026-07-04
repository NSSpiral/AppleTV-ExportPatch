/* Runtime dump - TSTTableSortOrder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTTableSortOrder : NSObject <NSCopying>
{
    NSIndexSet * mCachedIndices;
    int mType;
    NSArray * mRules;
}

@property (readonly, nonatomic) NSArray * rules;
@property (readonly, nonatomic) int type;
@property (readonly, nonatomic) NSIndexSet * columnIndices;
@property (readonly, nonatomic) char empty;
@property (readonly, nonatomic) unsigned int ruleCount;

+ (NSArray *)sortOrderWithRules:(NSArray *)arg0 type:(int)arg1;
+ (TSTTableSortOrder *)sortOrderWithColumn:(unsigned char)arg0 direction:(int)arg1 type:(int)arg2;

- (void)encodeToArchive:(struct TableSortOrderArchive *)arg0;
- (TSTTableSortOrder *)initFromArchive:(struct TableSortOrderArchive *)arg0;
- (TSTTableSortOrder *)initWithRules:(NSArray *)arg0 type:(int)arg1;
- (NSIndexSet *)columnIndices;
- (id)sortOrderByChangingTypeTo:(int)arg0;
- (NSObject *)sortOrderByAddingRule:(NSObject *)arg0;
- (NSObject *)sortOrderByRemovingRuleAtIndex:(unsigned int)arg0;
- (NSObject *)sortOrderByReplacingRuleAtIndex:(unsigned int)arg0 withRule:(NSObject *)arg1;
- (NSArray *)sortOrderByReplacingRulesWithRules:(NSArray *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (int)type;
- (TSTTableSortOrder *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)ruleCount;
- (NSArray *)rules;
- (char)empty;

@end
