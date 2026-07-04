/* Runtime dump - SCROWeakReferenceContainer
 * Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROWeakReferenceContainer : NSObject <NSCopying>
{
    id _weakReference;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (SCROWeakReferenceContainer *)copyWithZone:(struct _NSZone *)arg0;
- (SCROWeakReferenceContainer *)initWithObject:(NSObject *)arg0;
- (NSObject *)strongReference;
- (NSObject *)autoreleasedReference;

@end
