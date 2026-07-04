/* Runtime dump - GKTurnBasedExchangeReply
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedExchangeReply : NSObject
{
    GKTurnBasedParticipant * _recipient;
    GKTurnBasedExchangeReplyInternal * _internal;
    GKTurnBasedMatch * _matchWeak;
}

@property (retain, nonatomic) GKTurnBasedParticipant * recipient;
@property (readonly, nonatomic) NSString * message;
@property (retain, nonatomic) NSData * data;
@property (readonly, nonatomic) NSDate * replyDate;
@property (retain) GKTurnBasedExchangeReplyInternal * internal;
@property (nonatomic) GKTurnBasedMatch * match;

+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKTurnBasedExchangeReply *)instanceMethodSignatureForSelector:(SEL)arg0;

- (GKTurnBasedExchangeReplyInternal *)internal;
- (void)setRecipient:(GKTurnBasedParticipant *)arg0;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (GKTurnBasedExchangeReply *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)message;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (GKTurnBasedExchangeReply *)initWithInternalRepresentation:(GKTurnBasedExchangeReplyInternal *)arg0;
- (void)setInternal:(GKTurnBasedExchangeReplyInternal *)arg0;
- (GKTurnBasedMatch *)match;
- (void)setMatch:(GKTurnBasedMatch *)arg0;
- (GKTurnBasedParticipant *)recipient;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
