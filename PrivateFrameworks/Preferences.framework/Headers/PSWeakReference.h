/* Runtime dump - PSWeakReference
 * Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@interface PSWeakReference : NSObject <NSCopying>
{
    id _location;
}

+ (NSObject *)weakReferenceWithObject:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (PSWeakReference *)copyWithZone:(struct _NSZone *)arg0;
- (NSObject *)object;
- (NSString *)forwardingTargetForSelector:(SEL)arg0;
- (PSWeakReference *)initWithObject:(NSObject *)arg0;

@end
