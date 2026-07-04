/* Runtime dump - CHDView3D
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDView3D : NSObject
{
    int mRotationX;
    int mRotationY;
    int mDepthPercent;
    int mGapDepthPercent;
    int mHeightPercent;
    int mPerspective;
    BOOL mRightAngleAxes;
    BOOL mCluster;
    BOOL mAutoscale;
}

- (CHDView3D *)init;
- (void)setRotationX:(int)arg0;
- (void)setRotationY:(int)arg0;
- (void)setPerspective:(int)arg0;
- (void)setRightAngleAxes:(BOOL)arg0;
- (void)setDepthPercent:(int)arg0;
- (void)setGapDepthPercent:(int)arg0;
- (void)setHeightPercent:(int)arg0;
- (void)setAutoscale:(BOOL)arg0;
- (int)depthPercent;
- (int)gapDepthPercent;
- (int)perspective;
- (int)rotationX;
- (int)heightPercent;
- (BOOL)isAutoscale;
- (int)rotationY;
- (BOOL)isRightAngleAxes;
- (BOOL)isCluster;
- (void)setCluster:(BOOL)arg0;

@end
