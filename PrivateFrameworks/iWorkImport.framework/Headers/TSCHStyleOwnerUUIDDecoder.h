/* Runtime dump - TSCHStyleOwnerUUIDDecoder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleOwnerUUIDDecoder : NSObject
{
    id mUUID;
    unsigned int mIndex;
}

+ (TSCHStyleOwnerUUIDDecoder *)UUIDDecoderWithUUID:(id)arg0;

- (char)p_hasSpaceToDecodeNumberOfBytes:(unsigned int)arg0;
- (unsigned int)decodeNSUIntegerFromUInt64;
- (void)endDecode;
- (TSCHStyleOwnerUUIDDecoder *)initWithUUID:(NSString *)arg0;
- (unsigned long long)decodeUInt64;
- (unsigned char)decodeByte;

@end
