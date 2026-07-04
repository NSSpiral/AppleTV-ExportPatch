/* Runtime dump - PDAnimationCache
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDAnimationCache : NSObject
{
    int mNodeType;
    int mPresetId;
    int mPresetSubType;
    int mPresetClass;
    PDAnimationTarget * mTarget;
    char mHasDelay;
    double mDelay;
    char mHasDuration;
    double mDuration;
    char mHasDirection;
    double mDirection;
    char mHasPartCount;
    int mPartCount;
    PDAnimateMotionBehavior * mMotionPath;
    char mHasValue;
    double mValue;
    PDBuild * mBuild;
    int mIterateType;
    char mIsHead;
    int mLevel;
    NSString * mGroupId;
}

@property (retain, nonatomic) PDAnimationTarget * target;
@property (nonatomic) int nodeType;
@property (nonatomic) int presetId;
@property (nonatomic) int presetSubType;
@property (nonatomic) int presetClass;
@property (nonatomic) int iterateType;
@property (nonatomic) char hasDelay;
@property (nonatomic) double delay;
@property (nonatomic) char hasDuration;
@property (nonatomic) double duration;
@property (nonatomic) char hasDirection;
@property (nonatomic) double direction;
@property (nonatomic) char hasPartCount;
@property (nonatomic) int partCount;
@property (retain, nonatomic) PDAnimateMotionBehavior * motionPath;
@property (nonatomic) char hasValue;
@property (nonatomic) double value;
@property (retain, nonatomic) NSString * groupId;
@property (nonatomic) char isHead;
@property (nonatomic) int level;
@property (retain, nonatomic) PDBuild * build;

+ (void)loadAnimationCache:(NSObject *)arg0 pdAnimation:(NSObject *)arg1 state:(NSObject *)arg2;
+ (NSObject *)createAnimationInfoDataForCacheItem:(NSObject *)arg0 order:(unsigned int)arg1;
+ (void)mapCommonData:(NSData *)arg0 cacheData:(NSData *)arg1 state:(NSObject *)arg2;
+ (void)mapAnimationInfo:(NSDictionary *)arg0 cacheData:(NSData *)arg1 state:(NSObject *)arg2;

- (PDBuild *)build;
- (void)dealloc;
- (double)duration;
- (void)setDuration:(double)arg0;
- (void)setDelay:(double)arg0;
- (void)setTarget:(PDAnimationTarget *)arg0;
- (double)delay;
- (double)value;
- (void)setValue:(double)arg0;
- (PDAnimationTarget *)target;
- (void)setLevel:(int)arg0;
- (int)level;
- (void)setDirection:(double)arg0;
- (double)direction;
- (int)nodeType;
- (char)hasValue;
- (void)setHasValue:(char)arg0;
- (void)setHasDuration:(char)arg0;
- (char)hasDuration;
- (char)hasDirection;
- (char)hasDelay;
- (int)presetId;
- (int)presetSubType;
- (void)setPresetSubType:(int)arg0;
- (void)setPresetId:(int)arg0;
- (void)setPresetClass:(int)arg0;
- (int)presetClass;
- (void)setIterateType:(int)arg0;
- (int)iterateType;
- (PDAnimateMotionBehavior *)motionPath;
- (void)setMotionPath:(PDAnimateMotionBehavior *)arg0;
- (void)setBuild:(PDBuild *)arg0;
- (char)hasPartCount;
- (int)partCount;
- (void)setPartCount:(int)arg0;
- (char)isHead;
- (PDAnimationCache *)initWithAnimationInfo:(KNAnimationInfo *)arg0;
- (void)setNodeType:(int)arg0;
- (void)setHasDelay:(char)arg0;
- (void)setHasDirection:(char)arg0;
- (void)setHasPartCount:(char)arg0;
- (void)setIsHead:(char)arg0;
- (NSString *)groupId;
- (void)setGroupId:(NSString *)arg0;

@end
