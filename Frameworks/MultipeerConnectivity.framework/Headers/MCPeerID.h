/* Runtime dump - MCPeerID
 * Image: /System/Library/Frameworks/MultipeerConnectivity.framework/MultipeerConnectivity
 */

@interface MCPeerID : NSObject <NSCopying, NSSecureCoding>
{
    MCPeerIDInternal * _internal;
}

@property (readonly, nonatomic) NSString * displayName;

+ (char)supportsSecureCoding;

- (NSString *)idString;
- (NSData *)serializedRepresentation;
- (MCPeerID *)initWithIDString:(NSString *)arg0 displayName:(NSString *)arg1;
- (unsigned long long)pid64;
- (NSString *)internalDescription;
- (MCPeerID *)initWithPID:(unsigned int)arg0 displayName:(NSString *)arg1;
- (MCPeerID *)initWithDisplayName:(NSString *)arg0;
- (void)dealloc;
- (MCPeerID *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (MCPeerID *)copyWithZone:(struct _NSZone *)arg0;
- (NSString *)displayName;
- (MCPeerID *)initWithSerializedRepresentation:(NSData *)arg0;
- (unsigned int)pid;

@end
