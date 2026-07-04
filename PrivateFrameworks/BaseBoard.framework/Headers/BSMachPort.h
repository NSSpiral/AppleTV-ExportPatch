/* Runtime dump - BSMachPort
 * Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSMachPort : NSObject <NSCopying, BSXPCCoding>
{
    unsigned int _port;
    unsigned int _sendRights;
    unsigned int _recvRights;
    char _invalidated;
    unsigned int _portNumber;
    NSString * _debugDescription;
}

@property (readonly, nonatomic) unsigned int port;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (BSMachPort *)wrapSendRight:(unsigned int)arg0;
+ (BSMachPort *)createSendRight;
+ (BSMachPort *)createReceiveRight;
+ (BSMachPort *)taskNamePortForPID:(int)arg0;
+ (NSString *)bootstrapLookUpPortWithName:(NSString *)arg0;

- (void)dealloc;
- (NSString *)description;
- (void)invalidate;
- (char)isUsable;
- (BSMachPort *)copyWithZone:(struct _NSZone *)arg0;
- (BSMachPort *)initWithXPCDictionary:(NSDictionary *)arg0;
- (unsigned int)port;
- (void)encodeWithXPCDictionary:(NSDictionary *)arg0;
- (BSMachPort *)initWithRight:(int)arg0;
- (BSMachPort *)initWithSendRight:(unsigned int)arg0 assumeOwnership:(char)arg1;
- (void)_addRight:(int)arg0;
- (BSMachPort *)initWithPort:(unsigned int)arg0 withRights:(id)arg1;
- (BSMachPort *)initWithSendRight:(unsigned int)arg0;

@end
