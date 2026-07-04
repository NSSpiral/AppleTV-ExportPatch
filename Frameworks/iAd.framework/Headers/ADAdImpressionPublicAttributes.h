/* Runtime dump - ADAdImpressionPublicAttributes
 * Image: /System/Library/Frameworks/iAd.framework/iAd
 */

@interface ADAdImpressionPublicAttributes : NSObject <NSSecureCoding>
{
    char _actionLeavesApplication;
    char _unbranded;
    char _actionViewControllerHidesStatusBar;
    int _action;
    NSString * _accessibilityLabel;
    unsigned int _actionViewControllerPresentationOrientationMask;
    int _modalPresentationStyle;
    NSArray * _videoAssets;
    NSString * _uniqueIdentifier;
    NSURL * _audioURL;
    NSURL * _staticImageURL;
    NSURL * _logoImageURL;
    NSString * _headlineForLCD;
    NSString * _descriptionForLCD;
    double _skipThreshold;
    double _minimumIntervalBetweenPresentations;
}

@property (nonatomic) char actionLeavesApplication;
@property (nonatomic) int action;
@property (nonatomic) char unbranded;
@property (copy, nonatomic) NSString * accessibilityLabel;
@property (nonatomic) double skipThreshold;
@property (nonatomic) double minimumIntervalBetweenPresentations;
@property (nonatomic) unsigned int actionViewControllerPresentationOrientationMask;
@property (nonatomic) char actionViewControllerHidesStatusBar;
@property (nonatomic) int modalPresentationStyle;
@property (retain, nonatomic) NSArray * videoAssets;
@property (copy, nonatomic) NSString * uniqueIdentifier;
@property (retain, nonatomic) NSURL * audioURL;
@property (retain, nonatomic) NSURL * staticImageURL;
@property (retain, nonatomic) NSURL * logoImageURL;
@property (copy, nonatomic) NSString * headlineForLCD;
@property (copy, nonatomic) NSString * descriptionForLCD;

+ (char)supportsSecureCoding;

- (void)dealloc;
- (ADAdImpressionPublicAttributes *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (NSString *)description;
- (int)action;
- (int)modalPresentationStyle;
- (NSString *)accessibilityLabel;
- (void)setAction:(int)arg0;
- (void)setModalPresentationStyle:(int)arg0;
- (NSString *)uniqueIdentifier;
- (void)setAccessibilityLabel:(NSString *)arg0;
- (NSString *)_actionDescription;
- (void)setUniqueIdentifier:(NSString *)arg0;
- (char)actionLeavesApplication;
- (double)skipThreshold;
- (NSURL *)audioURL;
- (NSURL *)staticImageURL;
- (NSURL *)logoImageURL;
- (NSString *)headlineForLCD;
- (NSString *)descriptionForLCD;
- (char)unbranded;
- (unsigned int)actionViewControllerPresentationOrientationMask;
- (double)minimumIntervalBetweenPresentations;
- (char)actionViewControllerHidesStatusBar;
- (void)setActionLeavesApplication:(char)arg0;
- (void)setUnbranded:(char)arg0;
- (void)setSkipThreshold:(double)arg0;
- (void)setMinimumIntervalBetweenPresentations:(double)arg0;
- (void)setActionViewControllerPresentationOrientationMask:(unsigned int)arg0;
- (void)setActionViewControllerHidesStatusBar:(char)arg0;
- (void)setVideoAssets:(NSArray *)arg0;
- (void)setAudioURL:(NSURL *)arg0;
- (void)setStaticImageURL:(NSURL *)arg0;
- (void)setLogoImageURL:(NSURL *)arg0;
- (void)setHeadlineForLCD:(NSString *)arg0;
- (void)setDescriptionForLCD:(NSString *)arg0;
- (NSArray *)videoAssets;

@end
