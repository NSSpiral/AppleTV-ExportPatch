/* Runtime dump - AVPlayerItemOutput
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerItemOutput : NSObject
{
    AVPlayerItemOutputInternal * _outputInternal;
}

@property (nonatomic) char suppressesPlayerRendering;

- (AVWeakReference *)_weakReference;
- (struct OpaqueCMTimebase *)_copyTimebase;
- (char)suppressesPlayerRendering;
- (char)_attachToPlayerItem:(NSObject *)arg0;
- (void)_setTimebase:(struct OpaqueCMTimebase *)arg0;
- (void)_detachFromPlayerItem;
- (struct ?)_itemTimeForHostTimeAsCMTime:(struct ?)arg0;
- (struct ?)itemTimeForHostTime:(double)arg0;
- (struct ?)itemTimeForMachAbsoluteTime:(long long)arg0;
- (void)dealloc;
- (AVPlayerItemOutput *)init;
- (void)finalize;
- (void)setSuppressesPlayerRendering:(char)arg0;

@end
