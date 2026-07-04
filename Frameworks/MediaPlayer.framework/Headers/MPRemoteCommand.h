/* Runtime dump - MPRemoteCommand
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPRemoteCommand : NSObject
{
    <MPRemoteCommandDelegate> * _delegate;
    NSObject<OS_dispatch_queue> * _serialQueue;
    NSMutableArray * _targetInvocations;
    unsigned int _mediaRemoteCommandType;
    NSString * _contextID;
    char _enabled;
}

@property (nonatomic) char enabled;

- (char)isSupported;
- (struct _MRMediaRemoteCommandInfo *)createCommandInfoRepresentation;
- (unsigned int)mediaRemoteCommandType;
- (void)invokeCommandWithEvent:(NSObject *)arg0 completion:(id /* block */)arg1;
- (MPRemoteCommand *)initWithMediaRemoteCommandType:(unsigned int)arg0;
- (char)hasTargets;
- (void)notifyPropagatablePropertyChanged;
- (void)_addTarget:(NSObject *)arg0 action:(SEL)arg1 retainTarget:(char)arg2;
- (NSDictionary *)_mediaRemoteCommandInfoOptions;
- (void)setDelegate:(<MPRemoteCommandDelegate> *)arg0;
- (MPRemoteCommand *)init;
- (<MPRemoteCommandDelegate> *)delegate;
- (void)setEnabled:(char)arg0;
- (char)isEnabled;
- (void)removeTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)addTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)removeTarget:(NSObject *)arg0;
- (void).cxx_destruct;
- (id)addTargetWithHandler:(id /* block */)arg0;

@end
