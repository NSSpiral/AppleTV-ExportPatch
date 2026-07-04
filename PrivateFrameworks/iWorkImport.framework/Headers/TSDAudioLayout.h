/* Runtime dump - TSDAudioLayout
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDAudioLayout : TSDMediaLayout

- (NSDictionary *)layoutGeometryFromInfo;
- (struct CGRect)alignmentFrame;
- (char)canAspectRatioLockBeChangedByUser;
- (char)resizeMayChangeAspectRatio;
- (char)shouldDisplayGuides;
- (char)allowsConnections;
- (char)supportsRotation;
- (struct CGRect)computeAlignmentFrameInRoot:(NSObject *)arg0;
- (TSDAudioLayout *)initWithInfo:(NSDictionary *)arg0;
- (char)canFlip;
- (NSDictionary *)movieInfo;
- (int)wrapType;

@end
