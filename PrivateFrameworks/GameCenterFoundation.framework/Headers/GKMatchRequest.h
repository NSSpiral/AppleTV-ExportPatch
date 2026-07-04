/* Runtime dump - GKMatchRequest
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchRequest : NSObject
{
    GKMatchRequestInternal * _internal;
    id _inviteeResponseHandler;
    id _recipientResponseHandler;
}

@property unsigned int minPlayers;
@property unsigned int maxPlayers;
@property unsigned int playerGroup;
@property unsigned int playerAttributes;
@property (retain) NSArray * recipients;
@property (retain) NSArray * playersToInvite;
@property (copy) NSString * inviteMessage;
@property unsigned int defaultNumberOfPlayers;
@property (copy) id recipientResponseHandler;
@property (copy) id inviteeResponseHandler;
@property (retain) GKMatchRequestInternal * internal;

+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKMatchRequest *)instanceMethodSignatureForSelector:(SEL)arg0;
+ (unsigned int)maxPlayersAllowedForMatchOfType:(unsigned int)arg0;

- (GKMatchRequestInternal *)internal;
- (void)setRecipients:(NSArray *)arg0;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (GKMatchRequest *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (GKMatchRequest *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (GKMatchRequest *)initWithInternalRepresentation:(GKMatchRequestInternal *)arg0;
- (void)setInternal:(GKMatchRequestInternal *)arg0;
- (id /* block */)inviteeResponseHandler;
- (void)setInviteeResponseHandler:(id /* block */)arg0;
- (id /* block */)recipientResponseHandler;
- (void)setRecipientResponseHandler:(id /* block */)arg0;
- (char)defaultNumberOfPlayersIsValid;
- (char)isValidWithMax:(unsigned int)arg0;
- (char)isValidForHosted:(char)arg0;
- (char)isTurnBasedValid;
- (void)ensureValidityHosted:(char)arg0;
- (void)removeLocalPlayerFromPlayersToInvite;
- (NSArray *)playersToInvite;
- (void)setPlayersToInvite:(NSArray *)arg0;
- (void)loadRecipientsWithCompletionHandler:(id /* block */)arg0;
- (NSArray *)recipients;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
