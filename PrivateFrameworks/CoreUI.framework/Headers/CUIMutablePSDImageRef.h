/* Runtime dump - CUIMutablePSDImageRef
 * Image: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
 */

@interface CUIMutablePSDImageRef : CUIPSDImageRef

- (CUIMutablePSDImageRef *)initWithPixelWidth:(unsigned long)arg0 pixelHeight:(unsigned long)arg1;
- (void)addLayoutMetricsChannel:(NSObject *)arg0;
- (void)addOrUpdateSlicesWithSliceRects:(struct CGRect *)arg0;
- (struct __CFData *)copyDefaultICCProfileData;
- (unsigned int)psdLayerBlendModeForCGBlendMode:(int)arg0;
- (struct PSDGradient *)newPSDGradientFromCUIPSDGradient:(struct __compressed_pair<PSDGradientColorStop *, std::__1::allocator<PSDGradientColorStop> >)arg0;
- (unsigned int)newUInt32CArray:(unsigned int * *)arg0 withNSArray:(unsigned int)arg1 prependNumber:(NSNumber *)arg2 appendNumber:(NSNumber *)arg3;
- (unsigned int)newSliceRectsArray:(struct PSDRect * *)arg0 withSliceRects:(struct PSDRect)arg1;
- (unsigned int)newSliceRectsArray:(struct PSDRect * *)arg0 withXCutPositions:(struct PSDRect)arg1 yCutPositions:(id)arg2;
- (char)saveWithCompletionHandler:(id /* block */)arg0;
- (void)insertLayoutMetricsChannel:(NSObject *)arg0 atIndex:(unsigned int)arg1;
- (void)deleteLayoutMetricsChannelAtIndex:(unsigned int)arg0;
- (void)insertLayer:(id)arg0 atIndex:(unsigned int)arg1;
- (void)deleteLayerAtIndex:(unsigned int)arg0;
- (void)addOrUpdateSlicesWithXCutPositions:(id)arg0 yCutPositions:(id)arg1;
- (void)updateSliceName:(NSString *)arg0 atIndex:(unsigned int)arg1;
- (char)saveToURL:(NSURL *)arg0 completionHandler:(id /* block */)arg1;
- (void)setFileURL:(NSURL *)arg0;
- (void)addLayer:(CALayer *)arg0;

@end
