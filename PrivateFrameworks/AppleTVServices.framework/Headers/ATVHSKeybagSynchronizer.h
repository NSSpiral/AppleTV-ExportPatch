/* Runtime dump - ATVHSKeybagSynchronizer
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVHSKeybagSynchronizer : NSObject
{
    ATVDataClient * _dataClient;
    ATVDataQuery * _inflightAccountsQuery;
    NSMutableArray * _inflightTokenQueries;
    NSMutableArray * _inflightKeysRequests;
    NSString * _keybagPath;
    NSMutableArray * _pendingCompletionBlocks;
    unsigned long _fairPlayContextID;
}

@property (readonly, nonatomic) char isSynchronizing;
@property (retain, nonatomic) ATVDataClient * dataClient;
@property (retain, nonatomic) ATVDataQuery * inflightAccountsQuery;
@property (retain, nonatomic) NSMutableArray * inflightTokenQueries;
@property (retain, nonatomic) NSMutableArray * inflightKeysRequests;
@property (copy, nonatomic) NSString * keybagPath;
@property (retain, nonatomic) NSMutableArray * pendingCompletionBlocks;
@property (nonatomic) unsigned long fairPlayContextID;

+ (NSData *)_keyTypesData;
+ (NSString *)_tokenAuthStateString:(int)arg0;

- (void)setKeybagPath:(NSString *)arg0;
- (void)dealloc;
- (void).cxx_destruct;
- (ATVDataClient *)dataClient;
- (void)synchronizeWithCompletion:(id /* block */)arg0;
- (NSString *)keybagPath;
- (void)setDataClient:(ATVDataClient *)arg0;
- (char)_isIdle;
- (ATVHSKeybagSynchronizer *)initWithDataClient:(ATVDataClient *)arg0 keybagPath:(NSString *)arg1;
- (char)isSynchronizing;
- (void)_dataClientStatusChangedHandler:(id /* block */)arg0;
- (void)_synchronize;
- (void)_cancelSync;
- (NSMutableArray *)pendingCompletionBlocks;
- (ATVDataQuery *)inflightAccountsQuery;
- (NSMutableArray *)inflightKeysRequests;
- (NSMutableArray *)inflightTokenQueries;
- (void)_completeSyncWithErrorCode:(unsigned int)arg0;
- (void)setInflightAccountsQuery:(ATVDataQuery *)arg0;
- (id)_reconcileLocalKeybagWithUserIDs:(id)arg0 keyIDs:(id)arg1;
- (void)_fetchTokenWithUserID:(NSNumber *)arg0;
- (void)_fetchKeysWithUserID:(NSNumber *)arg0 tokenData:(NSData *)arg1;
- (void)_completeSyncIfIdle;
- (unsigned long)fairPlayContextID;
- (id)_localKeybagUserIDs;
- (int)_localKeybagStateForUserID:(NSObject *)arg0 keyIDData:(NSData *)arg1;
- (void)setInflightTokenQueries:(NSMutableArray *)arg0;
- (void)setInflightKeysRequests:(NSMutableArray *)arg0;
- (void)setPendingCompletionBlocks:(NSMutableArray *)arg0;
- (void)setFairPlayContextID:(unsigned long)arg0;

@end
