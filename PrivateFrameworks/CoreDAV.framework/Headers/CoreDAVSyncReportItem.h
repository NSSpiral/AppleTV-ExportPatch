/* Runtime dump - CoreDAVSyncReportItem
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSyncReportItem : CoreDAVMultiStatusItem
{
    NSString * _syncToken;
}

@property (readonly, nonatomic) NSString * syncToken;

+ (NSArray *)copyParseRules;

- (void)dealloc;
- (NSString *)description;
- (NSString *)syncToken;
- (void)_setSyncTokenItem:(NSObject *)arg0;

@end
