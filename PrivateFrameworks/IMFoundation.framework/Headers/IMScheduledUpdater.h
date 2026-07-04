/* Runtime dump - IMScheduledUpdater
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMScheduledUpdater : IMManualUpdater
{
    NSCountedSet * _holdingUpdatesKeys;
}

@property (retain, nonatomic) NSCountedSet * holdingUpdatesKeys;

- (void)dealloc;
- (NSString *)description;
- (IMScheduledUpdater *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)invalidate;
- (NSCountedSet *)holdingUpdatesKeys;
- (void)setHoldingUpdatesKeys:(NSCountedSet *)arg0;
- (char)isHoldingUpdates;
- (void)beginHoldingUpdatesForKey:(NSString *)arg0;
- (void)endHoldingUpdatesForKey:(NSString *)arg0;
- (void)endHoldingUpdatesForAllKeys;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;

@end
