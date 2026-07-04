/* Runtime dump - CoreDAVMultiPutTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVMultiPutTask : CoreDAVTask
{
    NSString * _appSpecificNamespace;
    NSString * _appSpecificDataProp;
    NSString * _checkCTag;
    CoreDAVXMLData * _pushedData;
    char _validCTag;
    NSString * _nextCTag;
    NSMutableDictionary * _uuidToHREF;
    NSMutableDictionary * _hrefToETag;
    NSMutableDictionary * _uuidToErrorItems;
    NSMutableDictionary * _hrefToErrorItems;
    NSMutableDictionary * _uuidToStatus;
    NSMutableDictionary * _hrefToStatus;
}

@property (readonly, nonatomic) NSString * nextCTag;
@property (readonly, nonatomic) NSDictionary * uuidToHREF;
@property (readonly, nonatomic) NSDictionary * hrefToETag;
@property (readonly, nonatomic) NSDictionary * uuidToStatus;
@property (readonly, nonatomic) NSDictionary * hrefToStatus;
@property (readonly, nonatomic) NSDictionary * uuidToErrorItems;
@property (readonly, nonatomic) NSDictionary * hrefToErrorItems;

- (void)dealloc;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (NSDictionary *)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;
- (NSString *)nextCTag;
- (CoreDAVMultiPutTask *)initWithURL:(NSString *)arg0 checkCTag:(NSString *)arg1 uuidsToAddActions:(NSDictionary *)arg2 hrefsToModDeleteActions:(NSDictionary *)arg3;
- (NSDictionary *)uuidToHREF;
- (NSDictionary *)hrefToETag;
- (NSDictionary *)uuidToErrorItems;
- (NSDictionary *)hrefToErrorItems;
- (NSDictionary *)uuidToStatus;
- (NSDictionary *)hrefToStatus;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg0 hrefsToModDeleteActions:(NSDictionary *)arg1;

@end
