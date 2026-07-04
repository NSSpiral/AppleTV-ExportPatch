/* Runtime dump - XPCRequest
 * Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCRequest : NSObject
{
    id _handler;
    unsigned long _sequence;
    NSObject<OS_xpc_object> * _message;
    NSObject<OS_xpc_object> * _reply;
}

@property (readonly, nonatomic) unsigned long sequence;
@property (readonly, nonatomic) NSObject<OS_xpc_object> * message;
@property (readonly, nonatomic) NSObject<OS_xpc_object> * reply;

- (unsigned long)sequence;
- (NSObject<OS_xpc_object> *)message;
- (void).cxx_destruct;
- (NSObject<OS_xpc_object> *)reply;
- (void)sendReply;
- (XPCRequest *)initWithMessage:(NSObject<OS_xpc_object> *)arg0 sequence:(unsigned long)arg1 connection:(NSURLConnection *)arg2;

@end
