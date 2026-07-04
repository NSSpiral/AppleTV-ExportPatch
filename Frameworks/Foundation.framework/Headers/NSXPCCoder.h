/* Runtime dump - NSXPCCoder
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCCoder : NSCoder
{
    <NSObject> * _userInfo;
    id _reserved1;
}

@property (retain) <NSObject> * userInfo;

- (void)dealloc;
- (NSXPCCoder *)init;
- (void)setUserInfo:(<NSObject> *)arg0;
- (<NSObject> *)userInfo;
- (void)encodeXPCObject:(NSObject *)arg0 forKey:(NSString *)arg1;
- (NSString *)decodeXPCObjectForKey:(NSString *)arg0;
- (NSObject *)decodeXPCObjectOfType:(struct _xpc_type_s *)arg0 forKey:(NSString *)arg1;
- (char)requiresSecureCoding;

@end
