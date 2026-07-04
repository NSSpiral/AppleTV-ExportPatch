/* Runtime dump - AFXPCWrapper
 * Image: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFXPCWrapper : NSObject <NSSecureCoding>
{
    NSObject<OS_xpc_object> * _xpcObject;
}

+ (char)supportsSecureCoding;

- (AFXPCWrapper *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (void).cxx_destruct;
- (NSObject<OS_xpc_object> *)xpcObject;
- (AFXPCWrapper *)initWithXPCObject:(NSObject *)arg0;

@end
