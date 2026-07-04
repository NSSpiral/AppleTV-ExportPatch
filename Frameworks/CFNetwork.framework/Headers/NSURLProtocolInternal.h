/* Runtime dump - NSURLProtocolInternal
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLProtocolInternal : NSObject
{
    <NSURLProtocolClient> * client;
    NSURLRequest * request;
    NSCachedURLResponse * cachedResponse;
    NSLock * mutex;
}

- (void)dealloc;
- (NSURLProtocolInternal *)init;

@end
