/* Runtime dump - VKViewTransform
 * Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@interface VKViewTransform : NSObject
{
    struct shared_ptr<vk::ViewTransform> _viewTransform;
}

@property (readonly, nonatomic) char isMercator;
@property (readonly, nonatomic) char isGeocentric;
@property (readonly, nonatomic) int coordinateSpace;
@property (readonly, nonatomic) struct CGSize screenSizeInPoints;
@property (readonly, nonatomic) struct CGSize screenSizeInPixels;
@property (readonly, nonatomic) float contentScale;
@property (readonly, nonatomic) struct VKPoint translation;
@property (readonly, nonatomic) struct VKPoint translationInMercator;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> upVector;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> rightVector;
@property (readonly, nonatomic) struct Matrix<double, 3, 1> forwardVector;
@property (readonly, nonatomic) float heading;
@property (readonly, nonatomic) float degreesFromPlumb;
@property (readonly, nonatomic) double widthOverDepth;
@property (readonly, nonatomic) struct ? * viewProjectionMatrix;
@property (readonly, nonatomic) double nearPlaneDistance;
@property (readonly, nonatomic) double farPlaneDistance;
@property (readonly, nonatomic) VKViewVolume * viewVolume;
@property (readonly, nonatomic) double focusDistance;
@property (readonly, nonatomic) struct VKPoint focusPoint;
@property (nonatomic) struct ? * scaledViewProjectionMatrix;

- (VKViewTransform *)init;
- (int)coordinateSpace;
- (void).cxx_construct;
- (float)contentScale;
- (void).cxx_destruct;
- (struct Matrix<double, 3, 1>)forwardVector;
- (struct Matrix<double, 3, 1>)rightVector;
- (struct ? *)viewProjectionMatrix;
- (VKViewVolume *)viewVolume;
- (struct Matrix<double, 3, 1>)upVector;
- (struct VKPoint)groundPointFromScreenPoint:(struct CGPoint)arg0;
- (struct shared_ptr<vk::ViewTransform>)viewTransform;
- (void)setCoordinateSpace:(int)arg0 screenSizeInPixels:(struct CGSize)arg1 contentScale:(float)arg2 frustum:(struct ?)arg3 position:(struct VKPoint)arg4 orientation:(struct ? *)arg5 horizontalOffset:(struct ?)arg6;
- (void)setScaledViewProjectionMatrix:(struct ? *)arg0;
- (char)isMercator;
- (char)isGeocentric;
- (struct VKPoint)translation;
- (float)heading;
- (float)degreesFromPlumb;
- (double)widthOverDepth;
- (struct VKPoint)focusPoint;
- (struct ? *)scaledViewProjectionMatrix;
- (struct CGSize)screenSizeInPoints;
- (struct CGSize)screenSizeInPixels;
- (struct VKPoint)translationInMercator;
- (double)nearPlaneDistance;
- (double)farPlaneDistance;
- (double)focusDistance;
- (struct VKPoint)groundPointFromPixel:(struct Matrix<float, 2, 1>)arg0;
- (struct ?)orientationMatrixAtWorldPoint:(struct VKPoint)arg0;

@end
