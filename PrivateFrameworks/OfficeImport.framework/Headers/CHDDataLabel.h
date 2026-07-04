/* Runtime dump - CHDDataLabel
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDataLabel : NSObject
{
    EDResources * mResources;
    unsigned int mStringIndex;
    unsigned int mContentFormatId;
    int mPosition;
    BOOL mShowLeaderLines;
    BOOL mShowCategoryName;
    BOOL mShowSeriesName;
    BOOL mShowPercent;
    BOOL mShowBubbleSize;
    BOOL mShowValue;
    BOOL mShowLegendKey;
    BOOL mIsPositionAffineTransform;
    double mRotation;
    OADGraphicProperties * mGraphicProperties;
}

+ (NSArray *)dataLabelWithResources:(NSArray *)arg0;

- (void)dealloc;
- (NSString *)string;
- (void)setPosition:(int)arg0;
- (int)position;
- (void)setShowValue:(BOOL)arg0;
- (void)setString:(NSString *)arg0;
- (NSDictionary *)graphicProperties;
- (unsigned int)contentFormatId;
- (EDContentFormat *)contentFormat;
- (BOOL)isShowValue;
- (void)setContentFormatId:(unsigned int)arg0;
- (void)setGraphicProperties:(NSDictionary *)arg0;
- (CHDDataLabel *)initWithResources:(NSArray *)arg0;
- (void)setContentFormat:(EDContentFormat *)arg0;
- (BOOL)isShowLeaderLines;
- (void)setShowLeaderLines:(BOOL)arg0;
- (BOOL)isShowCategoryName;
- (void)setShowCategoryName:(BOOL)arg0;
- (BOOL)isShowSeriesName;
- (void)setShowSeriesName:(BOOL)arg0;
- (BOOL)isShowPercent;
- (void)setShowPercent:(BOOL)arg0;
- (BOOL)isShowBubbleSize;
- (void)setShowBubbleSize:(BOOL)arg0;
- (BOOL)isShowLegendKey;
- (void)setShowLegendKey:(BOOL)arg0;
- (void)setIsPositionAffineTransform:(BOOL)arg0;
- (BOOL)isPositionAffineTransform;
- (double)rotationAngle;
- (void)setRotationAngle:(double)arg0;
- (unsigned int)stringIndex;
- (void)setStringIndex:(unsigned int)arg0;

@end
