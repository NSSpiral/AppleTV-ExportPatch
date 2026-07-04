/* Runtime dump - OADTablePartStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTablePartStyle : NSObject
{
    OADTableTextStyle * mTextStyle;
    OADTableCellStyle * mCellStyle;
}

+ (OADTablePartStyle *)defaultStyle;

- (void)dealloc;
- (TSWPParagraphStyle *)textStyle;
- (void)setTextStyle:(NSObject *)arg0;
- (TSTCellStyle *)cellStyle;
- (void)setCellStyle:(TSTCellStyle *)arg0;
- (NSObject *)shallowCopy;
- (void)applyOverridesFrom:(NSObject *)arg0;

@end
