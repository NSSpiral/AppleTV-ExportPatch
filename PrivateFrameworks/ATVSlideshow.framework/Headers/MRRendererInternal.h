/* Runtime dump - MRRendererInternal
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MRRendererInternal : NSObject
{
    MRContext * mContext;
    double mMasterStartTime;
    double mMasterDuration;
    int mMasterMode;
    NSThread * mRenderThread;
    NSRecursiveLock * mRenderLock;
    NSConditionLock * mFrameLock;
    double mTimeOffset;
    double mUnalteredTimeOffset;
    double mMasterClock;
    char mIsStalled;
    char mRenderingRequested;
    char mHasToRebuildAudio;
    char mDontShowDRMUI;
    char mSlaveFrameMode;
    struct CGPoint mContextOffset;
    MRRenderArguments * mRenderArguments;
    struct CGImage * mSnapshotAsCGImage;
    NSConditionLock * mSnapshotAsCGImageLock;
    int mPreviousMode;
    double mModeChangeTime;
    NSMutableArray * mSelectedLayers;
    NSMutableDictionary * mLayerTrackings;
    NSMutableSet * mLayersCurrentlyTrackedIn;
    NSMutableDictionary * mGestureRecognizers;
    MRLayerEffect * mLayerCurrentlyTextEditing;
    NSString * mCurrentlyEditedTextElement;
    char mShouldPauseWhenStill;
    char mNeedsToResize;
    char mNeedsToTemporaryResize;
    char mNeedsToResumeOrPauseLayers;
    char mNeedsToSynchronizeTimeInLayers;
    char mNeedsToSynchronizeTimeInAudioMovies;
    struct CGSize mTemporarySize;
    double mMorphingStartTime;
    double mMorphingEndTime;
    float mMorphingRotationAngle;
    char mMorphingHandlesRotation;
    MRImage * mSnapshotForMorphing;
    NSMutableArray * mActions;
    NSMutableDictionary * mAudioPlayerBuckets;
    NSArray * mAudioPlayerSortedBuckets;
    <MRLiveSlideshowDelegate> * mLiveSlideshowDelegate;
    <MRAsynchronousOperationsDelegate> * mAsynchronousOperationsDelegate;
    char mScreenBurnTest;
    unsigned long long mScreenBurnTestCurrentPass;
    MRImage * mScreenBurnTestAccumulationImage1;
    MRImage * mScreenBurnTestAccumulationImage2;
    NSMutableArray * mNavigatorHistoryBack;
    NSMutableArray * mNavigatorHistoryForth;
    NSDictionary * mForcedState;
    char mHideTextWhileEditing;
    char mUsesNewImageManager;
    id mFrameTime;
    unsigned long mFrameTimeIndex;
    struct __sFILE * mRenderingLogFile;
    double mPreviousStartTimeForLog;
    double mLastSaveTimeForLog;
    NSString * mCurrentIDs;
    MRImage * mCurrentIDsImage;
    NSString * mPreviousCurrentIDs;
    double mOuterTime;
    char mInnerTimeNeedsSync;
    char mUseOuterTime;
    char mOuterIsPlaying;
    char mInnerIsPlayingNeedsSync;
    char mUseOuterIsPlaying;
    unsigned int mCountOfPreloadingImages;
    char mUsesExternalDisplayLink;
}

@end
