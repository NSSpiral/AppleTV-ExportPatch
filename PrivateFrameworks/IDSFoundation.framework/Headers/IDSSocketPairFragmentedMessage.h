/* Runtime dump - IDSSocketPairFragmentedMessage
 * Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSSocketPairFragmentedMessage : IDSSocketPairMessage
{
    unsigned int _offset;
    unsigned int _fragmentedMessageID;
    unsigned int _fragmentIndex;
    unsigned int _totalFragmentCount;
    NSData * _data;
}

@property (readonly, nonatomic) unsigned int fragmentedMessageID;
@property (readonly, nonatomic) unsigned int fragmentIndex;
@property (readonly, nonatomic) unsigned int totalFragmentCount;
@property (readonly, nonatomic) NSData * data;

+ (IDSSocketPairFragmentedMessage *)createOriginalMessageFromFragmentedMessages:(id)arg0;
+ (NSString *)createMessageFragmentsFromOriginalMessage:(NSString *)arg0 withFragmentedMessageID:(unsigned int)arg1 fragmentSize:(unsigned int)arg2;

- (unsigned char)command;
- (void)dealloc;
- (NSString *)description;
- (NSData *)data;
- (IDSSocketPairFragmentedMessage *)initWithCommand:(unsigned char)arg0 underlyingData:(NSData *)arg1;
- (NSData *)_nonHeaderData;
- (unsigned int)totalFragmentCount;
- (IDSSocketPairFragmentedMessage *)initWithData:(NSData *)arg0 withFragmentedMessageID:(unsigned int)arg1 fragmentIndex:(unsigned int)arg2 totalFragmentCount:(unsigned int)arg3;
- (unsigned int)fragmentedMessageID;
- (unsigned int)fragmentIndex;

@end
