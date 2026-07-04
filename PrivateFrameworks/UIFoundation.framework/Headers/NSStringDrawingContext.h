/* Runtime dump - NSStringDrawingContext
 * Image: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface NSStringDrawingContext : NSObject
{
    float _minimumScaleFactor;
    float _minimumTrackingAdjustment;
    float _actualScaleFactor;
    float _actualTrackingAdjustment;
    struct CGRect _totalBounds;
    NSDictionary * _linkAttributes;
    unsigned int _numberOfLineFragments;
    unsigned int _maximumNumberOfLines;
    float _baselineOffset;
    float _scaledBaselineOffset;
    float _scaledLineHeight;
    float _firstBaselineOffset;
    id _layout;
    struct ? _sdcFlags;
}

@property (nonatomic) float minimumScaleFactor;
@property (nonatomic) float minimumTrackingAdjustment;
@property (nonatomic) float actualScaleFactor;
@property (nonatomic) float actualTrackingAdjustment;
@property (nonatomic) struct CGRect totalBounds;
@property (nonatomic) char wantsNumberOfLineFragments;
@property (nonatomic) unsigned int numberOfLineFragments;
@property (nonatomic) char wrapsForTruncationMode;
@property (nonatomic) unsigned int maximumNumberOfLines;
@property (nonatomic) char wantsBaselineOffset;
@property (nonatomic) float baselineOffset;
@property (nonatomic) char wantsScaledBaselineOffset;
@property (nonatomic) float scaledBaselineOffset;
@property (nonatomic) char wantsScaledLineHeight;
@property (nonatomic) float scaledLineHeight;
@property (nonatomic) float firstBaselineOffset;
@property (nonatomic) char drawsDebugBaselines;
@property (nonatomic) char cachesLayout;
@property (retain, nonatomic) id layout;
@property (nonatomic) char usesSimpleTextEffects;

- (void)dealloc;
- (NSString *)description;
- (NSStringDrawingContext *)copyWithZone:(struct _NSZone *)arg0;
- (void)setMaximumNumberOfLines:(unsigned int)arg0;
- (struct CGRect)totalBounds;
- (void)setWrapsForTruncationMode:(char)arg0;
- (void)setMinimumScaleFactor:(float)arg0;
- (UIKeyboardLayoutStar *)layout;
- (float)actualScaleFactor;
- (void)setActualScaleFactor:(float)arg0;
- (float)baselineOffset;
- (void)setBaselineOffset:(float)arg0;
- (float)scaledBaselineOffset;
- (void)setScaledBaselineOffset:(float)arg0;
- (float)scaledLineHeight;
- (void)setScaledLineHeight:(float)arg0;
- (float)minimumScaleFactor;
- (void)setMinimumTrackingAdjustment:(float)arg0;
- (void)setDrawsDebugBaselines:(char)arg0;
- (void)setCachesLayout:(char)arg0;
- (void)setLayout:(NSObject *)arg0;
- (void)setUsesSimpleTextEffects:(char)arg0;
- (void)setWantsBaselineOffset:(char)arg0;
- (void)setWantsScaledBaselineOffset:(char)arg0;
- (void)setWantsScaledLineHeight:(char)arg0;
- (void)setWantsNumberOfLineFragments:(char)arg0;
- (float)actualTrackingAdjustment;
- (float)firstBaselineOffset;
- (char)cachesLayout;
- (unsigned int)numberOfLineFragments;
- (unsigned int)maximumNumberOfLines;
- (float)minimumTrackingAdjustment;
- (char)wantsNumberOfLineFragments;
- (char)wrapsForTruncationMode;
- (char)wantsBaselineOffset;
- (char)wantsScaledBaselineOffset;
- (char)wantsScaledLineHeight;
- (char)drawsDebugBaselines;
- (char)usesSimpleTextEffects;
- (void)setActualTrackingAdjustment:(float)arg0;
- (void)setTotalBounds:(struct CGRect)arg0;
- (void)setNumberOfLineFragments:(unsigned int)arg0;
- (void)setFirstBaselineOffset:(float)arg0;

@end
