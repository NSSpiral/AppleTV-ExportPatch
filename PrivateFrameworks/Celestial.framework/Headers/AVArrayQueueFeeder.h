/* Runtime dump - AVArrayQueueFeeder
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVArrayQueueFeeder : AVQueueFeeder
{
    NSMutableArray * _items;
}

- (NSObject *)pathAtIndex:(unsigned int)arg0;
- (BRControl *)itemForIndex:(unsigned int)arg0;
- (void)dealloc;
- (AVArrayQueueFeeder *)init;
- (void)insertObject:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)removeObjectAtIndex:(unsigned int)arg0;
- (AVArrayQueueFeeder *)initWithArray:(NSArray *)arg0;
- (unsigned int)numberOfPaths;
- (void)shuffleWithCurrentIndex:(unsigned int)arg0;
- (unsigned int)itemCount;

@end
