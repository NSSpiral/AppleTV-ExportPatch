/* Runtime dump - MFWeakReferenceHolder
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFWeakReferenceHolder : NSObject
{
    <NSObject> * _reference;
}

+ (NSObject *)weakReferenceWithObject:(NSObject *)arg0;

- (NSObject *)_initWithObject:(NSObject *)arg0;
- (void)dealloc;
- (MFWeakReferenceHolder *)init;
- (NSObject *)retainedReference;
- (<NSObject> *)reference;

@end
