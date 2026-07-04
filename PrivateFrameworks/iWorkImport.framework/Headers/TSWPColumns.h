/* Runtime dump - TSWPColumns
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSWPColumns : NSObject
{
    unsigned int _columnCount;
    char _equalWidth;
    id _widthArray;
    id _gapArray;
}

@property (nonatomic) unsigned int columnCount;
@property (nonatomic) char equalWidth;

+ (NSArray *)columns;

- (void)saveToArchive:(struct ColumnsArchive *)arg0 archiver:(NSObject *)arg1;
- (TSWPColumns *)initWithArchive:(struct ColumnsArchive *)arg0 unarchiver:(struct ColumnsArchive)arg1;
- (float)widthForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (float)gapForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1;
- (char)equalWidth;
- (float)positionForColumnIndex:(unsigned int)arg0 bodyWidth:(float)arg1 outWidth:(float *)arg2 outGap:(float *)arg3;
- (TSWPColumns *)initWithColumnCount:(unsigned int)arg0;
- (void)p_setColumnCount:(unsigned int)arg0 gapFraction:(float)arg1;
- (TSWPColumns *)initWithColumnCount:(unsigned int)arg0 equalWidth:(char)arg1 widthArray:(float *)arg2 gapArray:(float *)arg3;
- (TSWPColumns *)initWithEqualColumnCount:(unsigned int)arg0 gapFraction:(float)arg1;
- (void)p_setEqualWidth:(float)arg0 equalGap:(float)arg1;
- (float)p_equalGapForEqualWidth:(float)arg0;
- (float)p_maxEqualGapForBodyWidth:(float)arg0;
- (float)p_equalWidthForEqualGap:(float)arg0;
- (void)setEqualWidth:(char)arg0;
- (void)setWidth:(float)arg0 forColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (void)setGap:(float)arg0 forColumnIndex:(unsigned int)arg1 bodyWidth:(float)arg2;
- (TSWPColumns *)init;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)description;
- (TSWPColumns *)copyWithZone:(struct _NSZone *)arg0;
- (unsigned int)columnCount;
- (void)setColumnCount:(unsigned int)arg0;

@end
