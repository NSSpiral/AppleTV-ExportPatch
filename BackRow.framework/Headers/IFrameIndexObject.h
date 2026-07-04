/* Runtime dump - IFrameIndexObject
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface IFrameIndexObject : NSObject
{
    unsigned short numPackets_;
    unsigned int chunk_;
    unsigned int ptsOffset_;
    unsigned int packetOffset_;
}

@property (nonatomic) unsigned int chunk;
@property (nonatomic) unsigned int ptsOffset;
@property (nonatomic) unsigned int packetOffset;
@property (nonatomic) unsigned short numPackets;

- (IFrameIndexObject *)initWithChunk:(unsigned int)arg0 ptsOffset:(unsigned int)arg1 packetOffset:(unsigned int)arg2 numPackets:(unsigned short)arg3;
- (unsigned int)ptsOffset;
- (unsigned int)packetOffset;
- (unsigned short)numPackets;
- (void)setChunk:(unsigned int)arg0;
- (void)setPtsOffset:(unsigned int)arg0;
- (void)setPacketOffset:(unsigned int)arg0;
- (void)setNumPackets:(unsigned short)arg0;
- (NSString *)description;
- (unsigned int)chunk;

@end
