/* Runtime dump - FigWeakReference
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface FigWeakReference : NSObject
{
    id _referencedObject;
}

@property (readonly) id referencedObject;

+ (NSObject *)weakReferenceToObject:(NSObject *)arg0;

- (FigWeakReference *)initWithReferencedObject:(NSObject *)arg0;
- (void)dealloc;
- (NSObject *)retainReferencedObject;
- (NSObject *)referencedObject;

@end
