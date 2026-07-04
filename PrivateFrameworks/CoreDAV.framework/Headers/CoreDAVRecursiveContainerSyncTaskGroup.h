/* Runtime dump - CoreDAVRecursiveContainerSyncTaskGroup
 * Image: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

@interface CoreDAVRecursiveContainerSyncTaskGroup : CoreDAVTaskGroup <CoreDAVDeleteTaskDelegate, CoreDAVPutTaskDelegate, CoreDAVTaskGroupDelegate, CoreDAVMkcolTaskDelegate, CoreDAVPropPatchTaskDelegate>
{
    int _phase;
    NSURL * _folderURL;
    NSString * _previousCTag;
    NSString * _nextCTag;
    NSString * _previousSyncToken;
    NSString * _nextSyncToken;
    NSString * _previousPTag;
    NSString * _nextPTag;
    NSArray * _actions;
    unsigned int _multiGetBatchSize;
    NSMutableArray * _unsubmittedTasks;
    NSURL * _addMemberURL;
    char _useMultiGet;
    NSMutableSet * _syncReportDeletedURLs;
    NSMutableDictionary * _leafURLToETag;
    NSMutableArray * _childCollectionURL;
    Class _appSpecificDataItemClass;
    Class _appSpecificContainerItemClass;
    char _syncItemOrder;
    NSMutableDictionary * _folderURLToChildrenURLOrder;
    char _preflightCTag;
}

@property (readonly, nonatomic) NSURL * folderURL;
@property (readonly, nonatomic) NSString * previousCTag;
@property (nonatomic) char preflightCTag;
@property (retain, nonatomic) NSString * previousSyncToken;
@property (nonatomic) unsigned int multiGetBatchSize;
@property (nonatomic) <CoreDAVLocalDBTreeInfoProvider> * delegate;
@property (readonly, nonatomic) NSDictionary * folderURLToChildrenURLOrder;
@property (retain, nonatomic) NSString * nextCTag;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (NSString *)description;
- (void)task:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (id)_copyContainerParserMappings;
- (void)taskGroupWillCancelWithError:(NSError *)arg0;
- (void)bailWithError:(NSError *)arg0;
- (void)propFindTask:(NSObject *)arg0 parsedResponses:(id)arg1 error:(NSError *)arg2;
- (void)startTaskGroup;
- (void)_tearDownAllUnsubmittedTasks;
- (void)cancelTaskGroup;
- (unsigned int)_submitTasks;
- (NSString *)dataContentType;
- (void)_pushActions;
- (void)_getDataPayloads;
- (id)copyMultiGetTaskWithURLs:(id)arg0;
- (void)_getTask:(NSObject *)arg0 finishedWithParsedContents:(char)arg1 deletedItems:(NSArray *)arg2 error:(NSError *)arg3;
- (char)isWhitelistedError:(NSError *)arg0;
- (void)setPreviousSyncToken:(NSString *)arg0;
- (NSString *)nextCTag;
- (void)_postTask:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (void)_syncReportTask:(NSObject *)arg0 didFinishWithError:(NSError *)arg1;
- (void)setNextCTag:(NSString *)arg0;
- (void)deleteTask:(NSObject *)arg0 completedWithError:(NSError *)arg1;
- (void)putTask:(NSObject *)arg0 completedWithNewETag:(NSString *)arg1 error:(NSError *)arg2;
- (void)syncAway;
- (unsigned int)multiGetBatchSize;
- (void)setMultiGetBatchSize:(unsigned int)arg0;
- (NSURL *)folderURL;
- (NSString *)previousCTag;
- (NSString *)previousSyncToken;
- (void)mkcolTask:(NSObject *)arg0 parsedPropStats:(id)arg1 error:(NSError *)arg2;
- (void)propPatchTask:(NSObject *)arg0 parsedResponses:(id)arg1 error:(NSError *)arg2;
- (void)_getItemTags;
- (void)_taskGroupSuccessfullyFinishedWithContents:(id)arg0;
- (id)copyFolderMultiGetTaskWithURLs:(id)arg0;
- (void)_getTopFolderTags;
- (void)_folderModTask:(NSObject *)arg0 parsedPropStats:(id)arg1 error:(NSError *)arg2;
- (char)shouldSyncChildWithResourceType:(NSObject *)arg0;
- (void)_foundChildrenOrder:(id)arg0 inFolderWithURL:(NSString *)arg1;
- (CoreDAVRecursiveContainerSyncTaskGroup *)initWithFolderURL:(NSURL *)arg0 previousCTag:(NSString *)arg1 previousPTag:(NSString *)arg2 previousSyncToken:(NSString *)arg3 actions:(NSArray *)arg4 syncItemOrder:(char)arg5 context:(NSObject *)arg6 accountInfoProvider:(NSObject *)arg7 taskManager:(NSObject *)arg8;
- (char)preflightCTag;
- (void)setPreflightCTag:(char)arg0;
- (NSDictionary *)folderURLToChildrenURLOrder;

@end
