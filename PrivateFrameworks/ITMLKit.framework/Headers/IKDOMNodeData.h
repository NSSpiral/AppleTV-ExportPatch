/* Runtime dump - IKDOMNodeData
 * Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
 */

@interface IKDOMNodeData : NSObject
{
    char _updated;
    char _childrenUpdated;
    char _subtreeUpdated;
    IKDOMNode * _ownerJSNode;
    IKViewElementStyleComposer * _styleComposer;
    NSMutableDictionary * _featuresMap;
}

@property (weak, nonatomic) IKDOMNode * ownerJSNode;
@property (nonatomic) char updated;
@property (nonatomic) char childrenUpdated;
@property (nonatomic) char subtreeUpdated;
@property (retain, nonatomic) IKViewElementStyleComposer * styleComposer;
@property (retain, nonatomic) NSMutableDictionary * featuresMap;

+ (NSObject *)jsNodeDataForNode:(struct _xmlNode *)arg0 create:(struct _xmlNode *)arg1;

- (void).cxx_destruct;
- (void)setUpdated:(char)arg0;
- (void)setSubtreeUpdated:(char)arg0;
- (char)isSubtreeUpdated;
- (char)isChildrenUpdated;
- (void)setChildrenUpdated:(char)arg0;
- (IKDOMNode *)ownerJSNode;
- (NSMutableDictionary *)featuresMap;
- (void)setFeaturesMap:(NSMutableDictionary *)arg0;
- (void)setFeature:(NSObject *)arg0 forName:(NSString *)arg1;
- (NSString *)featureForName:(NSString *)arg0;
- (void)setOwnerJSNode:(IKDOMNode *)arg0;
- (IKViewElementStyleComposer *)styleComposer;
- (void)setStyleComposer:(IKViewElementStyleComposer *)arg0;
- (char)isUpdated;

@end
