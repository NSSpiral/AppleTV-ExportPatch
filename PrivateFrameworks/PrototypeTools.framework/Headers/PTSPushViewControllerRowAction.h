/* Runtime dump - PTSPushViewControllerRowAction
 * Image: /System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSPushViewControllerRowAction : PTSRowAction
{
    id _viewControllerCreator;
}

@property (copy, nonatomic) id viewControllerCreator;

+ (PTSPushViewControllerRowAction *)actionWithViewControllerCreator:(id)arg0;

- (PTSPushViewControllerRowAction *)init;
- (PTSPushViewControllerRowAction *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void)setViewControllerCreator:(id)arg0;
- (id)viewControllerCreator;

@end
