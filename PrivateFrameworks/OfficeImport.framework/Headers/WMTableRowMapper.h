/* Runtime dump - WMTableRowMapper
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMTableRowMapper : CMMapper
{
    WDTableRow * mWdTableRow;
    double mHeight;
}

+ (char)isTableRowDeleted:(id)arg0;

- (double)height;
- (void)mapAt:(NSObject *)arg0 withState:(NSObject *)arg1;
- (WMTableRowMapper *)initWithWDTableRow:(WDTableRow *)arg0 parent:(NSObject *)arg1;
- (void)setRowProperties:(NSDictionary *)arg0;

@end
