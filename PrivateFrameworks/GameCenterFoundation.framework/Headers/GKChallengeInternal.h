/* Runtime dump - GKChallengeInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKChallengeInternal : GKInternalRepresentation
{
    NSString * _challengeID;
    NSString * _message;
    NSDate * _issueDate;
    NSDate * _completionDate;
    NSOrderedSet * _compatibleBundleIDs;
    GKGameInternal * _game;
    GKPlayerInternal * _issuingPlayer;
    GKPlayerInternal * _receivingPlayer;
    int _state;
    NSString * _bundleID;
}

@property (retain, nonatomic) NSString * challengeID;
@property (retain, nonatomic) NSString * bundleID;
@property (retain, nonatomic) NSDate * issueDate;
@property (retain, nonatomic) NSDate * completionDate;
@property (nonatomic) int state;
@property (retain, nonatomic) NSOrderedSet * compatibleBundleIDs;
@property (retain, nonatomic) NSString * message;
@property (retain, nonatomic) GKGameInternal * game;
@property (retain, nonatomic) GKPlayerInternal * issuingPlayer;
@property (retain, nonatomic) GKPlayerInternal * receivingPlayer;
@property (readonly, nonatomic) unsigned int type;

+ (NSDictionary *)internalRepresentation;
+ (NSArray *)secureCodedPropertyKeys;

- (NSDate *)completionDate;
- (void)setCompletionDate:(NSDate *)arg0;
- (void)dealloc;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (int)state;
- (void)setState:(int)arg0;
- (unsigned int)type;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (NSString *)bundleID;
- (void)setBundleID:(NSString *)arg0;
- (NSDictionary *)serverRepresentation;
- (GKGameInternal *)game;
- (void)setGame:(GKGameInternal *)arg0;
- (GKPlayerInternal *)receivingPlayer;
- (void)setIssuingPlayer:(GKPlayerInternal *)arg0;
- (GKPlayerInternal *)issuingPlayer;
- (NSString *)challengeID;
- (NSDate *)issueDate;
- (CALayer *)serverRepresentationForReceivingPlayer:(id)arg0;
- (NSObject *)findLocalGameBundleID;
- (void)setChallengeID:(NSString *)arg0;
- (void)setReceivingPlayer:(GKPlayerInternal *)arg0;
- (NSOrderedSet *)compatibleBundleIDs;
- (void)setCompatibleBundleIDs:(NSOrderedSet *)arg0;
- (void)setIssueDate:(NSDate *)arg0;

@end
