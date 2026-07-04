/* Runtime dump - MSCupidStateMachine
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSCupidStateMachine : NSObject <MSStreamsProtocolDelegate>
{
    NSString * _personID;
    NSString * _manifestPath;
    NSMutableDictionary * _userManifest;
    MSBackoffManager * _streamsBackoffManager;
    MSBackoffManager * _MMCSBackoffManager;
    char _hasDeactivated;
}

@property (retain, nonatomic) NSMutableDictionary * _userManifest;
@property (readonly, nonatomic) NSString * personID;
@property (nonatomic) char hasDeactivated;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (void)deactivate;
- (void).cxx_destruct;
- (void)forget;
- (MSCupidStateMachine *)initWithPersonID:(NSString *)arg0;
- (NSDate *)_latestNextActivityDate;
- (void)_updateMasterManifest;
- (char)hasDeactivated;
- (void)_didReceiveStreamsRetryAfterDate:(NSDate *)arg0;
- (void)_backoffStreamsBackoffTimer;
- (void)_resetStreamsBackoffTimer;
- (void)_didReceiveMMCSRetryAfterDate:(NSDate *)arg0;
- (void)_backoffMMCSBackoffTimer;
- (void)_resetMMCSBackoffTimer;
- (void)_abort;
- (void)protocol:(Protocol *)arg0 didReceiveRetryAfterDate:(NSDate *)arg1;
- (void)_forget;
- (NSMutableDictionary *)_userManifest;
- (void)_commitUserManifest;
- (void)setHasDeactivated:(char)arg0;
- (void)set_userManifest:(NSMutableDictionary *)arg0;
- (NSString *)personID;

@end
