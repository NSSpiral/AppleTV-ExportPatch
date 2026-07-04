/* Runtime dump - NSCachedURLResponseInternal
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSCachedURLResponseInternal : NSObject
{
    NSURLResponse * response;
    NSData * data;
    NSDictionary * userInfo;
    unsigned int storagePolicy;
    struct _CFCachedURLResponse * _cachedURLResponse;
}

- (void)dealloc;

@end
