/* Runtime dump - BookmarkDAVSyncDriver
 * Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVSyncDriver : NSObject <CoreDAVLocalDBTreeInfoProvider, CoreDAVDeleteTaskDelegate, CoreDAVGetAccountPropertiesTaskGroupDelegate, CoreDAVContainerInfoTaskGroupDelegate>
{
    <CoreDAVAccountInfoProvider> * _accountInfoProvider;
    <CoreDAVTaskManager> * _taskManager;
    NSMutableSet * _outstandingTaskGroups;
    id _getAccountPropertiesHandler;
    id _syncHandler;
    void * _changeToken;
    NSURL * _homeURL;
    NSString * _pushKey;
    NSDictionary * _pushTransport;
    id _openDBBlock;
    id _getDBBlock;
    id _saveDBBlock;
    id _closeDBBlock;
    BookmarkDAVSyncData * _topLevelSyncData;
    id _registerForPush;
    char _forceSafariOrdering;
    char _forceSave;
}

@property (readonly, nonatomic) <CoreDAVAccountInfoProvider> * accountInfoProvider;
@property (readonly, nonatomic) unsigned int outstandingActionCount;
@property (retain, nonatomic) NSString * pushKey;
@property (retain, nonatomic) NSDictionary * pushTransport;
@property (retain, nonatomic) NSURL * homeURL;
@property (copy, nonatomic) id getAccountPropertiesHandler;
@property (copy, nonatomic) id syncHandler;
@property (readonly, nonatomic) BookmarkDAVSyncData * topLevelSyncData;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)pushKey;
- (void)setPushKey:(NSString *)arg0;
- (void)dealloc;
- (void)_invokeAndNilGetAccountPropertiesHandlerWithSuccess:(char)arg0 error:(NSError *)arg1;
- (void)setPushTransport:(NSDictionary *)arg0;
- (BookmarkDAVSyncData *)topLevelSyncData;
- (void)setHomeURL:(NSURL *)arg0;
- (void)_closeDBAndSave:(char)arg0;
- (void)setGetAccountPropertiesHandler:(id /* block */)arg0;
- (NSString *)_dbRelativeString:(NSString *)arg0;
- (void)setSyncHandler:(id /* block */)arg0;
- (void)_syncWithRemoteChanges:(char)arg0 completionHandler:(id /* block */)arg1 skipAddChanges:(/* block */ id)arg2;
- (void)getAccountPropertiesWithCompletionHandler:(id /* block */)arg0;
- (void)_setServerIdOnItem:(void *)arg0 isBookmark:(char)arg1 suggestedId:(NSObject *)arg2;
- (id)_copyDAVBookmarkFromBookmarkRef:(void *)arg0;
- (int)_serverOrderForChange:(void *)arg0;
- (id)_copyDAVFolderFromFolderRef:(void *)arg0;
- (void)_saveDB;
- (int)_clientOrderOfItemPrecedingItemAtServerOrder:(int)arg0 inParentWithURL:(NSString *)arg1;
- (NSDictionary *)pushTransport;
- (void)_makeFolderFromContainer:(NSObject *)arg0;
- (void)_makeBookmarkFromDAVNode:(NSObject *)arg0;
- (void)_handleAddsOrModifies:(id)arg0 removes:(id)arg1;
- (void)_setChildrenOrder:(id)arg0 forFolderURL:(NSURL *)arg1;
- (void)_finishInitialSyncShouldPushChanges:(char)arg0;
- (char)getCTag:(id *)arg0 pTag:(id *)arg1 forFolderWithURL:(NSURL *)arg2;
- (BookmarkDAVSyncDriver *)initWithAccountInfoProvider:(<CoreDAVAccountInfoProvider> *)arg0 taskManager:(<CoreDAVTaskManager> *)arg1 openDBBlock:(id /* block */)arg2 getDBBlock:(/* block */ id)arg3 saveDBBlock:(id /* block */)arg4 closeDBBlock:(/* block */ id)arg5 registerForPush:(id)arg6 forceSafariOrdering:(/* block */ id)arg7;
- (void)syncWithRemoteChanges:(char)arg0 completionHandler:(id /* block */)arg1;
- (unsigned int)outstandingActionCount;
- (id /* block */)getAccountPropertiesHandler;
- (id /* block */)syncHandler;
- (char)_addChange:(void *)arg0 toData:(NSData *)arg1 numActionsP:(int *)arg2 runningSizeP:(int *)arg3 maxResources:(int)arg4 maxSize:(int)arg5 foldersToAddByServerId:(struct __CFDictionary *)arg6 parentToArrayOfChildrenFolderChanges:(struct __CFDictionary *)arg7 pushedParentToArrayOfChildrenFolders:(struct __CFDictionary *)arg8;
- (char)_handleErrorItem:(NSObject *)arg0 forBAItem:(void *)arg1;
- (char)_matchParsedFolders:(id)arg0 toPushedFolders:(struct __CFDictionary *)arg1 unmatchedParsedFolders:(id)arg2 parsedSetsOfChildrenFoldersByParentURL:(NSURL *)arg3 arraysOfChildrenByNameByParent:(struct __CFDictionary *)arg4;
- (char)_applyUnmatchedParsedFolders:(id)arg0;
- (id)_folderXBELDataForTopmostFolderChanges:(struct __CFArray *)arg0 foldersToAddByServerId:(struct __CFDictionary *)arg1 parentToArrayOfChildrenFolderChanges:(struct __CFDictionary *)arg2 pushedParentToArrayOfChildrenFolders:(struct __CFDictionary *)arg3 pushedTopmostFolders:(struct __CFArray *)arg4 maxResources:(int)arg5 maxSize:(int)arg6;
- (char)_applyReturnedFolders:(id)arg0 parentToArrayOfChildrenFolders:(struct __CFDictionary *)arg1 topmostFolders:(struct __CFArray *)arg2 postedToURL:(NSURL *)arg3;
- (void)_removeTempIdsFromFoldersInDict:(struct __CFDictionary *)arg0;
- (void)_setRootCTag:(NSString *)arg0 rootSyncToken:(NSString *)arg1 knownOrderings:(id)arg2;
- (id)_bookmarkXBELDataForBookmarkChanges:(struct __CFArray *)arg0 pushedBookmarks:(struct __CFArray *)arg1 maxResources:(int)arg2 maxSize:(int)arg3;
- (char)_applyReturnedBookmarks:(id)arg0 withPushedBookmarks:(struct __CFArray *)arg1;
- (<CoreDAVAccountInfoProvider> *)accountInfoProvider;
- (void)containerInfoTask:(CoreDAVContainerInfoTaskGroup *)arg0 completedWithContainers:(NSSet *)arg1 error:(NSError *)arg2;
- (NSSet *)copyAllLocalURLsInFolderWithURL:(NSURL *)arg0;
- (void)getAccountPropertiesTask:(CoreDAVGetAccountPropertiesTaskGroup *)arg0 completedWithError:(NSError *)arg1;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg0 completedFullSyncWithNewCTag:(NSString *)arg1 newPTag:(NSString *)arg2 newSyncToken:(NSString *)arg3 error:(NSError *)arg4;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg0 completedSyncOfFolderWithURL:(NSURL *)arg1 newCTag:(NSString *)arg2 newPTag:(NSString *)arg3 addedOrModified:(NSSet *)arg4 removed:(NSSet *)arg5 error:(NSError *)arg6;
- (NSDictionary *)copyLocalETagsForURLs:(NSArray *)arg0;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg0 retrievedAddedOrModifiedActions:(NSSet *)arg1 removed:(NSSet *)arg2;
- (void)notePutToURL:(NSURL *)arg0 withDataPayload:(NSData *)arg1 finishedWithIgnoredError:(NSError *)arg2;
- (char)setLocalETag:(NSString *)arg0 forItemWithURL:(NSURL *)arg1;
- (void)recursiveContainerSyncTask:(CoreDAVRecursiveContainerSyncTaskGroup *)arg0 receivedAddedOrModifiedFolder:(id)arg1;
- (NSURL *)homeURL;

@end
