/* Runtime dump - NSRecursiveLock
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSRecursiveLock : NSObject <NSLocking>
{
    void * _priv;
}

@property (copy) NSString * name;

+ (NSRecursiveLock *)allocWithZone:(struct _NSZone *)arg0;

- (char)tryLock;
- (char)lockBeforeDate:(NSDate *)arg0;
- (char)isLocking;
- (void)dealloc;
- (NSRecursiveLock *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)lock;
- (void)unlock;
- (void)finalize;

@end
