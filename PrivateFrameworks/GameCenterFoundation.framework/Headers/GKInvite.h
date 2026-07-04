/* Runtime dump - GKInvite
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKInvite : NSObject
{
    char _cancelled;
    GKInviteInternal * _internal;
    GKPlayer * _sender;
}

@property (readonly, retain, nonatomic) GKPlayer * sender;
@property (readonly, retain, nonatomic) NSString * inviter;
@property (readonly, nonatomic) char hosted;
@property (readonly, nonatomic) unsigned int playerGroup;
@property (readonly, nonatomic) unsigned int playerAttributes;
@property (retain) GKInviteInternal * internal;
@property (readonly, nonatomic) NSString * inviteID;
@property (readonly, nonatomic) NSData * sessionToken;
@property (readonly, nonatomic) NSString * message;
@property (readonly, nonatomic) char isNearby;
@property (nonatomic) char cancelled;

+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKInvite *)instanceMethodSignatureForSelector:(SEL)arg0;

- (GKInviteInternal *)internal;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (GKInvite *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (char)isCancelled;
- (void)setCancelled:(char)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (GKPlayer *)sender;
- (GKInvite *)initWithInternalRepresentation:(GKInviteInternal *)arg0;
- (void)setInternal:(GKInviteInternal *)arg0;
- (char)isHosted;
- (NSString *)inviter;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
