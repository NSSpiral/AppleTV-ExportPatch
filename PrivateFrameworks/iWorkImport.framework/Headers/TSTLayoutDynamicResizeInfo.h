/* Runtime dump - TSTLayoutDynamicResizeInfo
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSTLayoutDynamicResizeInfo : NSObject <TSTLayoutDynamicResizeInfoProtocol>
{
    char mValid;
    int mTableRowsBehavior;
    TSTCellRegion * mRowRegion;
    unsigned short mStartRowIndex;
    unsigned short mNumberOfRows;
    unsigned short mNumberOfResizableRows;
    float * mCapturedRowHeights;
    float * mCurrentRowHeights;
    float * mMinimumRowHeights;
    float mCapturedRowHeightTotal;
    TSTCellRegion * mColumnRegion;
    unsigned char mStartColumnIndex;
    unsigned short mNumberOfColumns;
    unsigned short mNumberOfResizableColumns;
    float * mCapturedColumnWidths;
    float * mCurrentColumnWidths;
    float * mMinimumColumnWidths;
    float mCapturedColumnWidthTotal;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSArray *)rowHeights;
- (NSArray *)columnWidths;
- (TSTLayoutDynamicResizeInfo *)initWithMasterLayout:(TSTMasterLayout *)arg0;
- (char)hasWidthForColumn:(unsigned char)arg0;
- (float)getColumnWidth:(unsigned char)arg0;
- (char)hasHeightForRow:(unsigned short)arg0;
- (float)getRowHeight:(unsigned short)arg0;
- (void)p_captureRowColumnInformation:(id)arg0 columnRegion:(NSObject *)arg1 rowRegion:(NSObject *)arg2;
- (TSTLayoutDynamicResizeInfo *)initWithMasterLayout:(TSTMasterLayout *)arg0 columnRegion:(NSObject *)arg1 rowRegion:(NSObject *)arg2;
- (float)applyResizeHeightFactor:(float)arg0;
- (float)applyResizeWidthFactor:(float)arg0;
- (void)enumerateRowHeightsUsingBlock:(id /* block */)arg0;
- (void)enumerateColumnWidthsUsingBlock:(id /* block */)arg0;
- (float)getMinimumRowHeight:(unsigned short)arg0;
- (float)getMinimumColumnWidth:(unsigned char)arg0;
- (TSTLayoutDynamicResizeInfo *)initWithMasterLayout:(TSTMasterLayout *)arg0 columnRegion:(NSObject *)arg1;
- (TSTLayoutDynamicResizeInfo *)initWithMasterLayout:(TSTMasterLayout *)arg0 rowRegion:(NSObject *)arg1;
- (TSTLayoutDynamicResizeInfo *)initWithDynamicResizeInfo:(NSDictionary *)arg0;
- (float)getRowInitialHeight:(unsigned short)arg0;
- (float)getColumnInitialWidth:(unsigned char)arg0;
- (float)getRowHeightResize:(unsigned short)arg0;
- (float)getColumnWidthResize:(unsigned char)arg0;
- (void)captureNewMinimumRowHeights:(id)arg0;
- (float)totalCapturedRowHeights;
- (float)totalCapturedColumnWidths;
- (float)totalCurrentRowHeights;
- (float)totalCurrentColumnWidths;
- (float)totalMinimumRowHeights;
- (float)totalMinimumColumnWidths;
- (float)applyRowTotalHeight:(float)arg0;
- (float)applyColumnTotalWidth:(float)arg0;
- (struct CGSize)capturedTableSize;
- (void)dealloc;
- (void)invalidate;
- (char)valid;

@end
