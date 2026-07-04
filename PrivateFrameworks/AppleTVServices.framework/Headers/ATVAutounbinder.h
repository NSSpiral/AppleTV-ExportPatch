/* Runtime dump - ATVAutounbinder
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVAutounbinder : NSObject
{
    NSMapTable * _bindingsByObject;
    char _assertOnRetainEnabled;
}

- (ATVAutounbinder *)retain;
- (void)dealloc;
- (ATVAutounbinder *)init;
- (void)_assertIllegalRetain;
- (void)addBinding:(id)arg0 fromObject:(NSObject *)arg1;
- (void)removeBinding:(id)arg0 fromObject:(NSObject *)arg1;
- (void)_notifyBindingAdaptors;
- (void)_enableAssertOnRetain;

@end
