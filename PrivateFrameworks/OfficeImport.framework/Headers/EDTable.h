/* Runtime dump - EDTable
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDTable : NSObject
{
    EDResources * mResources;
    unsigned int mStyleIndex;
    unsigned int mHeaderRowDxfIndex;
    unsigned int mTotalsRowDxfIndex;
    unsigned int mDataAreaDxfIndex;
    unsigned int mHeaderRowBorderDxfIndex;
    unsigned int mTotalsRowBorderDxfIndex;
    unsigned int mDataAreaBorderDxfIndex;
    unsigned int mTableBorderDxfIndex;
    NSString * mName;
    NSString * mDisplayName;
    EDReference * mTableRange;
    NSString * mStyleName;
    unsigned int mHeaderRowCount;
    unsigned int mTotalsRowCount;
    BOOL mShowFirstColumn;
    BOOL mShowLastColumn;
    BOOL mShowRowStripes;
    BOOL mShowColumnStripes;
    EDCollection * mTableColumns;
    EDCollection * mColumnFilters;
}

+ (NSArray *)tableWithResources:(NSArray *)arg0;

- (void)dealloc;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSDictionary *)style;
- (void)setStyle:(NSObject *)arg0;
- (NSString *)displayName;
- (void)setDisplayName:(NSString *)arg0;
- (unsigned int)styleIndex;
- (EDTable *)initWithResources:(NSArray *)arg0;
- (void)setStyleIndex:(unsigned int)arg0;
- (id)headerRowDxf;
- (void)setHeaderRowDxf:(id)arg0;
- (id)totalsRowDxf;
- (void)setTotalsRowDxf:(id)arg0;
- (id)dataAreaDxf;
- (void)setDataAreaDxf:(id)arg0;
- (id)headerRowBorderDxf;
- (void)setHeaderRowBorderDxf:(id)arg0;
- (id)totalsRowBorderDxf;
- (void)setTotalsRowBorderDxf:(id)arg0;
- (id)dataAreaBorderDxf;
- (void)setDataAreaBorderDxf:(id)arg0;
- (id)tableBorderDxf;
- (void)setTableBorderDxf:(id)arg0;
- (void)setStyleName:(NSString *)arg0;
- (struct TSCERangeCoordinate)tableRange;
- (unsigned int)headerRowCount;
- (void)setHeaderRowCount:(unsigned int)arg0;
- (unsigned int)totalsRowCount;
- (void)setTotalsRowCount:(unsigned int)arg0;
- (NSArray *)tableColumns;
- (id)columnFilters;
- (BOOL)showFirstColumn;
- (void)setShowFirstColumn:(BOOL)arg0;
- (BOOL)showLastColumn;
- (void)setShowLastColumn:(BOOL)arg0;
- (BOOL)showRowStripes;
- (void)setShowRowStripes:(BOOL)arg0;
- (BOOL)showColumnStripes;
- (void)setShowColumnStripes:(BOOL)arg0;
- (void)setTableRange:(struct TSCERangeCoordinate)arg0;
- (unsigned int)headerRowDxfIndex;
- (void)setHeaderRowDxfIndex:(unsigned int)arg0;
- (unsigned int)totalsRowDxfIndex;
- (void)setTotalsRowDxfIndex:(unsigned int)arg0;
- (unsigned int)dataAreaDxfIndex;
- (void)setDataAreaDxfIndex:(unsigned int)arg0;
- (unsigned int)headerRowBorderDxfIndex;
- (void)setHeaderRowBorderDxfIndex:(unsigned int)arg0;
- (unsigned int)totalsRowBorderDxfIndex;
- (void)setTotalsRowBorderDxfIndex:(unsigned int)arg0;
- (unsigned int)dataAreaBorderDxfIndex;
- (void)setDataAreaBorderDxfIndex:(unsigned int)arg0;
- (unsigned int)tableBorderDxfIndex;
- (void)setTableBorderDxfIndex:(unsigned int)arg0;
- (NSString *)styleName;

@end
