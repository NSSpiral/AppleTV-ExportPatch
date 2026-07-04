/* Runtime dump - CoreDAVSyncReportTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVSyncReportTask : CoreDAVPropertyFindBaseTask
{
    NSString * _previousSyncToken;
    NSString * _nextSyncToken;
    char _moreToSync;
    char _wasInvalidSyncToken;
}

@property (readonly, nonatomic) NSString * nextSyncToken;
@property (readonly, nonatomic) char moreToSync;
@property (readonly, nonatomic) char wasInvalidSyncToken;

- (void)dealloc;
- (NSString *)description;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;
- (CoreDAVSyncReportTask *)initWithPropertiesToFind:(NSSet *)arg0 atURL:(NSURL *)arg1 withDepth:(int)arg2 previousSyncToken:(NSString *)arg3;
- (char)wasInvalidSyncToken;
- (id)notFoundHREFs;
- (char)moreToSync;
- (NSString *)nextSyncToken;

@end
