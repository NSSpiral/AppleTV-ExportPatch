/* Runtime dump - DOMHTMLMarqueeElement
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMHTMLMarqueeElement : DOMHTMLElement

- (void)stop;
- (void)setDirection:(TDThemeDirection *)arg0;
- (struct SCNVector3)direction;
- (NSNumber *)width;
- (NSString *)height;
- (void)start;
- (void)setWidth:(NSString *)arg0;
- (void)setHeight:(NSString *)arg0;
- (CABehavior *)behavior;
- (UIColor *)bgColor;
- (void)setBehavior:(CABehavior *)arg0;
- (int)loop;
- (unsigned int)hspace;
- (void)setHspace:(unsigned int)arg0;
- (unsigned int)vspace;
- (void)setVspace:(unsigned int)arg0;
- (void)setBgColor:(NSString *)arg0;
- (void)setLoop:(int)arg0;
- (int)scrollAmount;
- (void)setScrollAmount:(int)arg0;
- (int)scrollDelay;
- (void)setScrollDelay:(int)arg0;
- (char)trueSpeed;
- (void)setTrueSpeed:(char)arg0;

@end
