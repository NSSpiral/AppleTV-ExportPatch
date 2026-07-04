/* Runtime dump - DASharedCalendarContext
 * Image: /System/Library/PrivateFrameworks/DataAccessExpress.framework/DataAccessExpress
 */

@interface DASharedCalendarContext : NSObject
{
    char _shouldSyncCalendar;
    NSString * _calendarID;
    NSString * _accountID;
    NSObject<OS_dispatch_queue> * _queue;
    id _completionBlock;
}

@property (readonly, nonatomic) NSString * calendarID;
@property (readonly, nonatomic) NSString * accountID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly, copy, nonatomic) id completionBlock;
@property (nonatomic) char shouldSyncCalendar;

- (id /* block */)completionBlock;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (NSString *)accountID;
- (void)finishedWithError:(NSError *)arg0;
- (char)shouldSyncCalendar;
- (DASharedCalendarContext *)initWithCalendarID:(NSString *)arg0 accountID:(NSString *)arg1 queue:(NSObject<OS_dispatch_queue> *)arg2 completionBlock:(id /* block */)arg3;
- (NSString *)calendarID;
- (void)setShouldSyncCalendar:(char)arg0;

@end
