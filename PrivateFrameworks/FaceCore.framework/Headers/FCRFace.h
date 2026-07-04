/* Runtime dump - FCRFace
 * Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface FCRFace : NSObject
{
    struct ? face;
    struct ? leftEye;
    struct ? rightEye;
    struct ? mouth;
    float faceSize;
    float faceAngle;
    int trackID;
    unsigned int trackDuration;
    NSData * faceprint;
    int faceType;
    NSDictionary * faceLandmarkPoints;
    NSDictionary * expressionFeatures;
    NSDictionary * additionalInfo;
}

@property struct ? face;
@property struct ? leftEye;
@property struct ? rightEye;
@property struct ? mouth;
@property float faceSize;
@property float faceAngle;
@property int trackID;
@property unsigned int trackDuration;
@property (retain) NSData * faceprint;
@property int faceType;
@property (retain) NSDictionary * faceLandmarkPoints;
@property (retain) NSDictionary * expressionFeatures;
@property (retain) NSDictionary * additionalInfo;
@property (readonly) char hasLeftEyeBounds;
@property (readonly) char hasRightEyeBounds;
@property (readonly) char hasMouthBounds;

- (void)setTrackID:(int)arg0;
- (char)hasLeftEyeBounds;
- (char)hasRightEyeBounds;
- (void)setFaceAngle:(float)arg0;
- (float)faceAngle;
- (void)setFaceType:(int)arg0;
- (void)setFaceSize:(float)arg0;
- (void)setExpressionFeatures:(NSDictionary *)arg0;
- (void)setLeftEye:(struct ?)arg0;
- (void)setRightEye:(struct ?)arg0;
- (void)setMouth:(struct ?)arg0;
- (NSDictionary *)expressionFeatures;
- (struct ?)leftEye;
- (struct ?)rightEye;
- (struct ?)mouth;
- (unsigned int)trackDuration;
- (int)faceType;
- (float)faceSize;
- (void)dealloc;
- (char)hasMouthBounds;
- (NSDictionary *)faceLandmarkPoints;
- (void)setFaceLandmarkPoints:(NSDictionary *)arg0;
- (NSData *)faceprint;
- (void)setFaceprint:(NSData *)arg0;
- (void)setTrackDuration:(unsigned int)arg0;
- (NSDictionary *)additionalInfo;
- (void)setAdditionalInfo:(NSDictionary *)arg0;
- (int)trackID;
- (struct ?)face;
- (void)setFace:(struct ?)arg0;

@end
