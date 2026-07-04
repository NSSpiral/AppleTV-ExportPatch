/* Runtime dump - GKTurnBasedExchange
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedExchange : NSObject
{
    GKTurnBasedParticipant * _sender;
    GKTurnBasedMatch * _matchWeak;
    GKTurnBasedExchangeInternal * _internal;
    NSArray * _replies;
    NSArray * _recipients;
}

@property (retain, nonatomic) NSString * exchangeID;
@property (retain, nonatomic) GKTurnBasedParticipant * sender;
@property (retain, nonatomic) NSArray * recipients;
@property (readonly, nonatomic) char status;
@property (readonly, nonatomic) NSString * message;
@property (retain, nonatomic) NSData * data;
@property (readonly, nonatomic) NSDate * sendDate;
@property (retain, nonatomic) NSDate * timeoutDate;
@property (retain, nonatomic) NSDate * completionDate;
@property (retain, nonatomic) NSArray * replies;
@property (retain) GKTurnBasedExchangeInternal * internal;
@property (nonatomic) GKTurnBasedMatch * match;

+ (char)instancesRespondToSelector:(SEL)arg0;
+ (GKTurnBasedExchange *)instanceMethodSignatureForSelector:(SEL)arg0;

- (GKTurnBasedExchangeInternal *)internal;
- (void)setRecipients:(NSArray *)arg0;
- (void)dealloc;
- (char)respondsToSelector:(SEL)arg0;
- (GKTurnBasedExchange *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)methodSignatureForSelector:(SEL)arg0;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (NSString *)message;
- (NSString *)valueForUndefinedKey:(NSString *)arg0;
- (GKTurnBasedParticipant *)sender;
- (void)setSender:(GKTurnBasedParticipant *)arg0;
- (char)status;
- (GKTurnBasedExchange *)initWithInternalRepresentation:(GKTurnBasedExchangeInternal *)arg0;
- (void)setInternal:(GKTurnBasedExchangeInternal *)arg0;
- (GKTurnBasedMatch *)match;
- (void)setMatch:(GKTurnBasedMatch *)arg0;
- (NSArray *)replies;
- (void)setReplies:(NSArray *)arg0;
- (void)_updateInternalFromMatchInternal:(id)arg0;
- (void)cancelWithLocalizableMessageKey:(NSDictionary *)arg0 arguments:(NSDictionary *)arg1 completionHandler:(id /* block */)arg2;
- (void)replyWithLocalizableMessageKey:(NSDictionary *)arg0 arguments:(NSDictionary *)arg1 data:(NSData *)arg2 completionHandler:(id /* block */)arg3;
- (NSArray *)recipients;
- (void)setValue:(NSObject *)arg0 forUndefinedKey:(NSString *)arg1;

@end
