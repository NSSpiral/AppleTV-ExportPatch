/* Runtime dump - FBWaitForProcessDeathTransaction
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBWaitForProcessDeathTransaction : FBTransaction <FBProcessObserver>
{
    FBProcessManager * _manager;
    FBProcess * _process;
    double _timeout;
    BSWatchdog * _watchdog;
}

@property (readonly, retain, nonatomic) FBProcess * process;
@property (readonly, nonatomic) double timeout;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (FBProcess *)process;
- (void)_didComplete;
- (NSDictionary *)_customizedDescriptionProperties;
- (void)processDidExit:(id)arg0;
- (void)_begin;
- (FBWaitForProcessDeathTransaction *)initWithProcess:(FBProcess *)arg0 timeout:(double)arg1;
- (FBWaitForProcessDeathTransaction *)initWithProcess:(FBProcess *)arg0;
- (double)timeout;

@end
