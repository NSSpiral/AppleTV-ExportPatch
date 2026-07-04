/* Runtime dump - ATVProxyArray
 * Image: /System/Library/PrivateFrameworks/AppleTVServices.framework/AppleTVServices
 */

@interface ATVProxyArray : NSArray
{
    id _owner;
    NSString * _key;
    SEL _countSelector;
    /* block */ id * _countIMP;
    SEL _objectAtIndexSelector;
    /* block */ id * _objectAtIndexIMP;
    SEL _indexOfObjectSelector;
    /* block */ id * _indexOfObjectIMP;
}

- (void)dealloc;
- (unsigned int)count;
- (NSObject *)objectAtIndex:(unsigned int)arg0;
- (unsigned int)indexOfObject:(struct objc_method *)arg0;
- (ATVProxyArray *)initWithOwner:(ATVFeedDocument *)arg0 key:(NSString *)arg1;

@end
