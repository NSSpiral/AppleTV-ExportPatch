/* Runtime dump - EMWorksheetMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMWorksheetMapper : EMSheetMapper
{
    EDWorksheet * edWorksheet;
    CMStyle * mStyle;
    int mMaxPopulatedColumn;
    int mMaxPopulatedRow;
    double * mColumnGrid;
    double * mRowGrid;
    int mWidth;
    int mHeight;
    ECColumnWidthConvertor * mColumnWidthConvertor;
}

- (void)dealloc;
- (int)width;
- (int)height;
- (char)isVisible;
- (unsigned int)columnCount;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (int)preprocessWidthWithState:(NSObject *)arg0;
- (int)preprocessHeightWithState:(NSObject *)arg0;
- (id)columnWidthConvertor;
- (double *)rowGrid;
- (double *)columnGrid;
- (int)maxRowNumber;
- (double)defaultColumnWidth;
- (double)defaultRowHeight;
- (struct CGSize)preprocessSizeWithState:(NSObject *)arg0;
- (EMWorksheetMapper *)initWithEDWorksheet:(EDWorksheet *)arg0 parent:(NSObject *)arg1;
- (void)countRowsAndColumnsWithState:(NSObject *)arg0;
- (void)setRowGrid;
- (double)xlColumnWidthToPoints:(double)arg0;
- (void)_initWithState:(NSObject *)arg0;
- (void)mapTableAt:(_UILazyMapTable *)arg0 withState:(NSObject *)arg1;
- (void)mapDrawablesAt:(id)arg0 withState:(NSObject *)arg1;
- (struct CGSize)preprocessDrawableSizeWithState:(NSObject *)arg0;
- (void)mapColumnInfosAt:(id)arg0 withState:(NSObject *)arg1;
- (void)mapGridAt:(id)arg0;
- (void)mapTableStyleAt:(id)arg0 withState:(NSObject *)arg1;

@end
