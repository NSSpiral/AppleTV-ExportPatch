/* Runtime dump - FBTransactionWatchdog
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBTransactionWatchdog : BSWatchdog
{
    FBTransaction * _transaction;
}

@property (readonly, retain, nonatomic) FBTransaction * transaction;

- (void)dealloc;
- (void)invalidate;
- (void)_watchdogTimerFired;
- (void)_dumpDebugInfo;
- (FBTransactionWatchdog *)initWithTransaction:(FBTransaction *)arg0;
- (FBTransaction *)transaction;

@end
