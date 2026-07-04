/* Runtime dump - SSXPCData
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSXPCData : NSData
{
    NSObject<OS_xpc_object> * _xpcData;
}

@property (readonly, nonatomic) NSObject<OS_xpc_object> * xpcData;

- (void)dealloc;
- (unsigned int)length;
- (void *)bytes;
- (SSXPCData *)copyWithZone:(struct _NSZone *)arg0;
- (SSXPCData *)initWithXPCData:(NSData *)arg0;
- (NSObject<OS_xpc_object> *)xpcData;

@end
