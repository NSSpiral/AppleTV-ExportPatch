/* Runtime dump - BookmarkDAVBulkPostTask
 * Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVBulkPostTask : CoreDAVPostTask
{
    NSString * _checkCTag;
    NSMutableArray * _parsedBookmarks;
    NSMutableDictionary * _parsedBookmarksByURL;
    NSMutableArray * _parsedFolders;
    NSMutableDictionary * _parsedFoldersByURL;
    NSMutableDictionary * _folderURLToChildrenURLOrder;
    NSString * _nextRootCTag;
    NSString * _nextRootSyncToken;
    NSURL * _checkCTagURL;
}

@property (readonly, nonatomic) NSArray * parsedBookmarks;
@property (readonly, nonatomic) NSArray * parsedFolders;
@property (readonly, nonatomic) NSDictionary * folderURLToChildrenURLOrder;
@property (retain, nonatomic) NSString * nextRootCTag;
@property (retain, nonatomic) NSString * nextRootSyncToken;

- (void)dealloc;
- (void)setNextRootCTag:(NSString *)arg0;
- (void)setNextRootSyncToken:(NSString *)arg0;
- (BookmarkDAVBulkPostTask *)initWithDataPayload:(NSData *)arg0 atURL:(NSURL *)arg1 checkCTag:(NSString *)arg2 checkCTagURL:(NSURL *)arg3;
- (NSArray *)parsedBookmarks;
- (NSArray *)parsedFolders;
- (NSString *)nextRootCTag;
- (NSString *)nextRootSyncToken;
- (NSDictionary *)additionalHeaderValues;
- (void)finishCoreDAVTaskWithError:(NSError *)arg0;
- (NSObject *)copyDefaultParserForContentType:(NSObject *)arg0;
- (void)_foundChildrenOrder:(id)arg0 inFolderWithURL:(NSString *)arg1;
- (NSDictionary *)folderURLToChildrenURLOrder;

@end
