/* Runtime dump - WMTableStyle
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WMTableStyle : WMStyle
{
    WDTableProperties * mWdTableProperties;
}

- (WMTableStyle *)initWithWDTableProperties:(NSDictionary *)arg0;
- (void)addTableProperties:(NSDictionary *)arg0;

@end
