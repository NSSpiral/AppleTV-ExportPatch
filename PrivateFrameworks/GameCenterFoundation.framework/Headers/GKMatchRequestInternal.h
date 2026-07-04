/* Runtime dump - GKMatchRequestInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchRequestInternal : GKInternalRepresentation
{
    unsigned int _matchType;
    NSArray * _recipients;
    NSArray * _recipientPlayerIDs;
    NSString * _inviteMessage;
    NSDictionary * _localizableInviteMessage;
    NSData * _sessionToken;
    NSString * _rid;
    unsigned int _version;
    int _playerGroup;
    unsigned int _playerAttributes;
    unsigned char _minPlayers;
    unsigned char _maxPlayers;
    unsigned char _defaultNumberOfPlayers;
}

@property (nonatomic) unsigned char minPlayers;
@property (nonatomic) unsigned char maxPlayers;
@property (nonatomic) unsigned char defaultNumberOfPlayers;
@property (nonatomic) int playerGroup;
@property (nonatomic) unsigned int playerAttributes;
@property (retain, nonatomic) NSArray * recipients;
@property (retain, nonatomic) NSArray * recipientPlayerIDs;
@property (copy, nonatomic) NSString * inviteMessage;
@property (retain, nonatomic) NSDictionary * localizableInviteMessage;
@property (nonatomic) unsigned int matchType;
@property (retain, nonatomic) NSData * sessionToken;
@property (retain, nonatomic) NSString * rid;
@property (nonatomic) unsigned int version;

+ (NSArray *)secureCodedPropertyKeys;

- (void)setRecipients:(NSArray *)arg0;
- (void)dealloc;
- (GKMatchRequestInternal *)init;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setVersion:(unsigned int)arg0;
- (unsigned int)version;
- (int)playerGroup;
- (unsigned int)playerAttributes;
- (unsigned char)minPlayers;
- (unsigned char)maxPlayers;
- (unsigned char)defaultNumberOfPlayers;
- (NSString *)inviteMessage;
- (void)setMaxPlayers:(unsigned char)arg0;
- (void)setMinPlayers:(unsigned char)arg0;
- (void)setDefaultNumberOfPlayers:(unsigned char)arg0;
- (NSArray *)recipientPlayerIDs;
- (void)setRecipientPlayerIDs:(NSArray *)arg0;
- (void)setMatchType:(unsigned int)arg0;
- (void)setRid:(NSString *)arg0;
- (void)setPlayerGroup:(int)arg0;
- (void)setPlayerAttributes:(unsigned int)arg0;
- (NSString *)rid;
- (void)setInviteMessage:(NSString *)arg0;
- (NSDictionary *)localizableInviteMessage;
- (void)setLocalizableInviteMessage:(NSDictionary *)arg0;
- (NSArray *)recipients;
- (NSData *)sessionToken;
- (void)setSessionToken:(NSData *)arg0;
- (unsigned int)matchType;

@end
