/* Runtime dump - BSAuditToken
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAuditToken : NSObject <NSCopying, BSXPCCoding>
{
    struct ? _auditToken;
}

@property (readonly, nonatomic) struct ? realToken;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSString *)tokenFromMachMessage:(struct ? *)arg0;
+ (NSString *)tokenFromXPCMessage:(NSString *)arg0;
+ (NSString *)tokenFromAuditToken:(struct ?)arg0;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (BSAuditToken *)copyWithZone:(struct _NSZone *)arg0;
- (BSAuditToken *)initWithXPCDictionary:(NSDictionary *)arg0;
- (char)hasEntitlement:(id)arg0;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (BSAuditToken *)initWithAuditToken:(struct ?)arg0;
- (BSAuditToken *)initWithXPCMessage:(NSString *)arg0;
- (BSAuditToken *)initWithMachMessage:(struct ? *)arg0;
- (NSData *)_valueFromData:(NSData *)arg0 ofType:(char *)arg1;
- (NSData *)_dataWithValue:(CHXDataValue *)arg0;
- (struct ?)realToken;
- (NSString *)bundleID;
- (int)pid;

@end
