/* Runtime dump - GKTurnBasedExchangeInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedExchangeInternal : GKInternalRepresentation
{
    NSString * _exchangeID;
    NSArray * _recipientIndexes;
    NSString * _statusString;
    NSDictionary * _localizableMessage;
    NSData * _data;
    NSDate * _sendDate;
    NSDate * _timeoutDate;
    NSDate * _completionDate;
    NSArray * _replies;
    unsigned char _senderIndex;
}

@property (retain, nonatomic) NSString * exchangeID;
@property (nonatomic) unsigned char senderIndex;
@property (retain, nonatomic) NSArray * recipientIndexes;
@property (retain, nonatomic) NSString * statusString;
@property (retain, nonatomic) NSDictionary * localizableMessage;
@property (retain, nonatomic) NSData * data;
@property (retain, nonatomic) NSDate * sendDate;
@property (retain, nonatomic) NSDate * timeoutDate;
@property (retain, nonatomic) NSDate * completionDate;
@property (retain, nonatomic) NSArray * replies;

+ (NSArray *)secureCodedPropertyKeys;

- (NSDate *)completionDate;
- (void)setCompletionDate:(NSDate *)arg0;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (NSDate *)timeoutDate;
- (NSArray *)replies;
- (unsigned char)senderIndex;
- (NSArray *)recipientIndexes;
- (void)setReplies:(NSArray *)arg0;
- (NSDictionary *)localizableMessage;
- (void)setLocalizableMessage:(NSDictionary *)arg0;
- (NSString *)exchangeID;
- (NSDate *)sendDate;
- (void)setTimeoutDate:(NSDate *)arg0;
- (void)setExchangeID:(NSString *)arg0;
- (void)setSenderIndex:(unsigned char)arg0;
- (void)setRecipientIndexes:(NSArray *)arg0;
- (void)setSendDate:(NSDate *)arg0;
- (NSString *)statusString;
- (void)setStatusString:(NSString *)arg0;

@end
