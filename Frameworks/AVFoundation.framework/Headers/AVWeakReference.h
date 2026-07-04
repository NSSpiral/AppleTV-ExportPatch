/* Runtime dump - AVWeakReference
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVWeakReference : NSObject

+ (void)initialize;
+ (AVWeakReference *)allocWithZone:(struct _NSZone *)arg0;

- (AVWeakReference *)initWithReferencedObject:(NSObject *)arg0;
- (NSObject *)referencedObject;

@end
