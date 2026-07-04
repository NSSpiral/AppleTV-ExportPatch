/* Runtime dump - FBApplicationProcessExitContext
 * Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBApplicationProcessExitContext : NSObject
{
    FBProcessState * _stateBeforeExiting;
    unsigned long long _launchdExitReason;
    unsigned int _exitReason;
    int _terminationReason;
}

@property (readonly, nonatomic) unsigned int exitReason;
@property (readonly, nonatomic) int terminationReason;
@property (readonly, copy, nonatomic) FBProcessState * stateBeforeExiting;
@property (readonly, nonatomic) long long exitStatus;
@property (readonly, nonatomic) char exitedNormally;
@property (readonly, nonatomic) int exitCode;
@property (readonly, nonatomic) int terminationSignal;

+ (unsigned int)exitReasonForLaunchdExitReason:(unsigned long long)arg0;
+ (NSString *)descriptionForExitReason:(unsigned int)arg0;

- (int)terminationReason;
- (void)dealloc;
- (NSString *)description;
- (FBApplicationProcessExitContext *)initWithExitReason:(unsigned long long)arg0 terminationReason:(int)arg1 state:(NSObject *)arg2;
- (unsigned int)exitReason;
- (char)exitedNormally;
- (long long)exitStatus;
- (int)exitCode;
- (int)terminationSignal;
- (char)consideredJetsam;
- (char)fairPlayFailure;
- (FBProcessState *)stateBeforeExiting;

@end
