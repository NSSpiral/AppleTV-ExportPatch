/* Runtime dump - CoreDAVBulkChangeTask
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVBulkChangeTask : CoreDAVTask
{
    NSString * _appSpecificNamespace;
    NSString * _appSpecificDataProp;
    NSDictionary * _uuidsToAddActions;
    NSDictionary * _hrefsToModDeleteActions;
    NSString * _checkCTag;
    char _simple;
    char _returnChangedData;
    NSData * _pushedData;
    char _validCTag;
    NSString * _nextCTag;
    NSMutableSet * _bulkChangeResponses;
    NSString * _requestDataContentType;
}

@property (readonly, nonatomic) NSDictionary * uuidsToAddActions;
@property (readonly, nonatomic) NSDictionary * hrefsToModDeleteActions;
@property (readonly, nonatomic) NSString * nextCTag;
@property (readonly, nonatomic) NSSet * bulkChangeResponses;

- (void)dealloc;
- (NSData *)requestBody;
- (NSString *)httpMethod;
- (NSDictionary *)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;
- (CoreDAVBulkChangeTask *)initWithURL:(NSString *)arg0 checkCTag:(NSString *)arg1 simple:(char)arg2 returnChangedData:(char)arg3 uuidsToAddActions:(NSDictionary *)arg4 hrefsToModDeleteActions:(NSDictionary *)arg5;
- (NSString *)nextCTag;
- (void)fillOutDataWithUUIDsToAddActions:(id)arg0 hrefsToModDeleteActions:(NSDictionary *)arg1;
- (NSDictionary *)uuidsToAddActions;
- (NSDictionary *)hrefsToModDeleteActions;
- (NSSet *)bulkChangeResponses;

@end
