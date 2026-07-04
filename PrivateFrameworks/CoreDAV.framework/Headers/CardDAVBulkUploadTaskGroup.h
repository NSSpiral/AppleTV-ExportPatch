/* Runtime dump - CardDAVBulkUploadTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CardDAVBulkUploadTaskGroup : CoreDAVBulkUploadTaskGroup

- (Class)multiPutTaskClass;
- (CardDAVBulkUploadTaskGroup *)initWithFolderURL:(NSURL *)arg0 checkCTag:(NSString *)arg1 uuidsToAddActions:(NSDictionary *)arg2 hrefsToModDeleteActions:(NSDictionary *)arg3 context:(NSObject *)arg4 accountInfoProvider:(NSObject *)arg5 taskManager:(NSObject *)arg6;

@end
