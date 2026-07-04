/* Runtime dump - BookmarkDAVRecursiveContainerSyncTaskGroup
 * Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVRecursiveContainerSyncTaskGroup : CoreDAVRecursiveContainerSyncTaskGroup

- (NSString *)dataContentType;
- (id)copyMultiGetTaskWithURLs:(id)arg0;
- (id)copyFolderMultiGetTaskWithURLs:(id)arg0;
- (char)shouldSyncChildWithResourceType:(NSObject *)arg0;
- (BookmarkDAVRecursiveContainerSyncTaskGroup *)initWithFolderURL:(NSURL *)arg0 previousCTag:(NSString *)arg1 previousPTag:(NSString *)arg2 previousSyncToken:(NSString *)arg3 actions:(TSTLayoutProcessChangesActions *)arg4 syncItemOrder:(char)arg5 context:(NSObject *)arg6 accountInfoProvider:(NSObject *)arg7 taskManager:(NSObject *)arg8;

@end
