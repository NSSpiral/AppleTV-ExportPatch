/* Runtime dump - CoreDAVSupportedReportSetItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSupportedReportSetItem : CoreDAVItem
{
    NSMutableSet * _supportedReports;
}

@property (retain, nonatomic) NSMutableSet * supportedReports;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVSupportedReportSetItem *)init;
- (NSString *)description;
- (NSMutableSet *)supportedReports;
- (char)supportsReportWithNameSpace:(NSString *)arg0 andName:(id *)arg1;
- (void)addSupportedReport:(id)arg0;
- (void)setSupportedReports:(NSMutableSet *)arg0;

@end
