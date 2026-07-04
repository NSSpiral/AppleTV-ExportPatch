/* Runtime dump - MSPowerBudget
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSPowerBudget : NSObject
{
    char _workQueueIsFileTransferAllowed;
    char _workQueueIsExternalPowered;
    char _workQueueIsForeground;
    <MSPowerBudgetDelegate> * _delegate;
    NSString * _focusAlbumGUID;
    NSString * _focusAssetCollectionGUID;
    NSString * _personID;
    MSPBTimerContext * _workQueuePushTimerContext;
    MSPBTimerContext * _workQueuePostForegroundTimerContext;
    MSPBTimerContext * _workQueueGlobalResetSyncTimerContext;
    NSObject<OS_dispatch_queue> * _workQueue;
    double _maxActiveTimeAfterPush;
    double _maxActiveTimeAfterLossOfForeground;
    double _maxActiveTimeAfterGlobalResetSync;
}

@property (weak, nonatomic) <MSPowerBudgetDelegate> * delegate;
@property (nonatomic) double maxActiveTimeAfterPush;
@property (nonatomic) double maxActiveTimeAfterLossOfForeground;
@property (nonatomic) double maxActiveTimeAfterGlobalResetSync;
@property (retain, nonatomic) NSString * focusAlbumGUID;
@property (retain, nonatomic) NSString * focusAssetCollectionGUID;
@property (retain, nonatomic) NSString * personID;
@property (readonly, nonatomic) char fileTransferAllowed;
@property (readonly, nonatomic) char foregroundFocus;
@property (readonly, nonatomic) char hasActiveTimers;
@property (nonatomic) char workQueueIsFileTransferAllowed;
@property (nonatomic) char workQueueIsExternalPowered;
@property (nonatomic) char workQueueIsForeground;
@property (retain, nonatomic) MSPBTimerContext * workQueuePushTimerContext;
@property (retain, nonatomic) MSPBTimerContext * workQueuePostForegroundTimerContext;
@property (retain, nonatomic) MSPBTimerContext * workQueueGlobalResetSyncTimerContext;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> * workQueue;

- (void)setDelegate:(<MSPowerBudgetDelegate> *)arg0;
- (MSPowerBudget *)init;
- (<MSPowerBudgetDelegate> *)delegate;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)workQueue;
- (void)setWorkQueue:(NSObject<OS_dispatch_queue> *)arg0;
- (void)setFocusAlbumGUID:(NSString *)arg0;
- (void)setFocusAssetCollectionGUID:(NSString *)arg0;
- (void)shutDown;
- (NSString *)focusAssetCollectionGUID;
- (NSString *)focusAlbumGUID;
- (void)workQueueSetPushTimerDate:(NSDate *)arg0;
- (void)workQueueSetPostForegroundTimerDate:(NSDate *)arg0;
- (void)workQueueSetGlobalResetSyncTimerDate:(NSDate *)arg0;
- (void)workQueueRecomputeFileTransferAllowed;
- (MSPBTimerContext *)workQueuePushTimerContext;
- (void)setWorkQueuePushTimerContext:(MSPBTimerContext *)arg0;
- (void)workQueueCommitPersistedValues;
- (MSPBTimerContext *)workQueuePostForegroundTimerContext;
- (void)setWorkQueuePostForegroundTimerContext:(MSPBTimerContext *)arg0;
- (MSPBTimerContext *)workQueueGlobalResetSyncTimerContext;
- (void)setWorkQueueGlobalResetSyncTimerContext:(MSPBTimerContext *)arg0;
- (char)workQueueIsExternalPowered;
- (char)workQueueIsForeground;
- (void)setIsFileTransferAllowed:(char)arg0;
- (double)workQueueMaxActiveTimeAfterPush;
- (void)workQueueSetForeground:(char)arg0;
- (double)workQueueMaxActiveTimeAfterLossOfForeground;
- (double)workQueueMaxActiveTimeAfterGlobalResetSync;
- (void)workQueueSetExternalPowered:(char)arg0;
- (double)maxActiveTimeAfterPush;
- (void)setMaxActiveTimeAfterPush:(double)arg0;
- (double)maxActiveTimeAfterGlobalResetSync;
- (void)setMaxActiveTimeAfterGlobalResetSync:(double)arg0;
- (double)maxActiveTimeAfterLossOfForeground;
- (void)setMaxActiveTimeAfterLossOfForeground:(double)arg0;
- (char)isFileTransferAllowed;
- (char)hasForegroundFocus;
- (char)hasActiveTimers;
- (void)workQueueSetIsFileTransferAllowed:(char)arg0;
- (void)didReceivePushNotification;
- (void)didBeginForegroundFocus;
- (void)didEndForegroundFocus;
- (void)didReceiveGlobalResetSync;
- (void)didBeginExternalPower;
- (void)didEndExternalPower;
- (void)_postForegroundTimerDidExpire:(id)arg0;
- (void)_globalResetSyncTimerDidExpire:(id)arg0;
- (char)workQueueIsFileTransferAllowed;
- (void)workQueueSetFileTransferAllowed:(char)arg0;
- (NSString *)personID;
- (void)setPersonID:(NSString *)arg0;

@end
