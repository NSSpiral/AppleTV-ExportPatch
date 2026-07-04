/* Runtime dump - AXIPCMessage
 * Image: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
 */

@interface AXIPCMessage : NSObject <NSSecureCoding>
{
    int _key;
    NSDictionary * _payload;
    unsigned int _clientPort;
    struct ? _auditToken;
}

@property (nonatomic) int key;
@property (retain, nonatomic) NSDictionary * payload;
@property (nonatomic) unsigned int clientPort;
@property (nonatomic) struct ? auditToken;
@property (readonly, nonatomic) NSString * senderBundleId;

+ (char)supportsSecureCoding;
+ (NSData *)archivedMessageFromData:(NSData *)arg0;

- (void)dealloc;
- (AXIPCMessage *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (int)key;
- (NSDictionary *)payload;
- (void)setClientPort:(unsigned int)arg0;
- (void)setKey:(int)arg0;
- (struct ?)auditToken;
- (void)setPayload:(NSDictionary *)arg0;
- (AXIPCMessage *)initWithKey:(int)arg0 payload:(NSDictionary *)arg1;
- (unsigned int)clientPort;
- (AXIPCMessage *)initWithKey:(int)arg0 payload:(NSDictionary *)arg1 keyDebugInfo:(NSDictionary *)arg2;
- (NSString *)senderBundleId;
- (void)setAuditToken:(struct ?)arg0;
- (AXIPCMessage *)initWithKey:(int)arg0;

@end
