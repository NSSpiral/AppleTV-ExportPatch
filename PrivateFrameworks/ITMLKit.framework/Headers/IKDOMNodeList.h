/* Runtime dump - IKDOMNodeList
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMNodeList : IKJSObject <IKDOMObserver, IKJSDOMNodeList>
{
    IKDOMNode * _contextNode;
    id _evaluationBlock;
    NSArray * _nodes;
}

@property (retain, nonatomic) IKDOMNode * contextNode;
@property (readonly, copy, nonatomic) id evaluationBlock;
@property (copy, nonatomic) NSArray * nodes;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, nonatomic) int length;

+ (NSString *)nodeListWithAppContext:(<IKApplication> *)arg0 contextNode:(IKDOMNode *)arg1 xpath:(NSIndexPath *)arg2;

- (int)length;
- (NSObject *)item:(int)arg0;
- (void).cxx_destruct;
- (void)setNodes:(NSArray *)arg0;
- (IKDOMNodeList *)initWithAppContext:(<IKApplication> *)arg0 contextNode:(IKDOMNode *)arg1 evaluationBlock:(id /* block */)arg2;
- (void)_updateNodes;
- (id /* block */)evaluationBlock;
- (IKDOMNode *)contextNode;
- (void)domDidUpdateForContextNode:(NSObject *)arg0;
- (void)setContextNode:(IKDOMNode *)arg0;
- (NSArray *)nodes;

@end
