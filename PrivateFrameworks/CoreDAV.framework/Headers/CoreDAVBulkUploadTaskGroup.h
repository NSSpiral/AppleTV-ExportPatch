/* Runtime dump - CoreDAVBulkUploadTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVBulkUploadTaskGroup : CoreDAVTaskGroup <CoreDAVTaskDelegate>
{
    NSURL * _folderURL;
    NSString * _lastKnownCTag;
    char _validCTag;
    unsigned int _multiPutBatchMaxNumResources;
    unsigned int _multiPutBatchMaxSize;
    NSMutableDictionary * _remainingUUIDsToAddActions;
    NSMutableDictionary * _remainingHREFsToModDeleteActions;
    NSMutableDictionary * _uuidToHREF;
    NSMutableDictionary * _hrefToETag;
    NSMutableDictionary * _uuidToErrorItems;
    NSMutableDictionary * _hrefToErrorItems;
    NSMutableDictionary * _uuidToStatus;
    NSMutableDictionary * _hrefToStatus;
}

@property (nonatomic) unsigned int multiPutBatchMaxNumResources;
@property (nonatomic) unsigned int multiPutBatchMaxSize;
@property (readonly, nonatomic) NSURL * folderURL;
@property (readonly, nonatomic) char validCTag;
@property (retain, nonatomic) NSString * nextCTag;
@property (readonly, nonatomic) NSDictionary * uuidToHREF;
@property (readonly, nonatomic) NSDictionary * hrefToETag;
@property (readonly, nonatomic) NSDictionary * uuidToStatus;
@property (readonly, nonatomic) NSDictionary * hrefToStatus;
@property (readonly, nonatomic) NSDictionary * uuidToErrorItems;
@property (readonly, nonatomic) NSDictionary * hrefToErrorItems;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)description;
- (void)task:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (void)startTaskGroup;
- (void)_sendNextBatch;
- (NSString *)nextCTag;
- (void)setNextCTag:(NSString *)arg0;
- (void)syncAway;
- (NSURL *)folderURL;
- (Class)multiPutTaskClass;
- (NSDictionary *)uuidToHREF;
- (NSDictionary *)hrefToETag;
- (NSDictionary *)uuidToErrorItems;
- (NSDictionary *)hrefToErrorItems;
- (NSDictionary *)uuidToStatus;
- (NSDictionary *)hrefToStatus;
- (CoreDAVBulkUploadTaskGroup *)initWithFolderURL:(NSURL *)arg0 checkCTag:(NSString *)arg1 uuidsToAddActions:(NSDictionary *)arg2 hrefsToModDeleteActions:(NSDictionary *)arg3 context:(NSObject *)arg4 accountInfoProvider:(NSObject *)arg5 taskManager:(NSObject *)arg6;
- (unsigned int)multiPutBatchMaxNumResources;
- (void)setMultiPutBatchMaxNumResources:(unsigned int)arg0;
- (unsigned int)multiPutBatchMaxSize;
- (void)setMultiPutBatchMaxSize:(unsigned int)arg0;
- (char)validCTag;

@end
