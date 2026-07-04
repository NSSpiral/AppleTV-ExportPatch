/* Runtime dump - SwingEstimator
 * Image: /System/Library/PrivateFrameworks/ACTFramework.framework/ACTFramework
 */

@interface SwingEstimator : NSObject
{
    CMMotionManager * motionManager;
    char estimate;
    char collectDebugData;
    char showDebugData;
    NSMutableArray * debugData;
    unsigned long long startTime;
    unsigned long long stopTime;
    int numberOfSamples;
    int numberOfValidSamplesAngularVelocity;
    int numberOfValidSamplesLinearAcceleration;
    float LOmega;
    float ROmega;
    float LA;
    float RA;
    void * outputRefCon;
    /* block */ id * outputCallback;
    NSOperationQueue * operationQueue;
}

@property char estimate;
@property int numberOfSamples;
@property int numberOfValidSamplesAngularVelocity;
@property int numberOfValidSamplesLinearAcceleration;
@property float LOmega;
@property float ROmega;
@property float LA;
@property float RA;
@property (readonly) NSOperationQueue * operationQueue;

- (void)dealloc;
- (void)initSensors;
- (void)estimateSwingMotion;
- (void)stopMotionManager;
- (BOOL)isSignalTooWeak:(float)arg0 withRespectTo:(float)arg1 withMargin:(float)arg2;
- (BOOL)isSignalTooNoisy:(float)arg0 withMean:(float)arg1 andWithStandardDeviation:(float)arg2 withMargin:(float)arg3;
- (float)updateEvidenceAngularVelocity:(float)arg0 withOmegaX:(float)arg1 withOmegaY:(float)arg2 withOmegaZ:(float)arg3 checkIfSampleIsGood:(char *)arg4;
- (float)updateEvidenceLinearAcceleration:(float)arg0 withAX:(float)arg1 withAY:(float)arg2 withAZ:(float)arg3 checkIfSampleIsGood:(char *)arg4;
- (NSData *)createCSVfromDebugData;
- (SwingEstimator *)initWithCallback:(/* block */ id *)arg0 userData:(void *)arg1;
- (char)estimate;
- (void)setEstimate:(char)arg0;
- (int)numberOfValidSamplesAngularVelocity;
- (void)setNumberOfValidSamplesAngularVelocity:(int)arg0;
- (int)numberOfValidSamplesLinearAcceleration;
- (void)setNumberOfValidSamplesLinearAcceleration:(int)arg0;
- (int)numberOfSamples;
- (void)setNumberOfSamples:(int)arg0;
- (float)LOmega;
- (void)setLOmega:(float)arg0;
- (float)ROmega;
- (void)setROmega:(float)arg0;
- (float)LA;
- (void)setLA:(float)arg0;
- (float)RA;
- (void)setRA:(float)arg0;
- (NSOperationQueue *)operationQueue;

@end
