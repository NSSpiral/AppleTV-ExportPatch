/* Runtime dump - AVRetainReleaseWeakReference
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVRetainReleaseWeakReference : AVWeakReference
{
    NSString * _cachedReferencedObjectDescription;
    id _weakStorage;
}

- (AVRetainReleaseWeakReference *)initWithReferencedObject:(NSObject *)arg0;
- (void)dealloc;
- (AVRetainReleaseWeakReference *)init;
- (NSString *)description;
- (NSObject *)referencedObject;

@end
