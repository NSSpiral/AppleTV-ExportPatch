/* Runtime dump - GQDTCell
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQDTCell : NSObject
{
    unsigned short mColumnIndex;
    unsigned short mRowIndex;
    unsigned short mColumnSpan;
    unsigned short mRowSpan;
    GQDSStyle * mStyle;
}

- (int)readAttributesForBaseCell:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (int)readAttributesForBaseTabularCell:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (int)readBaseAttributesForBaseCell:(struct _xmlTextReader *)arg0 processor:(TSCH3DRenderProcessor *)arg1;
- (void)incrementColumnSpan;
- (void)dealloc;
- (unsigned short)rowIndex;
- (TSTCellStyle *)cellStyle;
- (void)setCellStyle:(TSTCellStyle *)arg0;
- (unsigned short)columnIndex;
- (unsigned short)rowSpan;
- (unsigned short)columnSpan;

@end
