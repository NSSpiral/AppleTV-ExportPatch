/* Runtime dump - CUIPSDLayerGroupRef
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIPSDLayerGroupRef : CUIPSDLayerBaseRef
{
    _CUIPSDSublayerInfo * _sublayerInfo;
}

- (void)dealloc;
- (struct CGRect)bounds;
- (CUIPSDLayerGroupRef *)initWithImageRef:(struct CGImage *)arg0 layerIndex:(unsigned int)arg1;
- (NSObject *)layerRefAtIndex:(unsigned int)arg0;
- (unsigned int)numberOfLayers;
- (NSArray *)layerNames;
- (char)isLayerGroup;
- (char)isOpen;

@end
