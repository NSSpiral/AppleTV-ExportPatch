/* Runtime dump - MFConditionLock
 * Image: /System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFConditionLock : NSConditionLock <MFLockObject>
{
    NSString * _name;
    id _delegate;
}

+ (void)initialize;

- (char)lockBeforeDate:(NSDate *)arg0;
- (void)dealloc;
- (MFConditionLock *)init;
- (NSString *)description;
- (void)unlock;
- (void)unlockWithCondition:(int)arg0;
- (char)isLockedByMe;
- (MFConditionLock *)initWithName:(NSString *)arg0 andDelegate:(NSObject *)arg1;
- (MFConditionLock *)initWithName:(NSString *)arg0 condition:(int)arg1 andDelegate:(NSObject *)arg2;
- (char)lockWhenCondition:(int)arg0 beforeDate:(NSDate *)arg1;

@end
