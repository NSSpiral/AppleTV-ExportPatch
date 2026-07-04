/* Runtime dump - NSURLProtocol
 * Image: /System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLProtocol : NSObject
{
    NSURLProtocolInternal * _internal;
}

@property (readonly, retain) <NSURLProtocolClient> * client;
@property (readonly, copy) NSURLRequest * request;
@property (readonly, copy) NSCachedURLResponse * cachedResponse;

+ (char)canInitWithTask:(NSObject *)arg0;
+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)arg0 task:(NSObject *)arg1;
+ (char)requestIsCacheEquivalent:(id)arg0 toRequest:(NSURLRequest *)arg1;
+ (void)unregisterClass:(Class)arg0;
+ (NSString *)propertyForKey:(NSString *)arg0 inRequest:(NSURLRequest *)arg1;
+ (void)setProperty:(NSString *)arg0 forKey:(NSString *)arg1 inRequest:(NSURLRequest *)arg2;
+ (void)removePropertyForKey:(NSString *)arg0 inRequest:(NSURLRequest *)arg1;
+ (NSURLProtocol *)_makeRequestCanonicalByMakingRequestURLCanonical:(id)arg0;
+ (char)registerClass:(Class)arg0;
+ (char)canInitWithRequest:(NSURLRequest *)arg0;
+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)arg0;
+ (Class)_protocolClassForRequest:(NSURLRequest *)arg0;

- (NSURLProtocol *)initWithRequest:(NSURLRequest *)arg0 cachedResponse:(NSCachedURLResponse *)arg1 client:(<NSURLProtocolClient> *)arg2;
- (NSCachedURLResponse *)cachedResponse;
- (NSURLProtocol *)initWithTask:(NSObject *)arg0 cachedResponse:(NSCachedURLResponse *)arg1 client:(<NSURLProtocolClient> *)arg2;
- (void)startLoading;
- (void)dealloc;
- (NSURLRequest *)request;
- (void)stopLoading;
- (<NSURLProtocolClient> *)client;

@end
