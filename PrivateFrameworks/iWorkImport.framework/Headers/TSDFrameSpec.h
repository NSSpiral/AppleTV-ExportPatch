/* Runtime dump - TSDFrameSpec
 * Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSDFrameSpec : NSObject <NSCopying>
{
    NSBundle * mBundle;
    NSString * mFrameName;
    float mLeftInset;
    float mRightInset;
    float mTopInset;
    float mBottomInset;
    struct CGPoint mAdornmentPosition;
    float mMinimumAssetScale;
    int mTilingMode;
    char mDisplayInPicker;
    char mHasImages;
    char mHasMask;
    char mHasAdornment;
    NSMutableDictionary * mProvidersByKey;
    char mLoadedImageMetrics;
    float mLeftWidth;
    float mRightWidth;
    float mTopHeight;
    float mBottomHeight;
    struct CGSize mAdornmentSize;
    int mInterest;
}

@property (readonly, copy, nonatomic) NSString * frameName;
@property (readonly, nonatomic) char displayInPicker;

+ (NSString *)frameSpecWithName:(NSString *)arg0;
+ (TSDFrameSpec *)frameSpecs;
+ (NSArray *)p_imageKeys;

- (float)i_minimumAssetScale;
- (char)i_hasMask;
- (char)i_hasImages;
- (float)i_leftInset;
- (float)i_rightInset;
- (float)i_bottomInset;
- (float)i_topInset;
- (char)i_hasAdornment;
- (struct CGPoint)i_adornmentPosition;
- (float)i_leftWidth;
- (float)i_rightWidth;
- (float)i_topHeight;
- (float)i_bottomHeight;
- (struct CGSize)i_adornmentSize;
- (NSDictionary *)p_infoDictionary;
- (NSObject *)i_providerForIndex:(int)arg0 mask:(char)arg1;
- (NSString *)p_imageDataForKey:(NSString *)arg0;
- (void)p_loadImageMetrics;
- (char)displayInPicker;
- (void)i_addInterestInProviders;
- (void)i_removeInterestInProviders;
- (int)i_tilingMode;
- (void)dealloc;
- (TSDFrameSpec *)copyWithZone:(struct _NSZone *)arg0;
- (TSDFrameSpec *)initWithBundle:(NSBundle *)arg0;
- (NSString *)frameName;

@end
