/* Runtime dump - UIViewAnimationContext
 * Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIViewAnimationContext : NSObject
{
    NSArray * _viewAnimations;
    int _animationCount;
    id _completionHandler;
    UITableViewCell * _swipeToDeleteCell;
}

@property (retain, nonatomic) NSArray * viewAnimations;
@property (nonatomic) int animationCount;
@property (readonly, nonatomic) id completionHandler;
@property (retain, nonatomic) UITableViewCell * swipeToDeleteCell;

- (void)dealloc;
- (UIViewAnimationContext *)initWithCompletionHandler:(id /* block */)arg0;
- (void)setViewAnimations:(NSArray *)arg0;
- (int)animationCount;
- (void)setAnimationCount:(int)arg0;
- (void)setSwipeToDeleteCell:(UITableViewCell *)arg0;
- (NSArray *)viewAnimations;
- (UITableViewCell *)swipeToDeleteCell;
- (id /* block */)completionHandler;

@end
