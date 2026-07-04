/* Runtime dump - CAScrollLayer
 * Image: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

@interface CAScrollLayer : CALayer

@property (copy) NSString * scrollMode;

+ (CAScrollLayer *)defaultValueForKey:(NSString *)arg0;
+ (char)CA_automaticallyNotifiesObservers:(Class)arg0;

- (NSString *)scrollMode;
- (void)scrollToPoint:(struct CGPoint)arg0;
- (void)scrollToRect:(struct CGRect)arg0;
- (void)_scrollPoint:(struct CGPoint)arg0 fromLayer:(CALayer *)arg1;
- (void)_scrollRect:(struct CGRect)arg0 fromLayer:(struct CGSize)arg1;
- (struct CGRect)_visibleRectOfLayer:(id)arg0;
- (void)setScrollMode:(NSString *)arg0;

@end
