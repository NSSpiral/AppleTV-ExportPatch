/* Runtime dump - GKMatchPacket
 * Image: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
 */

@interface GKMatchPacket : NSObject
{
    unsigned char _version;
    unsigned char _packetType;
    unsigned int _sequenceNumber;
    unsigned int _totalLength;
    unsigned short _checksum;
    char _valid;
    NSData * _data;
}

@property (nonatomic) unsigned char version;
@property (nonatomic) unsigned char packetType;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) unsigned int totalLength;
@property (nonatomic) unsigned short checksum;
@property (nonatomic) char valid;
@property (retain, nonatomic) NSData * data;

- (void)dealloc;
- (GKMatchPacket *)init;
- (NSData *)data;
- (void)setData:(NSData *)arg0;
- (NSString *)message;
- (char)valid;
- (void)setVersion:(unsigned char)arg0;
- (unsigned char)version;
- (void)setValid:(char)arg0;
- (void)setPacketType:(unsigned char)arg0;
- (void)setTotalLength:(unsigned int)arg0;
- (unsigned int)totalLength;
- (unsigned char)packetType;
- (void)setChecksum:(unsigned short)arg0;
- (void)setSequenceNumber:(unsigned int)arg0;
- (unsigned int)sequenceNumber;
- (unsigned short)checksum;
- (GKMatchPacket *)initWithMessage:(NSString *)arg0;

@end
