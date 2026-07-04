/* Runtime dump - MFBufferedQueue
 * Image: /System/Library/PrivateFrameworks/Message.framework/Message
 */

@interface MFBufferedQueue : NSObject
{
    unsigned int _maximumSize;
    double _maximumLatency;
    double _timeOfLastFlush;
    NSMutableArray * _queue;
    unsigned int _currentSize;
}

@property (readonly, nonatomic) unsigned int size;
@property (nonatomic) unsigned int maximumSize;
@property (nonatomic) double maximumLatency;

- (unsigned int)maximumSize;
- (void)dealloc;
- (unsigned int)size;
- (MFBufferedQueue *)init;
- (void)removeAllObjects;
- (char)flush;
- (char)isEmpty;
- (char)addItem:(NSObject *)arg0;
- (MFBufferedQueue *)initWithMaximumSize:(unsigned int)arg0 latency:(double)arg1;
- (unsigned int)sizeForItem:(NSObject *)arg0;
- (char)flushIfNecessary;
- (char)handleItems:(NSArray *)arg0;
- (double)maximumLatency;
- (void)setMaximumLatency:(double)arg0;
- (void)setMaximumSize:(unsigned int)arg0;
- (char)_flush;

@end
