/* Runtime dump - WMTableMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMTableMapper : CMMapper
{
    WDTable * mWdTable;
    WMBordersProperty * mInsideBorders;
    WMTableStyle * mStyle;
    WMTableColumnInfo * mColumnInfo;
}

+ (char)isTableDeleted:(id)arg0;

- (void)dealloc;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (WMTableMapper *)initWithWDTable:(WDTable *)arg0 parent:(NSObject *)arg1;
- (NSDictionary *)columnInfo;
- (id)insideBorders;
- (NSDictionary *)copyColumnInfo;
- (void)setInsideBorders:(id)arg0;
- (id)copyStopArrayForRow:(unsigned int)arg0;

@end
