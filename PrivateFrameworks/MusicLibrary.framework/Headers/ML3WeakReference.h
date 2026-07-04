/* Runtime dump - ML3WeakReference
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3WeakReference : NSObject
{
    id _object;
    unsigned int _objectAddress;
}

+ (NSObject *)weakReferenceWithObject:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSObject *)object;
- (void).cxx_destruct;
- (ML3WeakReference *)initWithObject:(NSObject *)arg0;

@end
