/* Runtime dump - CKDPNotificationSyncResponsePushMessage
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying>
{
    int _badgeCount;
    NSString * _dialog;
    NSData * _payload;
    NSString * _sound;
    int _source;
    NSString * _uuid;
    char _isRead;
    struct ? _has;
}

@property (nonatomic) char hasIsRead;
@property (nonatomic) char isRead;
@property (readonly, nonatomic) char hasUuid;
@property (retain, nonatomic) NSString * uuid;
@property (nonatomic) char hasSource;
@property (nonatomic) int source;
@property (readonly, nonatomic) char hasDialog;
@property (retain, nonatomic) NSString * dialog;
@property (readonly, nonatomic) char hasSound;
@property (retain, nonatomic) NSString * sound;
@property (nonatomic) char hasBadgeCount;
@property (nonatomic) int badgeCount;
@property (readonly, nonatomic) char hasPayload;
@property (retain, nonatomic) NSData * payload;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSData *)payload;
- (CKDPNotificationSyncResponsePushMessage *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (int)source;
- (void)setSource:(int)arg0;
- (void).cxx_destruct;
- (NSString *)uuid;
- (void)setPayload:(NSData *)arg0;
- (void)setBadgeCount:(int)arg0;
- (void)setHasBadgeCount:(char)arg0;
- (char)hasBadgeCount;
- (int)badgeCount;
- (char)hasUuid;
- (char)hasDialog;
- (NSString *)dialog;
- (NSString *)sound;
- (char)hasIsRead;
- (char)isRead;
- (void)setDialog:(NSString *)arg0;
- (void)setSound:(NSString *)arg0;
- (void)setIsRead:(char)arg0;
- (void)setHasIsRead:(char)arg0;
- (void)setHasSource:(char)arg0;
- (char)hasSource;
- (char)hasSound;
- (char)hasPayload;
- (void)setUuid:(NSString *)arg0;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
