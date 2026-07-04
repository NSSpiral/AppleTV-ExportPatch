/* Runtime dump - SASSpeechPacket
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SASSpeechPacket : SABaseCommand <SAServerBoundCommand>

@property (nonatomic) int packetNumber;
@property (copy, nonatomic) NSArray * packets;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSData *)speechPacket;
+ (NSDictionary *)speechPacketWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (int)packetNumber;
- (void)setPacketNumber:(int)arg0;
- (NSArray *)packets;
- (void)setPackets:(NSArray *)arg0;

@end
