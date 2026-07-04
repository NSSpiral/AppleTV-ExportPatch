/* Runtime dump - WMTableCellMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMTableCellMapper : CMMapper
{
    WDTableCell * mWdTableCell;
    unsigned int mColSpan;
    double mHeight;
    double mWidth;
    double mLeftPadding;
    double mRightPadding;
}

- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (NSObject *)tableMapper;
- (void)mapCellStyleAt:(id)arg0;
- (WMTableCellMapper *)initWithWDTableCell:(NSObject *)arg0 atIndex:(unsigned int)arg1 parent:(NSObject *)arg2;
- (unsigned int)colSpan;

@end
