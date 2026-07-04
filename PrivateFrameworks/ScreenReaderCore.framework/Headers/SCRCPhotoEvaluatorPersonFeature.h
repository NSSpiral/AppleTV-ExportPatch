/* Runtime dump - SCRCPhotoEvaluatorPersonFeature
 * Image: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCPhotoEvaluatorPersonFeature : NSObject
{
    struct CGRect _faceRect;
    struct CGRect _leftEyeRect;
    struct CGRect _mouthRect;
    struct CGRect _rightEyeRect;
    int _faceSize;
    int _faceLocation;
    NSString * _shirtColor;
}

@property (readonly, nonatomic) struct CGRect faceRect;
@property (readonly, nonatomic) struct CGRect leftEyeRect;
@property (readonly, nonatomic) struct CGRect mouthRect;
@property (readonly, nonatomic) struct CGRect rightEyeRect;
@property (readonly, nonatomic) int faceSize;
@property (readonly, nonatomic) int faceLocation;
@property (readonly, nonatomic) NSString * shirtColor;

- (struct CGRect)leftEyeRect;
- (struct CGRect)rightEyeRect;
- (struct CGRect)faceRect;
- (int)faceSize;
- (SCRCPhotoEvaluatorPersonFeature *)initWithCIFaceFeature:(NSObject *)arg0 ofSize:(int)arg1 andLocation:(int)arg2 andShirtColor:(UIColor *)arg3;
- (int)faceLocation;
- (struct CGRect)mouthRect;
- (NSString *)shirtColor;

@end
