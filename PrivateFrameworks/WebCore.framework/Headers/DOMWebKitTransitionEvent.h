/* Runtime dump - DOMWebKitTransitionEvent
 * Image: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@interface DOMWebKitTransitionEvent : DOMEvent

@property (readonly, copy) NSString * propertyName;
@property (readonly) double elapsedTime;
@property (readonly, copy) NSString * pseudoElement;

- (double)elapsedTime;
- (NSString *)propertyName;
- (NSString *)pseudoElement;

@end
