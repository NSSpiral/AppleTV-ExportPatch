/* Runtime dump - NSConditionLock
 * Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSConditionLock : NSObject <NSLocking>
{
    void * _priv;
}

@property (readonly) int condition;
@property (copy) NSString * name;

+ (NSConditionLock *)allocWithZone:(struct _NSZone *)arg0;

- (char)tryLock;
- (char)lockBeforeDate:(NSDate *)arg0;
- (void)dealloc;
- (NSConditionLock *)init;
- (NSString *)description;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)lock;
- (void)unlock;
- (int)condition;
- (NSConditionLock *)initWithCondition:(int)arg0;
- (void)lockWhenCondition:(int)arg0;
- (char)tryLockWhenCondition:(int)arg0;
- (void)unlockWithCondition:(int)arg0;
- (char)lockWhenCondition:(int)arg0 beforeDate:(NSDate *)arg1;
- (void)finalize;

@end
