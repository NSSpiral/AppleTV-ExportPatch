/* Runtime dump - MSPauseManager
 * Image: /System/Library/PrivateFrameworks/MediaStream.framework/MediaStream
 */

@interface MSPauseManager : NSObject
{
    NSMutableDictionary * _UUIDToTimerMap;
    <MSPauseManagerDelegate> * _delegate;
}

@property (weak, nonatomic) <MSPauseManagerDelegate> * delegate;

+ (MSPauseManager *)sharedManager;

- (void)dealloc;
- (void)setDelegate:(<MSPauseManagerDelegate> *)arg0;
- (MSPauseManager *)init;
- (<MSPauseManagerDelegate> *)delegate;
- (void).cxx_destruct;
- (void)_timerDidFire:(id)arg0;
- (void)_addPauseUUID:(id)arg0;
- (void)_removeTimerUUID:(id)arg0;
- (void)pingPauseUUID:(id)arg0;
- (void)unpauseUUID:(id)arg0;
- (char)isPaused;

@end
