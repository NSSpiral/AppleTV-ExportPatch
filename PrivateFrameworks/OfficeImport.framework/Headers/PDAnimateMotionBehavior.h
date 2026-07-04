/* Runtime dump - PDAnimateMotionBehavior
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimateMotionBehavior : PDAnimateScaleBehavior
{
    NSString * mPath;
    char mHasAngle;
    double mAngle;
    char mHasPointType;
    int mPointType;
    char mHasOriginType;
    int mOriginType;
    char mHasRotationCenter;
    struct CGPoint mRotationCenter;
}

- (void)dealloc;
- (char)isEqual:(NSObject *)arg0;
- (NSString *)path;
- (void)setPath:(NSString *)arg0;
- (void).cxx_construct;
- (void)setAngle:(double)arg0;
- (double)angle;
- (char)hasPath;
- (int)pointType;
- (void)setPointType:(int)arg0;
- (char)hasAngle;
- (char)hasPointType;
- (char)hasOriginType;
- (int)originType;
- (char)hasRotationCenter;
- (struct CGPoint)rotationCenter;
- (void)setOriginType:(int)arg0;
- (void)setRotationCenter:(struct CGPoint)arg0;

@end
