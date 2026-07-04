/* Runtime dump - CoreDAVGetTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVGetTask : CoreDAVTask
{
    id _appSpecificDataItemResult;
    char _forceNoCache;
}

@property (nonatomic) <CoreDAVTaskDelegate> * delegate;
@property (retain, nonatomic) id appSpecificDataItemResult;
@property (nonatomic) char forceNoCache;

- (void)dealloc;
- (NSString *)description;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (unsigned int)cachePolicy;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;
- (NSObject *)appSpecificDataItemResult;
- (char)forceNoCache;
- (void)setAppSpecificDataItemResult:(NSObject *)arg0;
- (void)setForceNoCache:(char)arg0;

@end
