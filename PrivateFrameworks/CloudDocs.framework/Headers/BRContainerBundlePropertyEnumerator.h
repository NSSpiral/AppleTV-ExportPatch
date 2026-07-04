/* Runtime dump - BRContainerBundlePropertyEnumerator
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainerBundlePropertyEnumerator : NSEnumerator
{
    NSDictionary * _plist;
    NSEnumerator * _enumerator;
    NSString * _propertyKey;
    Class _valueClass;
}

- (void)dealloc;
- (NSObject *)nextObject;
- (BRContainerBundlePropertyEnumerator *)initWithContainerPlist:(id)arg0 propertyKey:(NSString *)arg1 valuesOfClass:(Class)arg2;

@end
