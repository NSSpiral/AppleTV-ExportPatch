/* Runtime dump - TSCHChartGrid
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartGrid : NSObject <NSCopying, TSDMixing>
{
    <TSCHNotifyOnModify> * mModifyDelegate;
    int mDirection;
    NSMutableArray * mRowNames;
    NSMutableArray * mColumnNames;
    NSMutableArray * mValues;
    char mDirty;
    char mAddingMultipleRows;
    unsigned int mNextRowNumber;
    char mAddingMultipleCols;
    unsigned int mNextColNumber;
    NSMutableArray * mRowIds;
    NSMutableArray * mColumnIds;
}

@property (nonatomic) <TSCHNotifyOnModify> * objectToNotify;
@property (nonatomic) int direction;
@property (nonatomic) char dirty;
@property (readonly, nonatomic) unsigned int numberOfRows;
@property (readonly, nonatomic) unsigned int numberOfColumns;
@property (readonly, nonatomic) NSArray * rowIds;
@property (readonly, nonatomic) NSArray * columnIds;

- (void)willModify;
- (id)nameForRow:(unsigned int)arg0;
- (void)setNameForRow:(unsigned int)arg0 toName:(NSString *)arg1;
- (id)nameForColumn:(unsigned int)arg0;
- (void)setNameForColumn:(unsigned int)arg0 toName:(NSString *)arg1;
- (void)p_generateRowColumnIdMaps;
- (<TSCHNotifyOnModify> *)objectToNotify;
- (char)contentsEqualToGrid:(id)arg0;
- (char)p_name:(NSString *)arg0 isInArray:(NSArray *)arg1;
- (NSNumber *)createUUIDArrayWithCount:(unsigned int)arg0;
- (id)createUUID;
- (NSArray *)p_uuidsForRows:(struct _NSRange)arg0;
- (NSArray *)extractRowNames:(struct _NSRange)arg0 returningRowIds:(id *)arg1 valueRows:(id *)arg2;
- (void)insertRowsAt:(unsigned int)arg0 names:(DAAccountClassNames *)arg1 data:(NSData *)arg2 withIds:(void *)arg3;
- (NSArray *)p_uuidsForColumns:(struct _NSRange)arg0;
- (NSArray *)extractColumnNames:(struct _NSRange)arg0 returningColumnIds:(id *)arg1 valueColumns:(id *)arg2;
- (void)insertColumnsAt:(unsigned int)arg0 names:(DAAccountClassNames *)arg1 data:(NSData *)arg2 withIds:(void *)arg3;
- (void)takeDataFromDictionary:(NSDictionary *)arg0 rowIds:(NSArray *)arg1 columnIds:(NSArray *)arg2;
- (NSArray *)rowIds;
- (NSArray *)columnIds;
- (void)removeColumn:(unsigned int)arg0;
- (void)removeRow:(unsigned int)arg0;
- (void)insertRow:(unsigned int)arg0 withName:(NSString *)arg1 withId:(NSObject *)arg2;
- (void)insertColumn:(unsigned int)arg0 withName:(NSString *)arg1 withId:(NSObject *)arg2;
- (void)setValue:(NSObject *)arg0 forRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (id)valueForRow:(unsigned int)arg0 column:(unsigned int)arg1;
- (NSObject *)mixedObjectWithFraction:(float)arg0 ofObject:(NSObject *)arg1;
- (int)mixingTypeWithObject:(NSObject *)arg0 context:(NSObject *)arg1;
- (id *)valuesForRow:(unsigned int)arg0 columns:(struct _NSRange)arg1;
- (id *)valuesForRows:(struct _NSRange)arg0 column:(unsigned int)arg1;
- (id)rowIdForRow:(unsigned int)arg0;
- (id)columnIdForColumn:(unsigned int)arg0;
- (unsigned int)rowIndexForRowId:(NSObject *)arg0;
- (unsigned int)columnIndexForColumnId:(NSObject *)arg0;
- (void)addingMultipleRows:(char)arg0;
- (void)addingMultipleCols:(char)arg0;
- (NSString *)getNewColumnName;
- (NSString *)getNewRowName;
- (void)moveRows:(struct _NSRange)arg0 afterRow:(int)arg1;
- (void)moveColumns:(struct _NSRange)arg0 afterColumn:(int)arg1;
- (NSArray *)extractGridValuesReturningRowNames:(id *)arg0 rowIds:(id *)arg1 columnNames:(id *)arg2 columnIds:(id *)arg3;
- (void)insertRowsNames:(id)arg0 at:(unsigned int)arg1 withIds:(void *)arg2;
- (void)insertColumnNames:(id)arg0 at:(unsigned int)arg1 withIds:(void *)arg2;
- (void)takeDataFromDictionary:(NSDictionary *)arg0;
- (id)gridAdapterForRow:(unsigned int)arg0;
- (id)gridAdapterForColumn:(unsigned int)arg0;
- (NSNumber *)gridAdapterForRowCount;
- (NSNumber *)gridAdapterForColumnCount;
- (id)gridAdapterForRowConstant;
- (id)gridAdapterForColumnConstant;
- (char)isEquivalentForCrossDocumentPasteMasterComparison:(id)arg0;
- (void)setObjectToNotify:(<TSCHNotifyOnModify> *)arg0;
- (void)loadFromPreUFFArchive:(struct ChartGridArchive *)arg0;
- (void)insertRow:(unsigned int)arg0 withName:(NSString *)arg1;
- (void)insertColumn:(unsigned int)arg0 withName:(NSString *)arg1;
- (void)loadFromUnityArchive:(struct ChartArchive *)arg0;
- (void)saveToUnityArchive:(struct ChartArchive *)arg0 forCopy:(struct /* ? */)arg1;
- (void)setDirty:(char)arg0;
- (char)dirty;
- (void)dealloc;
- (TSCHChartGrid *)init;
- (NSString *)description;
- (unsigned int)numberOfColumns;
- (TSCHChartGrid *)copyWithZone:(struct _NSZone *)arg0;
- (void)setDirection:(int)arg0;
- (int)direction;
- (unsigned int)numberOfRows;

@end
