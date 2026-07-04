/* Runtime dump - PCDistributedLock
 * Image: /System/Library/PrivateFrameworks/PersistentConnection.framework/PersistentConnection
 */

@interface PCDistributedLock : NSObject <NSLocking>
{
    NSString * _path;
    int _fd;
}

- (char)tryLock;
- (void)dealloc;
- (void)lock;
- (void)unlock;
- (PCDistributedLock *)initWithPath:(NSString *)arg0;
- (PCDistributedLock *)initWithName:(NSString *)arg0;
- (char)_lockBlocking:(char)arg0;

@end
