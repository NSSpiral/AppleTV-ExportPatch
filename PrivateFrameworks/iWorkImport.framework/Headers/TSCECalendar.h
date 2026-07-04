/* Runtime dump - TSCECalendar
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCECalendar : NSObject
{
    NSCalendar * mCalendar;
    NSObject<OS_dispatch_semaphore> * mSem;
}

- (void)dealloc;
- (TSCECalendar *)init;
- (void)setTimeZone:(NSTimeZone *)arg0;
- (NSArray *)dateByAddingComponents:(NSArray *)arg0 toDate:(NSDate *)arg1 options:(unsigned int)arg2;
- (NSArray *)components:(unsigned int)arg0 fromDate:(NSDate *)arg1;
- (NSArray *)dateFromComponents:(NSArray *)arg0;
- (NSArray *)components:(unsigned int)arg0 fromDate:(NSDate *)arg1 toDate:(NSDate *)arg2 options:(unsigned int)arg3;
- (TSCECalendar *)initWithCalendarIdentifier:(NSString *)arg0;

@end
