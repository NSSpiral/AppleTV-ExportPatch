/* Runtime dump - XPCEndpoint
 * Image: /System/Library/PrivateFrameworks/XPCObjects.framework/XPCObjects
 */

@interface XPCEndpoint : NSObject <NSCoding>
{
    NSObject<OS_xpc_object> * _endpoint;
}

@property (nonatomic) NSObject<OS_xpc_object> * endpoint;

- (NSURLConnection *)createConnection;
- (void)dealloc;
- (XPCEndpoint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (XPCEndpoint *)init;
- (NSObject<OS_xpc_object> *)endpoint;
- (XPCEndpoint *)initWithConnection:(NSURLConnection *)arg0;
- (void)setEndpoint:(NSObject<OS_xpc_object> *)arg0;
- (NSObject *)_initWithEndpoint:(NSObject<OS_xpc_object> *)arg0;

@end
