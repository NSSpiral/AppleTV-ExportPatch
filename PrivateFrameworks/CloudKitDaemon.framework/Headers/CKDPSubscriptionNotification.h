/* Runtime dump - CKDPSubscriptionNotification
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPSubscriptionNotification : PBCodable <NSCopying>
{
    NSMutableArray * _additionalFields;
    CKDPSubscriptionNotificationAlert * _alert;
    char _shouldBadge;
    char _shouldSendContentAvailable;
    struct ? _has;
}

@property (readonly, nonatomic) char hasAlert;
@property (retain, nonatomic) CKDPSubscriptionNotificationAlert * alert;
@property (nonatomic) char hasShouldBadge;
@property (nonatomic) char shouldBadge;
@property (retain, nonatomic) NSMutableArray * additionalFields;
@property (nonatomic) char hasShouldSendContentAvailable;
@property (nonatomic) char shouldSendContentAvailable;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPSubscriptionNotification *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (char)hasAlert;
- (CKDPSubscriptionNotificationAlert *)alert;
- (char)shouldBadge;
- (void)setShouldBadge:(char)arg0;
- (char)shouldSendContentAvailable;
- (void)setShouldSendContentAvailable:(char)arg0;
- (NSMutableArray *)additionalFields;
- (void)setAdditionalFields:(NSMutableArray *)arg0;
- (void)setAlert:(CKDPSubscriptionNotificationAlert *)arg0;
- (void)addAdditionalFields:(NSArray *)arg0;
- (unsigned int)additionalFieldsCount;
- (void)clearAdditionalFields;
- (NSObject *)additionalFieldsAtIndex:(unsigned int)arg0;
- (void)setHasShouldBadge:(char)arg0;
- (char)hasShouldBadge;
- (void)setHasShouldSendContentAvailable:(char)arg0;
- (char)hasShouldSendContentAvailable;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
