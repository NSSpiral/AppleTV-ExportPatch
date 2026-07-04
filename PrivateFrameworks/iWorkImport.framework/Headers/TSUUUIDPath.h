/* Runtime dump - TSUUUIDPath
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSUUUIDPath : NSObject <NSCopying, NSFastEnumeration>
{
    NSArray * _uuids;
}

@property (readonly, nonatomic) NSArray * uuids;
@property (readonly, nonatomic) NSUUID * lastUUID;
@property (readonly, nonatomic) NSString * UUIDPathString;

+ (NSString *)lastUUIDFromUUIDPathString:(NSString *)arg0;

- (NSString *)UUIDPathString;
- (TSUUUIDPath *)initWithUUIDPathString:(NSString *)arg0;
- (id)UUIDPathByAppendingUUID:(id)arg0;
- (NSUUID *)lastUUID;
- (void)saveToMessage:(struct UUIDPath *)arg0;
- (unsigned int)countByEnumeratingWithState:(struct ? *)arg0 objects:(id *)arg1 count:(unsigned int)arg2;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (TSUUUIDPath *)copyWithZone:(struct _NSZone *)arg0;
- (TSUUUIDPath *)initWithArray:(NSArray *)arg0;
- (void).cxx_destruct;
- (TSUUUIDPath *)initWithMessage:(struct UUIDPath *)arg0;
- (NSArray *)uuids;

@end
