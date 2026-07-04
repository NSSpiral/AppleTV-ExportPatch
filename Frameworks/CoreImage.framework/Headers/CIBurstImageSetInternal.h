/* Runtime dump - CIBurstImageSetInternal
 * Image: /System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIBurstImageSetInternal : NSObject
{
    NSObject<OS_dispatch_queue> * dq;
    NSObject<OS_dispatch_queue> * dq_yuvdump;
    NSObject<OS_dispatch_semaphore> * sem;
    NSMutableArray * clusterArray;
    int temporalOrder;
    int maxNumPendingFrames;
    char enableAnalysis;
    int dummyAnalysisCount;
    char enableFaceCore;
    char enableDumpYUV;
    NSString * burstCoverSelection;
    char isAction;
    char isPortrait;
    CIBurstImageFaceAnalysisContext * faceAnalysisContext;
    CIBurstYUVImage * overrideImage;
    NSDictionary * overrideProps;
    NSMutableArray * allImageIdentifiers;
    NSCountedSet * faceIDCounts;
    NSMutableDictionary * statsByImageIdentifier;
    NSMutableDictionary * clusterByImageIdentifier;
    NSString * burstLogFileName;
    struct __sFILE * burstLogFileHandle;
    CIBurstActionClassifier * actionClassifier;
    int curClusterIndexToProcess;
    NSMutableArray * bestImageIdentifiersArray;
    NSString * burstId;
    NSString * _versionString;
    int _version;
}

@property NSMutableArray * clusterArray;
@property int temporalOrder;
@property NSCountedSet * faceIDCounts;
@property NSMutableArray * allImageIdentifiers;
@property NSMutableDictionary * statsByImageIdentifier;
@property NSMutableDictionary * clusterByImageIdentifier;
@property NSString * burstLogFileName;
@property CIBurstActionClassifier * actionClassifier;
@property int maxNumPendingFrames;
@property char enableAnalysis;
@property int dummyAnalysisCount;
@property char enableFaceCore;
@property char enableDumpYUV;
@property NSString * burstCoverSelection;
@property (retain, nonatomic) NSString * burstId;
@property NSArray * bestImageIdentifiersArray;
@property NSString * versionString;
@property int version;

+ (CIBurstImageSetInternal *)defaultVersionString;

- (NSString *)burstId;
- (void)setVersionString:(NSString *)arg0;
- (NSString *)versionString;
- (void)setBurstId:(NSString *)arg0;
- (id)burstDocumentDirectory;
- (void)setTemporalOrder:(int)arg0;
- (void)processClusters:(char)arg0;
- (void)addYUVImage:(UIImage *)arg0 properties:(NSDictionary *)arg1 identifier:(NSString *)arg2 imageProps:(NSMutableDictionary *)arg3 completionBlock:(id /* block */)arg4;
- (int)computeEmotion:(id)arg0;
- (int)temporalOrder;
- (float)computeCameraTravelDistance;
- (float)computeBeginningVsEndAEMatrixDiffVsAverageAdjacent;
- (float)computeActionSelectionThreshold;
- (void)computeAllImageScores;
- (void)performEmotionalRejectionOnCluster:(id)arg0;
- (UIImage *)findBestImage:(UIImage *)arg0 useActionScores:(BOOL)arg1;
- (void)selectCoverPhotoFromMultiple:(id)arg0 burstSize:(int)arg1;
- (void)setBestImageIdentifiersArray:(NSArray *)arg0;
- (NSArray *)bestImageIdentifiersArray;
- (NSString *)bestImageIdentifiers;
- (void)addImageFromIOSurface:(struct __IOSurface *)arg0 properties:(NSDictionary *)arg1 identifier:(NSString *)arg2 completionBlock:(id /* block */)arg3;
- (NSString *)imageClusterForIdentifier:(NSString *)arg0;
- (char)isFaceDetectionForced;
- (char)isPortrait;
- (char)isAction;
- (NSMutableArray *)clusterArray;
- (void)setClusterArray:(NSMutableArray *)arg0;
- (NSCountedSet *)faceIDCounts;
- (void)setFaceIDCounts:(NSCountedSet *)arg0;
- (NSMutableArray *)allImageIdentifiers;
- (void)setAllImageIdentifiers:(NSMutableArray *)arg0;
- (CIBurstActionClassifier *)actionClassifier;
- (void)setActionClassifier:(CIBurstActionClassifier *)arg0;
- (NSMutableDictionary *)statsByImageIdentifier;
- (void)setStatsByImageIdentifier:(NSMutableDictionary *)arg0;
- (NSMutableDictionary *)clusterByImageIdentifier;
- (void)setClusterByImageIdentifier:(NSMutableDictionary *)arg0;
- (NSString *)burstLogFileName;
- (void)setBurstLogFileName:(NSString *)arg0;
- (int)maxNumPendingFrames;
- (void)setMaxNumPendingFrames:(int)arg0;
- (char)enableAnalysis;
- (void)setEnableAnalysis:(char)arg0;
- (int)dummyAnalysisCount;
- (void)setDummyAnalysisCount:(int)arg0;
- (char)enableFaceCore;
- (void)setEnableFaceCore:(char)arg0;
- (char)enableDumpYUV;
- (void)setEnableDumpYUV:(char)arg0;
- (NSString *)burstCoverSelection;
- (void)setBurstCoverSelection:(NSString *)arg0;
- (void)dealloc;
- (void)setVersion:(int)arg0;
- (int)version;
- (CIBurstImageSetInternal *)initWithOptions:(NSDictionary *)arg0;

@end
