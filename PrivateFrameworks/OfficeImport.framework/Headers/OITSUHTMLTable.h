/* Runtime dump - OITSUHTMLTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OITSUHTMLTable : NSObject
{
    NSMutableDictionary * _columnAttributes;
    NSMutableDictionary * _rowClasses;
    NSMutableDictionary * _cellAttributes;
    NSMutableArray * _columnHeaders;
    NSMutableArray * _rows;
    unsigned int _rowClassStride;
}

@property (readonly, nonatomic) unsigned int lastRowIndex;
@property (readonly, nonatomic) unsigned int count;
@property (nonatomic) unsigned int rowClassStride;

+ (NSObject *)_keyForCell:(unsigned int)arg0 :(unsigned int)arg1;
+ (NSDictionary *)_attributesStringFromAttributes:(NSDictionary *)arg0;
+ (OITSUHTMLTable *)htmlTable;

- (void)dealloc;
- (unsigned int)count;
- (OITSUHTMLTable *)init;
- (void)addRowWithCellMarkup:(id)arg0;
- (void)setClass:(Class)arg0 ofColumnIndex:(unsigned int)arg1;
- (unsigned int)indexOfColumnWithTitle:(NSString *)arg0;
- (unsigned int)lastRowIndex;
- (id)markup;
- (void)addRowWithCellText:(NSString *)arg0;
- (void)setColumnClasses:(NSArray *)arg0;
- (void)setRowClass:(NSObject *)arg0 atRowIndex:(unsigned int)arg1;
- (void)setColumnHeaders:(NSMutableArray *)arg0;
- (void)setCellMarkup:(id)arg0 atRowIndex:(unsigned int)arg1 columnIndex:(unsigned int)arg2;
- (void)setCellAttributes:(NSMutableDictionary *)arg0 rowIndex:(unsigned int)arg1 columnIndex:(unsigned int)arg2;
- (void)enumerateRowsUsingBlock:(id /* block */)arg0;
- (void)deleteColumnWithTitle:(NSString *)arg0;
- (unsigned int)rowClassStride;
- (void)setRowClassStride:(unsigned int)arg0;

@end
