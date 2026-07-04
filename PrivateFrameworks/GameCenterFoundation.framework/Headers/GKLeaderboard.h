/* Runtime dump - GKLeaderboard
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboard : NSObject
{
    int _timeScope;
    int _playerScope;
    NSArray * _players;
    NSArray * _scores;
    GKScore * _localPlayerScore;
    <GKLeaderboardDelegate> * _weakDelegate;
    GKLeaderboardInternal * _internal;
    int _loadingCount;
    int _lock;
    struct _NSRange _range;
}

@property (nonatomic) int timeScope;
@property (nonatomic) int playerScope;
@property (copy, nonatomic) NSString * identifier;
@property (readonly, copy, nonatomic) NSString * title;
@property (nonatomic) struct _NSRange range;
@property (retain, nonatomic) NSArray * scores;
@property (readonly, nonatomic) unsigned int maxRange;
@property (retain, nonatomic) GKScore * localPlayerScore;
@property (readonly) char loading;
@property (readonly, retain, nonatomic) NSString * groupIdentifier;
@property (retain) GKLeaderboardInternal * internal;
@property (nonatomic) <GKLeaderboardDelegate> * delegate;
@property (nonatomic) int loadingCount;
@property (readonly, retain, nonatomic) NSString * localizedTitle;
@property (readonly, nonatomic) int overallRank;
@property (readonly, nonatomic) int overallRankCount;
@property (readonly, nonatomic) int friendRank;
@property (readonly, nonatomic) int friendRankCount;
@property (retain, nonatomic) NSArray * players;
@property (nonatomic) int lock;
@property (copy, nonatomic) NSString * category;

+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKLeaderboard *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (void)loadLeaderboardsForGame:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (void)loadLeaderboardsForGame:(id)arg0 forSet:(NSSet *)arg1 withPlayer:(ATVPlayer *)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)loadLeaderboardsForGame:(id)arg0 withPlayer:(ATVPlayer *)arg1 withCompletionHandler:(id /* block */)arg2;
+ (void)loadCategoriesWithCompletionHandler:(id /* block */)arg0;
+ (void)loadLeaderboardsWithCompletionHandler:(id /* block */)arg0;
+ (void)loadLeaderboardWithIdentifier:(NSString *)arg0 forGame:(GKGame *)arg1 withPlayer:(ATVPlayer *)arg2 withCompletionHandler:(id /* block */)arg3;
+ (void)setDefaultLeaderboard:(id)arg0 withCompletionHandler:(id /* block */)arg1;

- (GKLeaderboardInternal *)internal;
- (void)dealloc;
- (void)setDelegate:(<GKLeaderboardDelegate> *)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (GKLeaderboard *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (<GKLeaderboardDelegate> *)delegate;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (int)lock;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (struct _NSRange)range;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (char)isLoading;
- (void)setRange:(struct _NSRange)arg0;
- (GKLeaderboard *)initWithInternalRepresentation:(GKLeaderboardInternal *)arg0;
- (void)setInternal:(GKLeaderboardInternal *)arg0;
- (void)setLock:(int)arg0;
- (GKLeaderboard *)initWithPlayers:(NSArray *)arg0;
- (int)timeScope;
- (int)playerScope;
- (NSArray *)players;
- (void)loadScoresForGame:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)setTimeScope:(int)arg0;
- (void)incrementLoadingCountAtomically;
- (id)scoreRequestForGame:(id)arg0;
- (NSArray *)scores;
- (void)setScores:(NSArray *)arg0;
- (void)setLocalPlayerScore:(GKScore *)arg0;
- (void)loadScoresForRequest:(NSURLRequest *)arg0 handler:(id /* block */)arg1;
- (void)decrementLoadingCountAtomically;
- (GKLeaderboard *)initWithPlayerIDs:(id)arg0;
- (void)loadScoresWithCompletionHandler:(id /* block */)arg0;
- (void)setPlayerScope:(int)arg0;
- (void)setPlayers:(NSArray *)arg0;
- (GKScore *)localPlayerScore;
- (int)loadingCount;
- (void)setLoadingCount:(int)arg0;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
