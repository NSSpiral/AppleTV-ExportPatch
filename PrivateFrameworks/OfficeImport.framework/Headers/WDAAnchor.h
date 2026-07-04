/* Runtime dump - WDAAnchor
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDAAnchor : NSObject
{
    struct CGRect mBounds;
    int mTextWrappingMode;
    int mTextWrappingModeType;
    NSArray * mTextWrapPoints;
    double mWrapDistanceLeft;
    double mWrapDistanceTop;
    double mWrapDistanceRight;
    double mWrapDistanceBottom;
    int mHorizontalPosition;
    int mRelativeHorizontalPosition;
    int mVerticalPosition;
    int mRelativeVerticalPosition;
    char mAllowOverlap;
    long mZIndex;
}

@property (nonatomic) struct CGRect bounds;
@property (nonatomic) int textWrappingMode;
@property (nonatomic) int textWrappingModeType;
@property (retain, nonatomic) NSArray * textWrapPoints;
@property (nonatomic) double wrapDistanceLeft;
@property (nonatomic) double wrapDistanceRight;
@property (nonatomic) double wrapDistanceTop;
@property (nonatomic) double wrapDistanceBottom;
@property (nonatomic) int horizontalPosition;
@property (nonatomic) int relativeHorizontalPosition;
@property (nonatomic) int verticalPosition;
@property (nonatomic) int relativeVerticalPosition;
@property (nonatomic) char allowOverlap;
@property (nonatomic) long zIndex;

+ (NSObject *)stringForTextWrappingModeType:(int)arg0;

- (void)dealloc;
- (struct CGRect)bounds;
- (WDAAnchor *)init;
- (void)setBounds:(struct CGRect)arg0;
- (void).cxx_construct;
- (long)zIndex;
- (void)setZIndex:(long)arg0;
- (int)relativeVerticalPosition;
- (int)textWrappingMode;
- (int)relativeHorizontalPosition;
- (int)horizontalPosition;
- (int)verticalPosition;
- (void)setRelativeHorizontalPosition:(int)arg0;
- (void)setRelativeVerticalPosition:(int)arg0;
- (void)setWrapDistanceLeft:(double)arg0;
- (void)setWrapDistanceTop:(double)arg0;
- (void)setWrapDistanceRight:(double)arg0;
- (void)setWrapDistanceBottom:(double)arg0;
- (void)setAllowOverlap:(char)arg0;
- (void)setVerticalPosition:(int)arg0;
- (void)setHorizontalPosition:(int)arg0;
- (void)setTextWrappingMode:(int)arg0;
- (int)textWrappingModeType;
- (void)setTextWrappingModeType:(int)arg0;
- (NSArray *)textWrapPoints;
- (void)setTextWrapPoints:(NSArray *)arg0;
- (double)wrapDistanceLeft;
- (double)wrapDistanceRight;
- (double)wrapDistanceTop;
- (double)wrapDistanceBottom;
- (char)allowOverlap;

@end
