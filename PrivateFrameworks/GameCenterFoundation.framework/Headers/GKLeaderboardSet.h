/* Runtime dump - GKLeaderboardSet
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKLeaderboardSet : NSObject <NSCoding, NSSecureCoding>
{
    GKLeaderboardSetInternal * _internal;
}

@property (copy, nonatomic) NSString * title;
@property (readonly, retain, nonatomic) NSString * groupIdentifier;
@property (copy, nonatomic) NSString * identifier;
@property (readonly, retain, nonatomic) NSArray * leaderboardIdentifiers;
@property (retain) GKLeaderboardSetInternal * internal;

+ (char)supportsSecureCoding;
+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKLeaderboardSet *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (void)loadLeaderboardSetsForGame:(id)arg0 withCompletionHandler:(id /* block */)arg1;
+ (void)loadLeaderboardSetsWithCompletionHandler:(id /* block */)arg0;

- (GKLeaderboardSetInternal *)internal;
- (void)dealloc;
- (GKLeaderboardSet *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)respondsToSelector:(SEL)arg0;
- (GKLeaderboardSet *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (GKLeaderboardSet *)initWithInternalRepresentation:(GKLeaderboardSetInternal *)arg0;
- (void)setInternal:(GKLeaderboardSetInternal *)arg0;
- (void)loadLeaderboardsForGame:(id)arg0 withCompletionHandler:(id /* block */)arg1;
- (void)loadLeaderboardsWithCompletionHandler:(id /* block */)arg0;
- (void)loadLeaderboardsForGame:(id)arg0 forPlayer:(ATVPlayer *)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
