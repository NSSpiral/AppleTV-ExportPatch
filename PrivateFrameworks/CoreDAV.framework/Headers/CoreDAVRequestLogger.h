/* Runtime dump - CoreDAVRequestLogger
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVRequestLogger : NSObject
{
    <CoreDAVAccountInfoProvider> * _provider;
    NSArray * _headerSortDescriptors;
    int _snippetsLogged;
}

@property (retain, nonatomic) NSArray * headerSortDescriptors;

- (void)dealloc;
- (CoreDAVRequestLogger *)initWithProvider:(<CoreDAVAccountInfoProvider> *)arg0;
- (void)logCoreDAVRequest:(NSURLRequest *)arg0 withTaskIdentifier:(NSString *)arg1;
- (void)finishCoreDAVResponse;
- (void)logCoreDAVResponseSnippet:(id)arg0 withTaskIdentifier:(NSString *)arg1 isBody:(char)arg2;
- (void)logCoreDAVResponseSnippet:(id)arg0 withTaskIdentifier:(NSString *)arg1;
- (void)logCoreDAVResponseHeaders:(NSDictionary *)arg0 andStatusCode:(int)arg1 withTaskIdentifier:(NSString *)arg2;
- (void)setHeaderSortDescriptors:(NSArray *)arg0;
- (NSData *)_inflateRequestBody:(NSObject *)arg0;
- (NSArray *)headerSortDescriptors;
- (void)logCoreDAVResponseSnippet:(id)arg0;

@end
