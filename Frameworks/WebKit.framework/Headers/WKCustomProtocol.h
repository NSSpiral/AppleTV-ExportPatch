/* Runtime dump - WKCustomProtocol
 * Image: /System/Library/Frameworks/WebKit.framework/WebKit
 */

@interface WKCustomProtocol : NSURLProtocol
{
    unsigned long long _customProtocolID;
}

@property (readonly, nonatomic) unsigned long long customProtocolID;

+ (char)requestIsCacheEquivalent:(id)arg0 toRequest:(NSURLRequest *)arg1;
+ (char)canInitWithRequest:(NSURLRequest *)arg0;
+ (NSURLRequest *)canonicalRequestForRequest:(NSURLRequest *)arg0;

- (WKCustomProtocol *)initWithRequest:(NSURLRequest *)arg0 cachedResponse:(NSURLResponse *)arg1 client:(<NSURLProtocolClient> *)arg2;
- (void)startLoading;
- (void)stopLoading;
- (unsigned long long)customProtocolID;

@end
