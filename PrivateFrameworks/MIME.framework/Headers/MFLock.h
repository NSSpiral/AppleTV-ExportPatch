/* Runtime dump - MFLock
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFLock : NSLock <MFLockObject>
{
    NSString * _name;
    id _delegate;
}

+ (void)initialize;

- (char)tryLock;
- (char)lockBeforeDate:(NSDate *)arg0;
- (void)dealloc;
- (MFLock *)init;
- (NSString *)description;
- (void)lock;
- (void)unlock;
- (char)isLockedByMe;
- (MFLock *)initWithName:(NSString *)arg0 andDelegate:(NSObject *)arg1;

@end
