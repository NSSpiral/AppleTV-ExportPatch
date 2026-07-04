/* Runtime dump - AVQueueFeeder
 * Image: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

@interface AVQueueFeeder : NSObject

- (NSObject *)pathAtIndex:(unsigned int)arg0;
- (AVQueueFeeder *)init;
- (unsigned int)numberOfPaths;
- (NSObject *)playbackInfoAtIndex:(unsigned int)arg0;
- (void)contentsDidChangeByInsertingRange:(struct _NSRange)arg0;
- (void)contentsDidChangeByRemovingRange:(struct _NSRange)arg0;
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned int)arg0;
- (double)bookmarkTimeForIndex:(unsigned int)arg0;
- (unsigned int)itemCount;

@end
