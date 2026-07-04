/* Runtime dump - CBUUID
 * Image: /System/Library/Frameworks/CoreBluetooth.framework/CoreBluetooth
 */

@interface CBUUID : NSObject <NSCopying>
{
    id _bytes;
    char _type;
}

@property (readonly, nonatomic) NSData * data;
@property (readonly, nonatomic) NSString * UUIDString;

+ (NSData *)UUIDWithData:(NSData *)arg0;
+ (CBUUID *)UUIDWithCFUUID:(struct __CFUUID *)arg0;
+ (CBUUID *)UUIDWithNSUUID:(id)arg0;
+ (NSString *)UUIDWithString:(NSString *)arg0;

- (CBUUID *)initWithCFUUID:(struct __CFUUID *)arg0;
- (CBUUID *)initWithNSUUID:(NSUUID *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)UUIDString;
- (CBUUID *)copyWithZone:(struct _NSZone *)arg0;
- (NSData *)data;
- (CBUUID *)initWithData:(NSData *)arg0;
- (CBUUID *)initWithString:(NSString *)arg0;

@end
