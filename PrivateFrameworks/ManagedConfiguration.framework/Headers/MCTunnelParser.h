/* Runtime dump - MCTunnelParser
 * Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@interface MCTunnelParser : NSObject

+ (MCTunnelParser *)responseWithStatus:(SBKResponseStatus *)arg0;
+ (NSError *)responseWithError:(NSError *)arg0;

- (id)_commandDisconnect:(NSNotification *)arg0;
- (void)processRequest:(NSURLRequest *)arg0 assertion:(unsigned int)arg1 completionBlock:(id /* block */)arg2;

@end
