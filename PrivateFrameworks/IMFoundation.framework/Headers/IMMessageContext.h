/* Runtime dump - IMMessageContext
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMMessageContext : NSObject
{
    NSObject<OS_xpc_object> * _xpcMessage;
    IMLocalObject * _localObject;
    id _context;
    char _boost;
    NSObject<OS_voucher> * _voucher;
}

@property (retain) IMLocalObject * localObject;
@property (retain) id context;
@property char shouldBoost;
@property NSObject<OS_xpc_object> * xpcMessage;

- (void)dealloc;
- (IMMessageContext *)init;
- (NSString *)context;
- (void)setContext:(NSObject *)arg0;
- (void)setXpcMessage:(NSObject<OS_xpc_object> *)arg0;
- (void)setLocalObject:(IMLocalObject *)arg0;
- (char)shouldBoost;
- (NSObject<OS_xpc_object> *)xpcMessage;
- (IMLocalObject *)localObject;
- (void)setShouldBoost:(char)arg0;

@end
