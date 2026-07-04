/* Runtime dump - DOMWebKitAnimationEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMWebKitAnimationEvent : DOMEvent

@property (readonly, copy) NSString * animationName;
@property (readonly) double elapsedTime;

- (double)elapsedTime;
- (NSString *)animationName;

@end
