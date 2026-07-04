/* Runtime dump - GKInviteInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKInviteInternal : GKInternalRepresentation
{
    NSString * _inviteID;
    NSData * _sessionToken;
    GKPlayerInternal * _player;
    NSString * _message;
    NSDictionary * _localizableMessage;
    NSString * _deviceID;
    NSString * _bundleID;
    NSString * _peerID;
    NSData * _peerPushToken;
    NSData * _peerNATIP;
    NSData * _peerBlob;
    NSString * _rid;
    int _playerGroup;
    unsigned int _playerAttributes;
    int _peerNATType;
    unsigned int _matchType;
    unsigned char _version;
    NSString * _participantID;
}

@property (retain, nonatomic) NSString * inviteID;
@property (retain, nonatomic) NSData * sessionToken;
@property (retain, nonatomic) GKPlayerInternal * player;
@property (retain, nonatomic) NSString * message;
@property (retain, nonatomic) NSDictionary * localizableMessage;
@property (nonatomic) unsigned int matchType;
@property (nonatomic) int playerGroup;
@property (nonatomic) unsigned int playerAttributes;
@property (retain, nonatomic) NSString * peerID;
@property (retain, nonatomic) NSData * peerPushToken;
@property (nonatomic) int peerNATType;
@property (retain, nonatomic) NSData * peerNATIP;
@property (retain, nonatomic) NSData * peerBlob;
@property (retain, nonatomic) NSString * rid;
@property (nonatomic) unsigned char version;
@property (retain, nonatomic) NSString * participantID;
@property (retain, nonatomic) NSString * deviceID;
@property (retain, nonatomic) NSString * bundleID;
@property (readonly, nonatomic) char isNearby;

+ (NSArray *)secureCodedPropertyKeys;
+ (CALayer *)inviteFromNearbyPlayer:(id)arg0 participantID:(NSString *)arg1 deviceID:(NSString *)arg2 bundleID:(NSString *)arg3 connectionData:(NSData *)arg4;
+ (NSObject *)nearbyInviteIDForPlayerID:(NSObject *)arg0 deviceID:(NSString *)arg1 bundleID:(NSString *)arg2;
+ (GKInviteInternal *)inviteWithBulletin:(BBBulletin *)arg0;

- (NSString *)peerID;
- (void)setPeerID:(NSString *)arg0;
- (void)dealloc;
- (GKInviteInternal *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)message;
- (void)setMessage:(NSString *)arg0;
- (void)setVersion:(unsigned char)arg0;
- (unsigned char)version;
- (NSString *)deviceID;
- (NSString *)bundleID;
- (void)setDeviceID:(NSString *)arg0;
- (void)setBundleID:(NSString *)arg0;
- (NSString *)participantID;
- (void)setParticipantID:(NSString *)arg0;
- (NSString *)inviteID;
- (int)playerGroup;
- (unsigned int)playerAttributes;
- (NSData *)peerBlob;
- (NSData *)peerPushToken;
- (int)peerNATType;
- (NSData *)peerNATIP;
- (void)setMatchType:(unsigned int)arg0;
- (void)setRid:(NSString *)arg0;
- (NSDictionary *)localizableMessage;
- (void)setLocalizableMessage:(NSDictionary *)arg0;
- (void)setPlayerGroup:(int)arg0;
- (void)setPlayerAttributes:(unsigned int)arg0;
- (NSString *)rid;
- (void)setInviteID:(NSString *)arg0;
- (void)setPeerPushToken:(NSData *)arg0;
- (void)setPeerNATType:(int)arg0;
- (void)setPeerNATIP:(NSData *)arg0;
- (void)setPeerBlob:(NSData *)arg0;
- (char)isNearby;
- (NSData *)sessionToken;
- (void)setSessionToken:(NSData *)arg0;
- (void)setPlayer:(GKPlayerInternal *)arg0;
- (GKPlayerInternal *)player;
- (unsigned int)matchType;

@end
