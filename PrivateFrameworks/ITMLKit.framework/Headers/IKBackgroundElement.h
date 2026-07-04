/* Runtime dump - IKBackgroundElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKBackgroundElement : IKViewElement

@property (readonly, retain, nonatomic) NSArray * images;
@property (readonly, retain, nonatomic) IKAudioElement * audio;
@property (readonly, nonatomic) double transitionInterval;
@property (readonly, retain, nonatomic) UIColor * backgroundColor;

- (UIColor *)backgroundColor;
- (NSArray *)images;
- (double)transitionInterval;
- (IKAudioElement *)audio;

@end
