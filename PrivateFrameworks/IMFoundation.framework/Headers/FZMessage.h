/* Runtime dump - FZMessage
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface FZMessage : IMMessageItem <NSCoding, NSCopying, IMRemoteObjectCoding>

- (FZMessage *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (FZMessage *)copyWithZone:(struct _NSZone *)arg0;
- (void)encodeWithIMRemoteObjectSerializedDictionary:(NSDictionary *)arg0;
- (FZMessage *)initWithIMRemoteObjectSerializedDictionary:(NSDictionary *)arg0;

@end
