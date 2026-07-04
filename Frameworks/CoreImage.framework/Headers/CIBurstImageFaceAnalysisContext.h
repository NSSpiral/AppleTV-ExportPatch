/* Runtime dump - CIBurstImageFaceAnalysisContext
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstImageFaceAnalysisContext : NSObject
{
    NSMutableDictionary * curConfig;
    NSMutableDictionary * faceIdMapping;
    NSMutableDictionary * renameMapping;
    int faceIdCounter;
    NSMutableArray * faceInfoArray;
    int numFramesSinceFullFaceCore;
    int numFramesNoFaces;
    FCRFaceDetector * faceDetector;
    NSMutableArray * faceTimestampArray;
    double latestImageTimestamp;
    int lastFaceIndex;
    char forceFaceDetectionEnable;
    int _version;
    double timeBlinkDetectionDone;
    double timeFaceDetectionDone;
    double latestFaceTimestamp;
}

@property double timeFaceDetectionDone;
@property double timeBlinkDetectionDone;
@property char forceFaceDetectionEnable;
@property double latestFaceTimestamp;
@property int version;

- (void)setForceFaceDetectionEnable:(char)arg0;
- (double)latestFaceTimestamp;
- (void)addFacesToImageStat:(id)arg0 imageSize:(struct CGSize)arg1;
- (int)findFacesInImage:(UIImage *)arg0 imageStat:(CIBurstImageStat *)arg1;
- (void)setTimeFaceDetectionDone:(double)arg0;
- (void)setTimeBlinkDetectionDone:(double)arg0;
- (double)timeFaceDetectionDone;
- (double)timeBlinkDetectionDone;
- (void)calculateFaceFocusInImage:(UIImage *)arg0 imageStat:(CIBurstImageStat *)arg1;
- (void)adjustFaceIdsForImageStat:(id)arg0;
- (void)dumpFaceInfoArray;
- (void)extractFacesFromMetadata:(NSDictionary *)arg0;
- (void)calcFaceScores:(id)arg0;
- (char)forceFaceDetectionEnable;
- (struct CGRect)padRoiRect:(NSObject *)arg0 paddingX:(SEL)arg1 paddingY:(struct CGRect)arg2;
- (void)setupFaceDetector;
- (struct CGRect)calculateFaceCoreROI:(id)arg0 imageStat:(SEL)arg1 needFaceCore:(id)arg2;
- (char)isSmallFace:(struct CGRect)arg0;
- (id)processSmallFaces:(id)arg0 imageStat:(CIBurstImageStat *)arg1 faces:(NSSet *)arg2 extractOptions:(NSDictionary *)arg3;
- (void)addFaceToArray:(NSArray *)arg0;
- (void)setLatestFaceTimestamp:(double)arg0;
- (void)dealloc;
- (void)setVersion:(int)arg0;
- (int)version;
- (CIBurstImageFaceAnalysisContext *)initWithVersion:(int)arg0;

@end
