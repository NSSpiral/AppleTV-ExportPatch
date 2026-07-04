/* Runtime dump - PDOfficeArtClient
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface PDOfficeArtClient : NSObject <OADClient, OADImageRecolorInfoClient>
{
    OADImageRecolorInfo * mImageRecolorInfo;
    PDPlaceholder * mPlaceholder;
    char mIsComment;
    PDAnimationInfo * mAnimationInfo;
    char mHasOleChart;
    int mInheritedTextStylePlaceholderType;
}

@property (nonatomic) int inheritedTextStylePlaceholderType;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (void)dealloc;
- (struct CGRect)bounds;
- (PDOfficeArtClient *)init;
- (void)setPlaceholder:(NSString *)arg0;
- (NSString *)placeholder;
- (char)hasBounds;
- (char)hasPlaceholder;
- (void)setInheritedTextStylePlaceholderType:(int)arg0;
- (void)setImageRecolorInfo:(NSDictionary *)arg0;
- (void)setHasOleChart:(char)arg0;
- (char)hasOleChart;
- (OADImageRecolorInfo *)imageRecolorInfo;
- (char)isComment;
- (void)setIsComment:(char)arg0;
- (int)inheritedTextStylePlaceholderType;
- (char)hasAnimationInfo;
- (KNAnimationInfo *)animationInfo;
- (void)setAnimationInfo:(KNAnimationInfo *)arg0;

@end
