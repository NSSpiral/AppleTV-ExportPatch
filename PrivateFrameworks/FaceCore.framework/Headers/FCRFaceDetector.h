/* Runtime dump - FCRFaceDetector
 * Image: /System/Library/PrivateFrameworks/FaceCore.framework/FaceCore
 */

@interface FCRFaceDetector : NSObject
{
    void * api;
    NSObject * lock;
}

+ (NSDictionary *)faceDetectorWithOptions:(NSDictionary *)arg0;
+ (FCRFaceDetector *)fastFaceDetector;
+ (int)findProfileInParameters:(NSDictionary *)arg0;
+ (FCRFaceDetector *)faceDetector;
+ (FCRFaceDetector *)preciseFaceDetector;
+ (FCRFaceDetector *)standardTrackingDetector;
+ (FCRFaceDetector *)keypointTrackingDetector;

- (NSData *)detectFacesInData:(NSData *)arg0 width:(unsigned int)arg1 height:(unsigned int)arg2 bytesPerRow:(unsigned int)arg3 options:(NSDictionary *)arg4 error:(id *)arg5;
- (id)extractDetailsForFaces:(id)arg0 inData:(NSData *)arg1 width:(unsigned int)arg2 height:(unsigned int)arg3 bytesPerRow:(unsigned int)arg4 options:(NSDictionary *)arg5 error:(id *)arg6;
- (UIImage *)detectFacesInCGImage:(struct CGImage *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
- (void)dealloc;
- (NSString *)version;
- (FCRFaceDetector *)initWithProfile:(int)arg0 parameters:(NSDictionary *)arg1;
- (void)createFaceCoreLightApiWithProfile:(int)arg0 parameters:(NSDictionary *)arg1;
- (UIImage *)detectFacesInImage:(UIImage *)arg0 options:(NSDictionary *)arg1 error:(id *)arg2;
- (void)setParam:(id)arg0 toValue:(NSValue *)arg1 withDefaultValue:(NSString *)arg2 usingApi:(struct FaceCoreAPI *)arg3;
- (id)parseRegionOfInterestParam:(id)arg0;
- (NSString *)convertRectsToString:(NSString *)arg0;
- (void)updateDetectionParamsValues:(NSArray *)arg0 image:(UIImage *)arg1;
- (id)createFCRFace:(struct face *)arg0 image:(struct coord)arg1;
- (UIImage *)createFCRImage:(struct CGImage *)arg0;
- (id)extractDetailsForFaces:(id)arg0 inImage:(UIImage *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (void)updateExtractionParamsValues:(NSArray *)arg0;
- (struct image)createImage:(UIImage *)arg0;
- (struct face)createFace:(struct coord)arg0 image:(float)arg1;
- (void)updateFCRFace:(id)arg0 from:(struct face *)arg1 image:(struct coord)arg2;
- (struct coord)makeYFlippedCoordFromPoint:(struct CGPoint)arg0 image:(UIImage *)arg1;
- (float)interpretAsFloat:(id)arg0 withDefault:(float)arg1;
- (struct CGPoint)makeYFlippedPointFromCoord:(struct coord *)arg0 image:(UIImage *)arg1;
- (struct CGRect)makeYFlippedRectFromRect:(NSObject *)arg0 image:(SEL)arg1;
- (void)addLandmarkOfType:(NSObject *)arg0 fromMesh:(struct vector<vision::lib::coord, std::__1::allocator<vision::lib::coord> > *)arg1 indexes:(struct coord *)arg2 to:(struct __compressed_pair<vision::lib::coord *, std::__1::allocator<vision::lib::coord> >)arg3 image:(UIImage *)arg4;
- (id)parseOption:(id)arg0 value:(NSObject *)arg1;
- (id)parseNumericOrBoolValue:(id)arg0;
- (id)transformROIs:(id)arg0 image:(UIImage *)arg1 usingBlock:(id /* block */)arg2;
- (id)extractDetailsForFaces:(id)arg0 inCGImage:(struct CGImage *)arg1 options:(NSDictionary *)arg2 error:(id *)arg3;
- (float)compareFace:(id)arg0 toFace:(id)arg1 error:(id *)arg2;
- (FCRFaceDetector *)initWithOptions:(NSDictionary *)arg0;

@end
