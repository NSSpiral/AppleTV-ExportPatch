/* Runtime dump - BookmarkDAVSyncData
 * Image: /System/Library/PrivateFrameworks/BookmarkDAV.framework/BookmarkDAV
 */

@interface BookmarkDAVSyncData : NSObject
{
    void * _db;
    NSMutableDictionary * _backingDict;
    char _hasChanges;
}

@property (readonly, nonatomic) char hasChanges;
@property (retain, nonatomic) NSURL * homeURL;
@property (nonatomic) char initialSyncDone;
@property (retain, nonatomic) NSDictionary * pushTransports;
@property (retain, nonatomic) NSString * pushKey;
@property (retain, nonatomic) NSString * ctag;
@property (retain, nonatomic) NSString * ptag;
@property (retain, nonatomic) NSString * etag;
@property (retain, nonatomic) NSString * syncToken;
@property (retain, nonatomic) NSDictionary * bulkRequests;
@property (nonatomic) char supportsSyncCollection;
@property (retain, nonatomic) NSString * bookmarksBarId;
@property (retain, nonatomic) NSString * bookmarksMenuId;
@property (nonatomic) unsigned int bookmarksBarOrder;
@property (nonatomic) unsigned int bookmarksMenuOrder;
@property (retain, nonatomic) NSDictionary * heldAsideOrderings;
@property (nonatomic) char hasHitQuotaLimit;
@property (retain, nonatomic) NSNumber * knownQuotaRemaining;
@property (nonatomic) unsigned int clientVersion;
@property (retain, nonatomic) NSString * accountPrsId;
@property (retain, nonatomic) NSURL * principalURL;

- (NSDictionary *)bulkRequests;
- (void)setBulkRequests:(NSDictionary *)arg0;
- (NSString *)pushKey;
- (void)setPushKey:(NSString *)arg0;
- (void)dealloc;
- (unsigned int)clientVersion;
- (BookmarkDAVSyncData *)initWithBookmarkDatabase:(void *)arg0;
- (void)writeToBookmarkDB;
- (void)setHomeURL:(NSURL *)arg0;
- (void)setInitialSyncDone:(char)arg0;
- (void)setPtag:(NSString *)arg0;
- (void)setSupportsSyncCollection:(char)arg0;
- (char)hasHitQuotaLimit;
- (NSNumber *)knownQuotaRemaining;
- (void)setHasHitQuotaLimit:(char)arg0;
- (void)setKnownQuotaRemaining:(NSNumber *)arg0;
- (NSString *)bookmarksBarId;
- (unsigned int)bookmarksBarOrder;
- (NSString *)bookmarksMenuId;
- (unsigned int)bookmarksMenuOrder;
- (void)setBookmarksBarOrder:(unsigned int)arg0;
- (void)setBookmarksMenuOrder:(unsigned int)arg0;
- (char)initialSyncDone;
- (void)setBookmarksBarId:(NSString *)arg0;
- (void)setBookmarksMenuId:(NSString *)arg0;
- (NSString *)ptag;
- (NSDictionary *)heldAsideOrderings;
- (void)setHeldAsideOrderings:(NSDictionary *)arg0;
- (NSString *)accountPrsId;
- (char)supportsSyncCollection;
- (void)setAccountPrsId:(NSString *)arg0;
- (void)setEtag:(NSString *)arg0;
- (NSString *)etag;
- (NSDictionary *)pushTransports;
- (NSString *)syncToken;
- (void)setPushTransports:(NSDictionary *)arg0;
- (void)setSyncToken:(NSString *)arg0;
- (void)setPrincipalURL:(NSURL *)arg0;
- (NSURL *)homeURL;
- (NSString *)ctag;
- (void)setCtag:(NSString *)arg0;
- (NSURL *)principalURL;
- (char)hasChanges;
- (void)setClientVersion:(unsigned int)arg0;

@end
