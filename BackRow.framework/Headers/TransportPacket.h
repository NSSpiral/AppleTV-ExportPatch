/* Runtime dump - TransportPacket
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class Buffer;
@interface TransportPacket : NSObject
{
    Buffer * buffer;
    int payloadLength;
    id objectID;
}

- (TransportPacket *)initWithData:(char *)arg0 length:(unsigned int)arg1;
- (int)getPayloadLength;
- (char *)getPayload;
- (char *)getHeaderObjectID;
- (NSError *)getError;
- (void).cxx_destruct;
- (TransportPacket *)initWithData:(char *)arg0 offset:(unsigned int)arg1 length:(unsigned int)arg2;

@end
