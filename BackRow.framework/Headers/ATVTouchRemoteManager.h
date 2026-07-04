/* Runtime dump - ATVTouchRemoteManager
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRSingleton.h>

@class ATVRemoteControlMessageHandler;
@interface ATVTouchRemoteManager : BRSingleton
{
    NSMutableArray * _outstandingNowPlayingRequests;
    NSMutableArray * _outstandingDialogUpdateRequests;
    NSMutableArray * _pairableTouchRemotes;
    NSMutableArray * _pairableTouchRemotesWhichHaveBeenPaired;
    NSTimer * _trickSpeedAdvanceTimer;
    ATVRemoteControlMessageHandler * _remoteMessageHandler;
}

+ (ATVTouchRemoteManager *)singleton;
+ (void)setSingleton:(NSObject *)arg0;
+ (CALayer *)touchablePlayer;

- (void)_pairableTouchRemoteAppeared:(id)arg0;
- (void)_pairableTouchRemoteDisappeared:(id)arg0;
- (void)_sendPromptUpdate:(NSDate *)arg0;
- (void)_removePairableTouchRemote:(id)arg0 hasDisappeared:(char)arg1;
- (char)_preparePlayback;
- (void)_startPlaybackWithPlayer:(id)arg0;
- (void)_userAction;
- (void)_startTrickSpeedAdvanceTimer;
- (void)nextChapter;
- (void)removePairableTouchRemote:(id)arg0;
- (id)pairedTouchRemotes;
- (char)removePairedTouchRemote:(id)arg0;
- (NSMutableArray *)pairableTouchRemotes;
- (void)pairWithTouchRemote:(id)arg0 withPIN:(id)arg1;
- (void)playMediaAtIndex:(long)arg0 inTracklist:(id)arg1 shuffle:(char)arg2 repeat:(char)arg3;
- (void)playMediaAtIndex:(long)arg0 inCollection:(RadioArtworkCollection *)arg1 shuffle:(char)arg2 repeat:(char)arg3;
- (void)shuffleSongs;
- (void)playPause;
- (void)playResume;
- (void)restartItem;
- (void)beginFF;
- (void)beginRW;
- (void)prevChapter;
- (void)nextItem;
- (void)prevItem;
- (void)shuffleToggle;
- (void)repeatAdvance;
- (unsigned long)sendGeneralPurposeMessage:(NSString *)arg0;
- (void)_updateTrickSpeed:(id)arg0;
- (void)_stopTrickSpeedAdvanceTimer;
- (void)play;
- (void)dealloc;
- (ATVTouchRemoteManager *)init;
- (void)stop;
- (void)pause;

@end
