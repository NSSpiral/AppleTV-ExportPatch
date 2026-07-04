/* Runtime dump - NSKeyValueProxyShareKey
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueProxyShareKey : NSObject <NSKeyValueProxyCaching>
{
    NSObject * _container;
    NSString * _key;
}

+ (struct ? *)_proxyNonGCPoolPointer;
+ (NSKeyValueProxyShareKey *)_proxyShare;

- (struct ?)_proxyLocator;
- (NSObject *)_proxyInitWithContainer:(NSObject *)arg0 getter:(SEL)arg1;
- (void)_proxyNonGCFinalize;

@end
