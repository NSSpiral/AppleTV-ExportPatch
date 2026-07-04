/* Runtime dump - AVPlayerConnection
 * Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayerConnection : NSObject
{
    AVWeakReference * _playerReference;
    AVWeakReference * _playerItemReference;
    char _shouldAppendItem;
    int _status;
    NSError * _error;
    AVPlayerItem * _previousPlayerItem;
}

@property (readonly, nonatomic) AVPlayer * player;
@property (readonly, nonatomic) AVPlayerItem * playerItem;
@property (readonly, nonatomic) int status;
@property (readonly, nonatomic) NSError * error;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> * serializationQueue;

- (char)addItemToPlayQueue;
- (void)removeItemFromPlayQueue;
- (AVPlayerConnection *)initWithWeakReferenceToPlayer:(id)arg0 weakReferenceToPlayerItem:(AVWeakReference *)arg1 shouldAppendItem:(char)arg2;
- (NSObject<OS_dispatch_queue> *)serializationQueue;
- (AVPlayerItem *)playerItem;
- (void)dealloc;
- (NSString *)description;
- (int)status;
- (NSError *)error;
- (AVPlayer *)player;

@end
