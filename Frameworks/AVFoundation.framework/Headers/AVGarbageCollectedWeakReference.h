/* Runtime dump - AVGarbageCollectedWeakReference
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVGarbageCollectedWeakReference : AVWeakReference
{
    id _referencedObject;
    NSString * _cachedReferencedObjectDescription;
}

- (AVGarbageCollectedWeakReference *)initWithReferencedObject:(NSObject *)arg0;
- (AVGarbageCollectedWeakReference *)init;
- (NSString *)description;
- (NSObject *)referencedObject;

@end
