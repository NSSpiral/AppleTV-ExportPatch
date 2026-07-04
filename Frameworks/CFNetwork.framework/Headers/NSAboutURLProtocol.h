/* Runtime dump - NSAboutURLProtocol
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSAboutURLProtocol : NSURLProtocol

+ (char)canInitWithRequest:(NSURLRequest *)arg0;
+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)arg0;

- (void)startLoading;
- (void)stopLoading;

@end
