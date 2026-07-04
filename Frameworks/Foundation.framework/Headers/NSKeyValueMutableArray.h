/* Runtime dump - NSKeyValueMutableArray
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueMutableArray : NSMutableArray <NSKeyValueProxyCaching>
{
    NSObject * _container;
    NSString * _key;
}

+ (struct ? *)_proxyNonGCPoolPointer;
+ (NSKeyValueMutableArray *)_proxyShare;

- (struct ?)_proxyLocator;
- (NSObject *)_proxyInitWithContainer:(NSObject *)arg0 getter:(SEL)arg1;
- (void)_proxyNonGCFinalize;
- (void)dealloc;
- (void)setArray:(NSArray *)arg0;

@end
