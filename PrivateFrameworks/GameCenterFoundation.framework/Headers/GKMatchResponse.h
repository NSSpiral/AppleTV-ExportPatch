/* Runtime dump - GKMatchResponse
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchResponse : GKInternalRepresentation
{
    NSString * _rid;
    NSArray * _matches;
    NSData * _sessionToken;
    NSArray * _relayPushes;
    NSData * _cdxTicket;
    int _state;
    NSDictionary * _serverRequest;
    GKMatchRequestInternal * _matchRequest;
    GKDispatchGroup * _matchingGroup;
    int _sequence;
}

@property (retain) NSString * rid;
@property (retain) NSArray * matches;
@property (retain) NSData * sessionToken;
@property (retain) NSArray * relayPushes;
@property (retain) NSData * cdxTicket;
@property GKDispatchGroup * matchingGroup;
@property (retain) GKMatchRequestInternal * matchRequest;
@property (retain) NSDictionary * serverRequest;
@property (readonly) int sequence;
@property (nonatomic) int state;

+ (NSArray *)secureCodedPropertyKeys;

- (int)sequence;
- (void)dealloc;
- (int)state;
- (void)setState:(int)arg0;
- (char)isCancelled;
- (char)isFinished;
- (NSArray *)matches;
- (NSData *)cdxTicket;
- (NSArray *)relayPushes;
- (void)setRid:(NSString *)arg0;
- (int)_incrementSequence;
- (NSString *)rid;
- (void)setMatches:(NSArray *)arg0;
- (void)setRelayPushes:(NSArray *)arg0;
- (void)setCdxTicket:(NSData *)arg0;
- (NSDictionary *)serverRequest;
- (void)setServerRequest:(NSDictionary *)arg0;
- (GKMatchRequestInternal *)matchRequest;
- (void)setMatchRequest:(GKMatchRequestInternal *)arg0;
- (GKDispatchGroup *)matchingGroup;
- (void)setMatchingGroup:(GKDispatchGroup *)arg0;
- (char)transitionToState:(int)arg0;
- (NSData *)sessionToken;
- (void)setSessionToken:(NSData *)arg0;

@end
