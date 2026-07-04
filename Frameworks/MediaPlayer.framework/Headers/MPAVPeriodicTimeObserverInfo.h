/* Runtime dump - MPAVPeriodicTimeObserverInfo
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVPeriodicTimeObserverInfo : NSObject
{
    id _block;
    NSObject<OS_dispatch_queue> * _queue;
    struct ? _interval;
}

@property (readonly, copy, nonatomic) id block;
@property (readonly, nonatomic) struct ? interval;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;

- (MPAVPeriodicTimeObserverInfo *)initWithInterval:(struct ?)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 block:(id /* block */)arg2;
- (void).cxx_destruct;
- (struct ?)interval;
- (NSObject<OS_dispatch_queue> *)queue;
- (id /* block */)block;

@end
