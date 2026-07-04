/* Runtime dump - TSCHStyleOwnerUUIDEncoder
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHStyleOwnerUUIDEncoder : NSObject
{
    id mUUID;
    unsigned int mIndex;
}

+ (NSString *)styleOwnerBaseUUIDString;
+ (NSObject *)UUIDEncoder;
+ (TSCHStyleOwnerUUIDEncoder *)styleOwnerBaseUUID;
+ (NSObject *)UUIDEncoderWithStyleOwnerPathType:(unsigned char)arg0;

- (char)hasSpaceToEncodeNumberOfBytes:(unsigned int)arg0;
- (void)encodeUInt64FromNSUInteger:(unsigned int)arg0;
- (id)encodedUUID;
- (TSCHStyleOwnerUUIDEncoder *)init;
- (void)encodeUInt64:(unsigned long long)arg0;
- (void)encodeByte:(unsigned char)arg0;

@end
