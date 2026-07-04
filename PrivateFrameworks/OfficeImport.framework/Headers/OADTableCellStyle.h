/* Runtime dump - OADTableCellStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableCellStyle : NSObject
{
    OADTableCellBorderStyle * mBorderStyle;
    OADFill * mFill;
}

+ (OADTableCellStyle *)defaultStyle;
+ (OADTableCellStyle *)defaultFill;

- (void)dealloc;
- (EDFill *)fill;
- (void)setBorderStyle:(int)arg0;
- (int)borderStyle;
- (void)setFill:(TSDFill *)arg0;
- (NSObject *)shallowCopy;
- (void)applyOverridesFrom:(NSObject *)arg0;

@end
