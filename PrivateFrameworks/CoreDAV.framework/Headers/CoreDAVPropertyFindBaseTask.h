/* Runtime dump - CoreDAVPropertyFindBaseTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVPropertyFindBaseTask : CoreDAVTask
{
    CoreDAVMultiStatusItem * _multiStatus;
    NSSet * _propertiesToFind;
}

@property (retain, nonatomic) CoreDAVMultiStatusItem * multiStatus;
@property (retain, nonatomic) NSSet * propertiesToFind;

- (void)dealloc;
- (NSString *)description;
- (NSDictionary *)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;
- (CoreDAVMultiStatusItem *)multiStatus;
- (CoreDAVPropertyFindBaseTask *)initWithPropertiesToFind:(NSSet *)arg0 atURL:(NSURL *)arg1;
- (NSSet *)propertiesToFind;
- (void)updateMultiStatusFromResponse;
- (NSError *)getTotalFailureError;
- (NSObject *)successfulValueForNameSpace:(NSObject *)arg0 elementName:(NSString *)arg1;
- (NSSet *)parseHints;
- (void)setMultiStatus:(CoreDAVMultiStatusItem *)arg0;
- (void)setPropertiesToFind:(NSSet *)arg0;

@end
