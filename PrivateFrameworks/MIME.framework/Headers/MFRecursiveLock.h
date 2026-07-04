/* Runtime dump - MFRecursiveLock
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFRecursiveLock : NSRecursiveLock <MFLockObject>
{
    NSString * _name;
    id _delegate;
}

+ (void)initialize;

- (char)tryLock;
- (char)lockBeforeDate:(NSDate *)arg0;
- (void)dealloc;
- (MFRecursiveLock *)init;
- (NSString *)description;
- (void)lock;
- (void)unlock;
- (char)isLockedByMe;
- (MFRecursiveLock *)initWithName:(NSString *)arg0 andDelegate:(NSObject *)arg1;

@end
