/* Runtime dump - IKSlideshowElement
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKSlideshowElement : IKViewElement

@property (readonly, nonatomic) int showSettings;
@property (readonly, retain, nonatomic) NSArray * images;
@property (readonly, nonatomic) unsigned int transition;
@property (readonly, nonatomic) double transitionInterval;

- (NSArray *)images;
- (unsigned int)transition;
- (int)showSettings;
- (double)transitionInterval;

@end
