/* Runtime dump - UIStoryboardReplaceSegue
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIStoryboardReplaceSegue : UIStoryboardSegue
{
    int _destinationContainmentContext;
    int _splitViewControllerIndex;
}

@property (nonatomic) int destinationContainmentContext;
@property (nonatomic) int splitViewControllerIndex;

- (void)perform;
- (int)destinationContainmentContext;
- (int)splitViewControllerIndex;
- (void)setDestinationContainmentContext:(int)arg0;
- (void)setSplitViewControllerIndex:(int)arg0;

@end
