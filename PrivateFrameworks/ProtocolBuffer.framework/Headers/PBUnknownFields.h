/* Runtime dump - PBUnknownFields
 * Image: /System/Library/PrivateFrameworks/ProtocolBuffer.framework/ProtocolBuffer
 */

@interface PBUnknownFields : NSObject
{
    char * _buf;
    unsigned int _bufSpace;
    unsigned int _bufLen;
}

- (void)dealloc;
- (NSString *)description;
- (NSDictionary *)dictionaryRepresentation;
- (void)writeTo:(NSObject *)arg0;

@end
