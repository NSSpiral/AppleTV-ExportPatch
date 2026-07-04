/* Runtime dump - CKDPNotificationSyncResponse
 * Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDPNotificationSyncResponse : PBCodable <NSCopying>
{
    NSData * _changeID;
    NSMutableArray * _pushMessages;
    char _moreAvailable;
    struct ? _has;
}

@property (readonly, nonatomic) char hasChangeID;
@property (retain, nonatomic) NSData * changeID;
@property (retain, nonatomic) NSMutableArray * pushMessages;
@property (nonatomic) char hasMoreAvailable;
@property (nonatomic) char moreAvailable;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (CKDPNotificationSyncResponse *)copyWithZone:(struct _NSZone *)arg0;
- (NSDictionary *)dictionaryRepresentation;
- (void).cxx_destruct;
- (void)addPushMessage:(NSString *)arg0;
- (void)setChangeID:(NSData *)arg0;
- (unsigned int)pushMessagesCount;
- (void)clearPushMessages;
- (NSObject *)pushMessageAtIndex:(unsigned int)arg0;
- (char)hasChangeID;
- (void)setMoreAvailable:(char)arg0;
- (void)setHasMoreAvailable:(char)arg0;
- (char)hasMoreAvailable;
- (NSData *)changeID;
- (NSMutableArray *)pushMessages;
- (void)setPushMessages:(NSMutableArray *)arg0;
- (char)moreAvailable;
- (void)mergeFrom:(NSObject *)arg0;
- (char)readFrom:(NSObject *)arg0;
- (void)writeTo:(NSObject *)arg0;
- (void)copyTo:(NSObject *)arg0;

@end
