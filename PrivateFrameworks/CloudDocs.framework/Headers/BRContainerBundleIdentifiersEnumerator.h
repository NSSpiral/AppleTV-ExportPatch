/* Runtime dump - BRContainerBundleIdentifiersEnumerator
 * Image: /System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRContainerBundleIdentifiersEnumerator : NSEnumerator
{
    NSEnumerator * _enumerator;
}

- (void)dealloc;
- (NSObject *)nextObject;
- (BRContainerBundleIdentifiersEnumerator *)initWithContainerPlist:(id)arg0;

@end
