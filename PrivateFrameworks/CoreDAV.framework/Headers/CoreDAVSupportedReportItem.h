/* Runtime dump - CoreDAVSupportedReportItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSupportedReportItem : CoreDAVItem
{
    CoreDAVItem * _report;
}

@property (retain, nonatomic) CoreDAVItem * report;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (CoreDAVSupportedReportItem *)init;
- (NSString *)description;
- (void)setReport:(CoreDAVItem *)arg0;
- (CoreDAVItem *)report;

@end
