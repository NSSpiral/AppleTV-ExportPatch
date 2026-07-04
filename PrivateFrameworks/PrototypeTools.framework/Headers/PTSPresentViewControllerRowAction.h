/* Runtime dump - PTSPresentViewControllerRowAction
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSPresentViewControllerRowAction : PTSRowAction
{
    id _viewControllerCreator;
}

@property (copy, nonatomic) id viewControllerCreator;

+ (PTSPresentViewControllerRowAction *)actionWithViewControllerCreator:(id)arg0;

- (PTSPresentViewControllerRowAction *)init;
- (PTSPresentViewControllerRowAction *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setViewControllerCreator:(id)arg0;
- (id)viewControllerCreator;

@end
