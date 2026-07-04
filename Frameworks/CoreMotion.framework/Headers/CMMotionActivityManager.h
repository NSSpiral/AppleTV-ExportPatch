/* Runtime dump - CMMotionActivityManager
 * Image: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMMotionActivityManager : NSObject
{
    struct CLConnectionClient * fLocationConnection;
    NSObject<OS_dispatch_queue> * fQueue;
    id fHandler;
    NSOperationQueue * fHandlerQueue;
}

+ (char)isActivityAvailable;

- (void)_handleQueryResponse:(struct CLConnectionMessage *)arg0 onQueue:(struct __short)arg1 withHandler:(struct __raw)arg2;
- (void)queryActivityStartingFromDate:(NSDate *)arg0 toDate:(NSDate *)arg1 toQueue:(NSObject *)arg2 withHandler:(id /* block */)arg3;
- (void)startActivityUpdatesToQueue:(NSObject *)arg0 withHandler:(id /* block */)arg1;
- (void)stopActivityUpdates;
- (void)dealloc;
- (CMMotionActivityManager *)init;

@end
