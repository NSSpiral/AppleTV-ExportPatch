/* Runtime dump - NSXPCListenerEndpoint
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSXPCListenerEndpoint : NSObject <NSSecureCoding>
{
    void * _internal;
}

+ (char)supportsSecureCoding;

- (NSObject *)_endpoint;
- (NSURLConnection *)_initWithConnection:(NSURLConnection *)arg0;
- (void)_setEndpoint:(NSObject *)arg0;
- (void)dealloc;
- (NSXPCListenerEndpoint *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSXPCListenerEndpoint *)init;
- (void)finalize;

@end
