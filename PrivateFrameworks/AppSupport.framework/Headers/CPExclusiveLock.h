/* Runtime dump - CPExclusiveLock
 * Image: /System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPExclusiveLock : NSObject <NSLocking>
{
    int _fd;
    NSString * _name;
}

- (char)tryLock;
- (void)dealloc;
- (CPExclusiveLock *)init;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)lock;
- (void)unlock;
- (CPExclusiveLock *)initWithName:(NSString *)arg0;

@end
