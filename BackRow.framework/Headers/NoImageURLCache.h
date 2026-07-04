/* Runtime dump - NoImageURLCache
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface NoImageURLCache : NSURLCache

- (id)extensionsToIgnore;
- (void)removeCachedResponseForRequest:(NSURLRequest *)arg0;
- (void)storeCachedResponse:(NSURLResponse *)arg0 forRequest:(NSURLRequest *)arg1;

@end
