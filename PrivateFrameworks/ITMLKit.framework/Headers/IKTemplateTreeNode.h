/* Runtime dump - IKTemplateTreeNode
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKTemplateTreeNode : NSObject
{
    IKViewElementStyle * _elementStyleOverrides;
    NSDictionary * _childNodes;
}

@property (readonly, copy, nonatomic) IKViewElementStyle * elementStyleOverrides;
@property (readonly, copy, nonatomic) NSDictionary * childNodes;

- (NSDictionary *)childNodes;
- (void).cxx_destruct;
- (IKViewElementStyle *)elementStyleOverrides;
- (IKTemplateTreeNode *)initWithElementStyleOverrides:(IKViewElementStyle *)arg0 childNodes:(NSDictionary *)arg1;

@end
