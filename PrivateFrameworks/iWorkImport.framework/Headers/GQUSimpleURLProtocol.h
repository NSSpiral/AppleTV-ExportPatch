/* Runtime dump - GQUSimpleURLProtocol
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQUSimpleURLProtocol : NSURLProtocol

+ (void)setResourcesDictionary:(NSDictionary *)arg0;
+ (char)requestIsCacheEquivalent:(id)arg0 toRequest:(NSURLRequest *)arg1;
+ (char)canInitWithRequest:(NSURLRequest *)arg0;
+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)arg0;

- (void)startLoading;
- (void)stopLoading;

@end
