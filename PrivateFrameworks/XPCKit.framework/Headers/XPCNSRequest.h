/* Runtime dump - XPCNSRequest
 * Image: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
 */

@interface XPCNSRequest : NSObject
{
    <NSCoding> * _message;
    NSData * _data;
    XPCRequest * _request;
}

@property (readonly, retain, nonatomic) XPCRequest * request;
@property (readonly, retain, nonatomic) <NSCoding> * message;
@property (readonly, retain, nonatomic) NSData * data;

- (XPCRequest *)request;
- (NSData *)data;
- (<NSCoding> *)message;
- (void).cxx_destruct;
- (void)sendReply:(id /* block */)arg0;
- (XPCNSRequest *)initWithXPCRequest:(NSURLRequest *)arg0;

@end
