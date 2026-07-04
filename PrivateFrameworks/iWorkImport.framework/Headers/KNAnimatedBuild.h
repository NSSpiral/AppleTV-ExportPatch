/* Runtime dump - KNAnimatedBuild
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface KNAnimatedBuild : NSObject
{
    char _automatic;
    char _animateAtEndOfPreviousBuild;
    char _isMovieStartBuild;
    char _isVisibleAtBeginning;
    char _isVisibleAtEnd;
    int _buildType;
    int _eventIndex;
    int _stageIndex;
    unsigned int _direction;
    unsigned int _deliveryOption;
    unsigned int _deliveryStyle;
    Class _pluginClass;
    KNBuildAttributes * _attributes;
    NSDictionary * _previousAttributes;
    NSDictionary * _finalAttributes;
    double _startTime;
    double _eventStartTime;
    double _duration;
    double _endTime;
    double _eventEndTime;
}

@property (readonly, nonatomic) int buildType;
@property (nonatomic) int eventIndex;
@property (readonly, nonatomic) int stageIndex;
@property (readonly, nonatomic) unsigned int direction;
@property (readonly, nonatomic) unsigned int deliveryOption;
@property (readonly, nonatomic) unsigned int deliveryStyle;
@property (readonly, nonatomic) Class pluginClass;
@property (readonly, nonatomic) KNBuildAttributes * attributes;
@property (readonly, nonatomic) double startTime;
@property (readonly, nonatomic) double eventStartTime;
@property (nonatomic) double duration;
@property (readonly, nonatomic) double endTime;
@property (readonly, nonatomic) double eventEndTime;
@property (readonly, nonatomic) char automatic;
@property (nonatomic) char animateAtEndOfPreviousBuild;
@property (readonly, nonatomic) char isBuildIn;
@property (readonly, nonatomic) char isBuildOut;
@property (readonly, nonatomic) char isActionBuild;
@property (readonly, nonatomic) char isEmphasisBuild;
@property (readonly, nonatomic) char isDriftBuild;
@property (nonatomic) char isMovieStartBuild;
@property (readonly, nonatomic) char isMagicChartBuild;
@property (nonatomic) char isVisibleAtBeginning;
@property (nonatomic) char isVisibleAtEnd;
@property (copy, nonatomic) NSDictionary * previousAttributes;
@property (copy, nonatomic) NSDictionary * finalAttributes;

- (int)stageIndex;
- (int)buildType;
- (KNAnimatedBuild *)initWithBuildType:(int)arg0 attributes:(KNBuildAttributes *)arg1 pluginClass:(Class)arg2 deliveryStyle:(unsigned int)arg3 eventIndex:(int)arg4 stageIndex:(int)arg5 startTime:(double)arg6 eventStartTime:(double)arg7 duration:(double)arg8 direction:(unsigned int)arg9 automatic:(char)arg10 animateAtEndOfPreviousBuild:(char)arg11;
- (char)isBuildIn;
- (char)isBuildOut;
- (char)isActionBuild;
- (char)isEmphasisBuild;
- (char)isDriftBuild;
- (char)isMovieStartBuild;
- (char)isMagicChartBuild;
- (int)eventIndex;
- (void)setEventIndex:(int)arg0;
- (unsigned int)deliveryOption;
- (unsigned int)deliveryStyle;
- (double)eventStartTime;
- (double)eventEndTime;
- (char)automatic;
- (char)animateAtEndOfPreviousBuild;
- (void)setAnimateAtEndOfPreviousBuild:(char)arg0;
- (void)setIsMovieStartBuild:(char)arg0;
- (char)isVisibleAtBeginning;
- (void)setIsVisibleAtBeginning:(char)arg0;
- (char)isVisibleAtEnd;
- (void)setIsVisibleAtEnd:(char)arg0;
- (NSDictionary *)previousAttributes;
- (void)setPreviousAttributes:(NSDictionary *)arg0;
- (NSDictionary *)finalAttributes;
- (void)setFinalAttributes:(NSDictionary *)arg0;
- (void)dealloc;
- (NSString *)description;
- (double)duration;
- (void)setDuration:(double)arg0;
- (unsigned int)direction;
- (KNBuildAttributes *)attributes;
- (double)startTime;
- (Class)pluginClass;
- (double)endTime;

@end
