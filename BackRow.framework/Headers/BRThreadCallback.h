/* Runtime dump - BRThreadCallback
 * Image: /Applications/AppleTV.app/AppleTV
 */

@interface BRThreadCallback : NSObject
{
    struct __CFRunLoop * _loop;
    struct __CFRunLoopSource * _source;
    NSMutableArray * _notifications;
    NSLock * _lock;
}

- (void)dealloc;
- (BRThreadCallback *)init;

@end
