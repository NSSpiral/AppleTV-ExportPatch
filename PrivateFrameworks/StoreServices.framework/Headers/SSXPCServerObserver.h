/* Runtime dump - SSXPCServerObserver
 * Image: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSXPCServerObserver : NSObject
{
    id _observer;
    SEL _selector;
}

@property (nonatomic) id observer;
@property (nonatomic) SEL selector;

- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (void)setSelector:(SEL)arg0;
- (SEL)selector;
- (MCResourceProgressObserver *)observer;
- (void)setObserver:(NSObject *)arg0;

@end
