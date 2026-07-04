/* Runtime dump - TDPhotoshopRenditionSpec
 * Image: /System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface TDPhotoshopRenditionSpec : TDRenditionSpec

@property (retain, nonatomic) TDPhotoshopLayer * photoshopLayer;

- (NSString *)debugDescription;
- (void)_logError:(NSError *)arg0;
- (void)copyAttributesInto:(id)arg0;
- (NSDictionary *)copyDataFromAttributes;
- (void)setAttributesFromCopyData:(NSData *)arg0;
- (void)_logExtra:(id)arg0;
- (int)_layerIndexInPSDImage:(UIImage *)arg0;
- (int)psdSliceNumberForRenditionRow:(int)arg0 sliceRow:(int)arg1 renditionColumn:(int)arg2 sliceColumn:(int)arg3 rowsPerRendition:(int)arg4 columnsPerRendition:(int)arg5 renditionColumnCount:(int)arg6;
- (void)_logWarning:(id)arg0;
- (UIImage *)createCSIRepresentationFromGradientPSDImage:(UIImage *)arg0 withCompression:(char)arg1 colorSpaceID:(unsigned int)arg2;
- (UIImage *)createCSIRepresentationFromPSDImage:(UIImage *)arg0 withCompression:(char)arg1 edgeMetricsMask:(CUIImage *)arg2 textMetricsMask:(CUIImage *)arg3 baselineMetricsMask:(CUIImage *)arg4 colorSpaceID:(unsigned int)arg5;
- (id)createCSIRepresentationWithCompression:(char)arg0 colorSpaceID:(unsigned int)arg1 document:(NSObject *)arg2;
- (UIImage *)createCSIRepresentationFromPSDImage:(UIImage *)arg0 withCompression:(char)arg1 colorSpaceID:(unsigned int)arg2;

@end
