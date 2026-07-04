/* Runtime dump - PKXPCObject
 * Image: /System/Library/PrivateFrameworks/PlugInKit.framework/PlugInKit
 */

@interface PKXPCObject : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> * _object;
}

@property (retain) NSObject<OS_xpc_object> * object;

+ (char)supportsSecureCoding;
+ (NSObject *)object:(NSObject<OS_xpc_object> *)arg0;

- (PKXPCObject *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSObject<OS_xpc_object> *)object;
- (void)setObject:(NSObject<OS_xpc_object> *)arg0;
- (void).cxx_destruct;
- (PKXPCObject *)initWithObject:(NSObject<OS_xpc_object> *)arg0;

@end
