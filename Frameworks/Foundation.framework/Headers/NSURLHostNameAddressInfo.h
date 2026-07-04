/* Runtime dump - NSURLHostNameAddressInfo
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSURLHostNameAddressInfo : NSObject
{
    double timestamp;
    struct addrinfo * addressInfo;
}

+ (NSString *)addressInfoForHost:(NSString *)arg0;
+ (void)asyncResolveWithCallbackClient:(NSObject *)arg0;

- (double)_timestamp;
- (NSDictionary *)_initWithAddressInfo:(struct addrinfo *)arg0;
- (struct addrinfo *)addrinfo;
- (void)dealloc;
- (void)finalize;

@end
