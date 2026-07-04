/* Runtime dump - NfhlsProtocol
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface NfhlsProtocol : NSURLProtocol

+ (void)unregisterProtocol;
+ (void)registerProtocol;
+ (NSString *)protocolScheme;
+ (void)setDebug:(char)arg0;
+ (char)canInitWithRequest:(NSURLRequest *)arg0;
+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)arg0;

- (void)startLoading;
- (void)stopLoading;

@end
