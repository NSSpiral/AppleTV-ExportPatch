/* Runtime dump - MPWeakRef
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPWeakRef : NSObject
{
    id _object;
    unsigned int _objectAddress;
}

+ (MPWeakRef *)weakRefWithObject:(NSObject *)arg0;

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSObject *)object;
- (void).cxx_destruct;

@end
