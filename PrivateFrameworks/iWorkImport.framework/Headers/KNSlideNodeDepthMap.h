/* Runtime dump - KNSlideNodeDepthMap
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNSlideNodeDepthMap : NSObject
{
    NSArray * _slideNodes;
    NSArray * _depthsOfSlideNodes;
}

@property (readonly, nonatomic) NSArray * slideNodes;
@property (readonly, nonatomic) NSArray * depthsOfSlideNodes;

- (NSArray *)slideNodes;
- (void)enumerateSlideNodesAndDepthsUsingBlock:(id /* block */)arg0;
- (KNSlideNodeDepthMap *)initWithSlideNodes:(NSArray *)arg0 depths:(id)arg1;
- (NSArray *)depthsOfSlideNodes;
- (void)dealloc;

@end
