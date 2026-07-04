/* Runtime dump - CardDAVFolderSyncTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CardDAVFolderSyncTaskGroup : CoreDAVContainerSyncTaskGroup
{
    char _isInitialSync;
}

@property (nonatomic) char isInitialSync;

- (NSString *)dataContentType;
- (Class)bulkChangeTaskClass;
- (id)copyMultiGetTaskWithURLs:(id)arg0;
- (NSURL *)copyGetTaskWithURL:(NSString *)arg0;
- (CardDAVFolderSyncTaskGroup *)initWithFolderURL:(NSURL *)arg0 previousCTag:(NSString *)arg1 previousSyncToken:(NSString *)arg2 actions:(TSTLayoutProcessChangesActions *)arg3 syncItemOrder:(char)arg4 context:(NSObject *)arg5 accountInfoProvider:(NSObject *)arg6 taskManager:(NSObject *)arg7 appSpecificDataItemClass:(Class)arg8;
- (CardDAVFolderSyncTaskGroup *)initWithFolderURL:(NSURL *)arg0 previousCTag:(NSString *)arg1 previousSyncToken:(NSString *)arg2 actions:(TSTLayoutProcessChangesActions *)arg3 context:(void *)arg4 accountInfoProvider:(NSObject *)arg5 taskManager:(NSObject *)arg6 appSpecificDataItemClass:(Class)arg7;
- (void)setIsInitialSync:(char)arg0;
- (char)isInitialSync;

@end
