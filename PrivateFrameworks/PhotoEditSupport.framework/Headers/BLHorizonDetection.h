/* Runtime dump - BLHorizonDetection
 * Image: /System/Library/PrivateFrameworks/PhotoEditSupport.framework/PhotoEditSupport
 */

@interface BLHorizonDetection : NSObject
{
    char * _grayScale;
    char * _rgb;
    char * _orgEdge;
    char * _processedEdge;
    char * _bwLabelSceneMap;
    int _rows;
    int _cols;
    int _isHor;
    int _numLines;
    float _scaleFactor;
    struct ? * _detectedLinePointer;
    struct ? * _detectedHorPointerH;
    float * _edgeAngle;
}

+ (void)findHorizonForImage:(UIImage *)arg0 horizonLineH:(struct ? *)arg1;

- (void)extractGrayRGBData:(NSData *)arg0;
- (void)horizonDetection;
- (void)applyLineFilters;
- (void)findHorizon:(id)arg0 horizonLineH:(struct ? *)arg1;
- (void)sceneClassification;
- (void)preProcessEdgeCheckNB;
- (void)preProcessEdgeAnglePDF;
- (void)preProcessEdgeCC;
- (void)lineOverlapHorBW:(struct ? *)arg0 numLines:(struct CGPoint)arg1;
- (void)imageStatisticalAnalysis:(unsigned int *)arg0 numCC:(int)arg1;
- (void)edgeOrientationAnalysisFindModes:(char *)arg0;

@end
