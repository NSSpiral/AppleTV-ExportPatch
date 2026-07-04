/* Runtime dump - MREffectDateline
 * Image: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

@interface MREffectDateline : MREffect <MZEffectTiming>
{
    NSMutableDictionary * mSprites;
    NSDictionary * mJournal;
    NSMutableArray * mLengths;
    NSMutableArray * mChapterDurations;
    NSMutableArray * mChapters;
    NSMutableDictionary * mText;
    NSMutableDictionary * mChapterDates;
    NSMutableDictionary * mChapterNumDate;
    NSMutableArray * mIndicies;
    NSMutableDictionary * mWeatherImages;
    NSMutableDictionary * mDayImages;
    NSMutableDictionary * mBreakInformation;
    NSMutableDictionary * mMovieProviders;
    NSArray * mSlideInformation;
    char mIsLoaded;
    char mIsRotating;
    char mIsVertical;
    MRImageProvider * mTextBackground;
    MRImageProvider * mQuoteOpen;
    MRImageProvider * mQuoteClose;
    MRImageProvider * mQuoteBox;
    MRImageProvider * mWeatherWindowMask;
    MRImageProvider * mDateWindowMask;
    MRImage * mGrayImage;
    MRCroppingSprite * mChapterSprite;
}

@property (readonly, nonatomic) double phaseInDuration;
@property (readonly, nonatomic) double mainDuration;
@property (readonly, nonatomic) double phaseOutDuration;

+ (void)initialize;
+ (NSObject *)customTimingWithEffectID:(NSString *)arg0 effectAttributes:(NSDictionary *)arg1 slideInformation:(NSDictionary *)arg2 textInformation:(NSDictionary *)arg3 inAspectRatio:(float)arg4;
+ (char)hasCustomTiming;

- (void)_unload;
- (void)_cleanup;
- (void)setAttributes:(NSDictionary *)arg0;
- (MREffectDateline *)initWithEffectID:(NSString *)arg0;
- (double)lowestDisplayTime;
- (double)showTimeForSlideAtIndex:(unsigned int)arg0;
- (double)showDurationForSlideAtIndex:(unsigned int)arg0;
- (double)displayTimeForSlideAtIndex:(unsigned int)arg0;
- (void)setPixelSize:(struct CGSize)arg0;
- (char)isLoadedForTime:(double)arg0;
- (void)_loadForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)renderAtTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (char)prerenderForTime:(double)arg0 inContext:(NSObject *)arg1 withArguments:(NSDictionary *)arg2;
- (void)beginMorphingToAspectRatio:(float)arg0 withDuration:(double)arg1;
- (void)endMorphing;
- (NSObject *)elementHitAtPoint:(struct CGPoint)arg0 withInverseMatrix:(NSSQLRelationship *)arg1 localPoint:(float)arg2;
- (char)getVerticesCoordinates:(id *)arg0 withMatrix:(struct CGPoint)arg1 forElement:(NSObject *)arg2;
- (struct CGSize)_maxSizeForTextElement:(NSObject *)arg0;
- (int)_maxLinesForTextElement:(NSObject *)arg0;
- (double)displayTimeForTextAtIndex:(unsigned int)arg0;
- (struct CGSize)_sizeForBreakAspectRatio:(float)arg0 size:(struct CGSize)arg1 inContext:(NSObject *)arg2;
- (float)_aspectRatioForSlideIndex:(int)arg0;
- (void)_calculateDurations:(id)arg0 slideInformation:(NSDictionary *)arg1 aspectRatio:(float)arg2;
- (void)_updateIndiciesWithAttributes:(NSDictionary *)arg0;
- (double)_calculateMainDurationWithAttributes:(NSDictionary *)arg0;
- (struct _NSRange)_chapterRangeForSlide:(int)arg0 startIndex:(int *)arg1 endIndex:(int *)arg2;
- (float)_startTimeForChapter:(int)arg0;
- (double)_startTimeForSlideIndex:(int)arg0 inChapter:(int)arg1;
- (double)_movieDurationForSlideAtIndex:(int)arg0;
- (char)_isMovieForSlideAtIndex:(int)arg0;
- (id)_weatherStringForCondition:(unsigned int)arg0;
- (void)_updateSlideProviders:(float)arg0 context:(NSObject *)arg1 renderArguments:(NSDictionary *)arg2;
- (int)_chapterIndexForTime:(double)arg0;
- (void)_loadTextForChapter:(int)arg0 context:(NSObject *)arg1;
- (void)_unloadTextForChapter:(int)arg0;
- (int)_currentItemForChapter:(int)arg0 atTime:(double)arg1 forDuration:(double *)arg2 fromTime:(double *)arg3;
- (void)_drawGrayChapters:(id)arg0 time:(double)arg1 arguments:(NSDictionary *)arg2 showInfo:(char)arg3 startProgress:(float)arg4 titleEnd:(float)arg5 titleToChapter:(float)arg6 drawPhotos:(char)arg7 startIndex:(int)arg8 exit:(float)arg9 isExiting:(char)arg10 chapterIntro:(float)arg11 chapterProgress:(float)arg12;
- (float)_offsetForChapterIndex:(int)arg0 layoutIndex:(int)arg1 aspectRatio:(float)arg2;
- (void)_drawChapterDateSwitch:(int)arg0 to:(int)arg1 progress:(float)arg2 time:(double)arg3 arguments:(NSDictionary *)arg4 context:(NSObject *)arg5;
- (void)_cleanUpDictionary:(NSDictionary *)arg0;
- (NSString *)_textImageForString:(NSString *)arg0 string2:(NSString *)arg1 type:(int)arg2 inContext:(NSObject *)arg3 firstLine:(struct CGRect *)arg4 lastLine:(struct CGSize)arg5;
- (NSString *)_textImageForString:(NSString *)arg0 type:(int)arg1 inContext:(NSObject *)arg2;
- (void)_addTextImage:(UIImage *)arg0 forKey:(NSString *)arg1 inDictionary:(NSDictionary *)arg2;
- (char)_timeIs24HourFormat;
- (void)_loadDateForChapter:(int)arg0 context:(NSObject *)arg1;

@end
