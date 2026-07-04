/* Runtime dump - TRPacketEvent
 * Image: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
 */

@interface TRPacketEvent : NSObject <NSSecureCoding>
{
    unsigned int _packetEventType;
    NSDictionary * _payloadDictionary;
    unsigned int _version;
}

@property (readonly, nonatomic) NSData * networkRepresentation;
@property (nonatomic) unsigned int packetEventType;
@property (readonly, nonatomic) NSDictionary * payloadDictionary;
@property (readonly, nonatomic) unsigned int version;

+ (char)supportsSecureCoding;
+ (Class)_packetClassForPacketEventType:(unsigned int)arg0;
+ (unsigned int)_packetEventType;
+ (NSDictionary *)packetWithNetworkRepresentation:(NSData *)arg0;
+ (unsigned long)networkRepresentationHeaderLength;
+ (unsigned long)payloadSizeWithNetworkRepresentationHeader:(NSData *)arg0;

- (TRPacketEvent *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (unsigned int)version;
- (void).cxx_destruct;
- (NSString *)_initWithVersion:(unsigned int)arg0 payloadDictionary:(NSDictionary *)arg1;
- (void)setPacketEventType:(unsigned int)arg0;
- (NSData *)networkRepresentation;
- (NSObject *)_networkRepresentationForEventType:(unsigned int)arg0 version:(unsigned int)arg1 payloadDictionary:(NSDictionary *)arg2;
- (unsigned int)packetEventType;
- (NSDictionary *)payloadDictionary;

@end
