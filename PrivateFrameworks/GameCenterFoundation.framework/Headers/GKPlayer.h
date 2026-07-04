/* Runtime dump - GKPlayer
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKPlayer : NSObject <NSCoding, NSSecureCoding>
{
    GKPlayerInternal * _internal;
    NSAttributedString * _whenString;
    NSArray * _friends;
}

@property (retain, nonatomic) NSString * reason;
@property (retain, nonatomic) NSString * reason2;
@property (nonatomic) unsigned int rid;
@property (nonatomic) int source;
@property (readonly, nonatomic) char isFriendRecommendation;
@property (readonly) NSString * referenceKey;
@property (retain, nonatomic) NSString * playerID;
@property (readonly, nonatomic) NSString * displayName;
@property (copy, nonatomic) NSString * alias;
@property (retain) GKPlayerInternal * internal;
@property (copy, nonatomic) NSString * status;
@property (readonly, nonatomic) NSString * firstName;
@property (readonly, nonatomic) NSString * lastName;
@property (readonly, nonatomic) NSDate * lastPlayedDate;
@property (readonly, nonatomic) GKGame * lastPlayedGame;
@property (readonly, nonatomic) char hasPhoto;
@property (readonly, nonatomic) char loaded;
@property (readonly, nonatomic) char isFamiliarFriend;
@property (nonatomic) unsigned int numberOfFriends;
@property (readonly, nonatomic) struct ? stats;
@property (readonly, nonatomic) NSString * cacheKey;
@property (retain, nonatomic) NSAttributedString * whenString;
@property (readonly, nonatomic) char isLocalPlayer;
@property (readonly, nonatomic) char isAnonymousPlayer;
@property (readonly, nonatomic) char isUnknownPlayer;
@property (readonly, nonatomic) char isAutomatchPlayer;
@property (retain, nonatomic) NSArray * friends;
@property (nonatomic) char isFriend;

+ (char)supportsSecureCoding;
+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKPlayer *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (GKPlayer *)canonicalizedPlayerForInternal:(id)arg0;
+ (void)loadPlayersForIdentifiers:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (void)loadPlayersForLegacyIdentifiers:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (NSObject *)cacheKeyForPlayerID:(NSObject *)arg0;
+ (void)_loadPlayersForIdentifiers:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (CALayer *)anonymousPlayer;
+ (CALayer *)unknownPlayer;
+ (CALayer *)automatchPlayer;
+ (void)loadCompletePlayersForPlayers:(id)arg0 completionHandler:(id /* block */)arg1;
+ (GKPlayer *)playerFromPlayerID:(NSObject *)arg0;

- (GKPlayerInternal *)internal;
- (void)dealloc;
- (GKPlayer *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (GKPlayer *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (NSString *)cacheKey;
- (NSString *)displayName;
- (NSString *)referenceKey;
- (GKPlayer *)initWithInternalRepresentation:(GKPlayerInternal *)arg0;
- (void)setInternal:(GKPlayerInternal *)arg0;
- (void)postChangeNotification;
- (NSArray *)friends;
- (void)setFriends:(NSArray *)arg0;
- (NSDictionary *)displayNameWithOptions:(unsigned char)arg0;
- (GKGame *)lastPlayedGame;
- (void)loadCommonFriends:(char)arg0 asPlayersWithCompletionHandler:(id /* block */)arg1;
- (void)loadGamesPlayedIncludingInstalledGames:(char)arg0 completionHandler:(id /* block */)arg1;
- (struct ?)stats;
- (char)isFamiliarFriend;
- (void)acceptFriendRequestWithCompletionHandler:(id /* block */)arg0;
- (void)declineFriendRequestWithCompletionHandler:(id /* block */)arg0;
- (void)loadFriendsAsPlayersWithCompletionHandler:(id /* block */)arg0;
- (void)loadRecentMatchesForGame:(id)arg0 block:(id /* block */)arg1;
- (void)loadGamesPlayed:(id)arg0;
- (void)loadGamesPlayedDetailsWithCompletionHandler:(id /* block */)arg0;
- (void)loadProfileWithCompletionHandler:(id /* block */)arg0;
- (char)isFriendablePlayer;
- (NSAttributedString *)whenString;
- (void)setWhenString:(NSAttributedString *)arg0;
- (char)isFriendRecommendation;
- (CALayer *)minimalPlayer;
- (NSString *)playerID;
- (char)hasPhoto;
- (NSString *)sortName;
- (SAEmail *)email;
- (NSArray *)emails;
- (void)_postChangeNotification;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
