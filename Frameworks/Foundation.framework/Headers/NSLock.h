/* Runtime dump - NSLock
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSLock : NSObject <NSLocking>
{
    void * _priv;
}

@property (copy) NSString * name;

+ (NSLock *)allocWithZone:(struct _NSZone *)arg0;

- (void)mf_waitForLock;
- (char)tryLock;
- (char)lockBeforeDate:(NSDate *)arg0;
- (void)dealloc;
- (NSLock *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)lock;
- (void)unlock;
- (void)finalize;

@end
