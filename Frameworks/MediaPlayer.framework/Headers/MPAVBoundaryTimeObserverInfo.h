/* Runtime dump - MPAVBoundaryTimeObserverInfo
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPAVBoundaryTimeObserverInfo : NSObject
{
    id _block;
    NSObject<OS_dispatch_queue> * _queue;
    NSArray * _times;
}

@property (readonly, copy, nonatomic) id block;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * queue;
@property (readonly, nonatomic) NSArray * times;

- (NSArray *)times;
- (MPAVBoundaryTimeObserverInfo *)initWithTimes:(NSArray *)arg0 queue:(NSObject<OS_dispatch_queue> *)arg1 block:(id /* block */)arg2;
- (void).cxx_destruct;
- (NSObject<OS_dispatch_queue> *)queue;
- (id /* block */)block;

@end
