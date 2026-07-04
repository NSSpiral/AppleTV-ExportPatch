/* Runtime dump - CHDDefaultTextProperty
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDefaultTextProperty : NSObject <EDKeyedObject>
{
    EDResources * mResources;
    int mDefaultTextType;
    unsigned int mContentFormatId;
    EDRunsCollection * mRuns;
    int mLabelPosition;
    BOOL mShowCategoryLabel;
    BOOL mShowValueLabel;
    BOOL mShowPercentageLabel;
    BOOL mShowSeriesLabel;
    BOOL mShowBubbleSizeLabel;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CHDDefaultTextProperty *)defaultTextPropertyWithResources:(NSArray *)arg0;

- (void)dealloc;
- (int)key;
- (unsigned int)contentFormatId;
- (EDContentFormat *)contentFormat;
- (id)runs;
- (void)setContentFormatId:(unsigned int)arg0;
- (CHDDefaultTextProperty *)initWithResources:(NSArray *)arg0;
- (void)setRuns:(id)arg0;
- (void)setContentFormat:(EDContentFormat *)arg0;
- (int)defaultTextType;
- (void)setDefaultTextType:(int)arg0;
- (int)labelPosition;
- (void)setLabelPosition:(int)arg0;
- (BOOL)isShowCategoryLabel;
- (void)setIsShowCategoryLabel:(BOOL)arg0;
- (BOOL)isShowValueLabel;
- (void)setIsShowValueLabel:(BOOL)arg0;
- (BOOL)isShowPercentageLabel;
- (void)setIsShowPercentageLabel:(BOOL)arg0;
- (BOOL)isShowBubbleSizeLabel;
- (void)setIsShowBubbleSizeLabel:(BOOL)arg0;
- (BOOL)isShowSeriesLabel;
- (void)setIsShowSeriesLabel:(BOOL)arg0;

@end
