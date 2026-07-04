/* Runtime dump - GKSavedGameManager
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKSavedGameManager : NSObject
{
    char _ubiquityUnavailable;
    NSURL * _ubiquityURL;
    NSMetadataQuery * _query;
    NSMutableDictionary * _documents;
    int _queryDisableCount;
    NSMutableArray * _fetchHandlers;
}

@property (retain, nonatomic) NSURL * ubiquityURL;
@property (nonatomic) char ubiquityUnavailable;
@property (retain, nonatomic) NSMetadataQuery * query;
@property (retain, nonatomic) NSMutableDictionary * documents;
@property (nonatomic) int queryDisableCount;
@property (retain, nonatomic) NSMutableArray * fetchHandlers;

+ (GKSavedGameManager *)sharedManager;

- (void)dealloc;
- (GKSavedGameManager *)init;
- (NSMetadataQuery *)query;
- (void)setQuery:(NSMetadataQuery *)arg0;
- (void)documentModified:(id)arg0;
- (void)documentConflictStateChanged:(NSNotification *)arg0;
- (void)ubiquityAvailabilityChanged:(NSNotification *)arg0;
- (void)setupUbiquity;
- (void)setFetchHandlers:(NSMutableArray *)arg0;
- (void)callFetchHandlers;
- (id)savedGameForDocuments:(id)arg0;
- (NSObject *)savedGameForDocument:(NSObject *)arg0;
- (void)disableQueryUpdates;
- (id)documentForSavedGame:(id)arg0;
- (void)enableQueryUpdates;
- (NSString *)documentToSaveWithName:(NSString *)arg0;
- (NSString *)fileURLForName:(NSString *)arg0;
- (id)errorForNoUbiquity;
- (void)addDocument:(NSObject *)arg0;
- (NSString *)currentDocumentWithName:(NSString *)arg0;
- (void)queryDidFinishGathering:(id)arg0;
- (void)queryDidUpdate:(NSDate *)arg0;
- (void)updateSavedGameDocumentsForQueryWithHandler:(id /* block */)arg0;
- (void)setDocuments:(NSMutableDictionary *)arg0;
- (NSString *)savedGamesWithName:(NSString *)arg0;
- (void)removeDocument:(NSObject *)arg0;
- (void)setUbiquityURL:(NSURL *)arg0;
- (void)startSavedGameQuery;
- (void)fetchSavedGamesWithCompletionHandler:(id /* block */)arg0;
- (void)loadDataForSavedGame:(id)arg0 completionHandler:(id /* block */)arg1;
- (void)saveGameData:(NSData *)arg0 withName:(NSString *)arg1 completionHandler:(id /* block */)arg2;
- (void)deleteSavedGamesWithName:(NSString *)arg0 completionHandler:(id /* block */)arg1;
- (void)resolveConflictingSavedGames:(id)arg0 withData:(NSData *)arg1 completionHandler:(id /* block */)arg2;
- (NSURL *)ubiquityURL;
- (char)ubiquityUnavailable;
- (void)setUbiquityUnavailable:(char)arg0;
- (NSMutableDictionary *)documents;
- (int)queryDisableCount;
- (void)setQueryDisableCount:(int)arg0;
- (NSMutableArray *)fetchHandlers;

@end
