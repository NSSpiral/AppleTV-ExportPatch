/* Runtime dump - GKTurnBasedExchangeReplyInternal
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKTurnBasedExchangeReplyInternal : GKInternalRepresentation
{
    NSDictionary * _localizableMessage;
    NSData * _data;
    NSDate * _replyDate;
    unsigned char _recipientIndex;
}

@property (nonatomic) unsigned char recipientIndex;
@property (retain, nonatomic) NSDictionary * localizableMessage;
@property (retain, nonatomic) NSData * data;
@property (retain, nonatomic) NSDate * replyDate;

+ (NSArray *)secureCodedPropertyKeys;

- (void)dealloc;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (unsigned char)recipientIndex;
- (NSDictionary *)localizableMessage;
- (void)setLocalizableMessage:(NSDictionary *)arg0;
- (void)setRecipientIndex:(unsigned char)arg0;
- (NSDate *)replyDate;
- (void)setReplyDate:(NSDate *)arg0;

@end
