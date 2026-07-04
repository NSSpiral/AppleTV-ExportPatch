/* Runtime dump - TSCEFormulaOwnerWrapper
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCEFormulaOwnerWrapper : NSObject <NSCopying>
{
    struct __CFUUID * mOwner;
}

@property (readonly) struct __CFUUID * ownerID;
@property (readonly) struct UUIDData<TSP::UUIDData> ownerUID;

- (TSCEFormulaOwnerWrapper *)initWithTSCEFormulaOwnerID:(struct __CFUUID *)arg0;
- (char)isEqualToTSCEFormulaOwnerWrapper:(NSObject *)arg0;
- (TSCEFormulaOwnerWrapper *)initWithFormulaOwnerUID:(struct UUIDData<TSP::UUIDData> *)arg0;
- (struct UUIDData<TSP::UUIDData>)ownerUID;
- (struct __CFUUID *)ownerID;
- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSCEFormulaOwnerWrapper *)copyWithZone:(struct _NSZone *)arg0;

@end
