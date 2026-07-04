/* Runtime dump - ObjectTracker
 * Image: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface ObjectTracker : NSObject
{
    id _obj;
    unsigned int _flags;
    /* block */ id * _release_f;
    void * _context;
}

- (void)dealloc;

@end
