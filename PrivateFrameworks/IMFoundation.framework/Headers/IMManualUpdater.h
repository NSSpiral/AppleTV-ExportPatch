/* Runtime dump - IMManualUpdater
 * Image: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

@interface IMManualUpdater : NSObject
{
    id _target;
    SEL _action;
    id _needsUpdate;
}

@property (nonatomic) id target;
@property (nonatomic) SEL action;
@property (nonatomic) char needsUpdate;

- (NSString *)description;
- (IMManualUpdater *)initWithTarget:(NSObject *)arg0 action:(SEL)arg1;
- (void)setTarget:(NSObject *)arg0;
- (SEL)action;
- (NSObject *)target;
- (void)setAction:(SEL)arg0;
- (void)setNeedsUpdate:(char)arg0;
- (void)setNeedsUpdate;
- (void)updateIfNeeded;
- (char)needsUpdate;

@end
