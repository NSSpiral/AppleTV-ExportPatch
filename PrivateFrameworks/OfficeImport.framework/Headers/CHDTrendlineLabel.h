/* Runtime dump - CHDTrendlineLabel
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDTrendlineLabel : NSObject
{
    EDResources * mResources;
    CHDFormula * mName;
    unsigned int mLastCachedNameStringIndex;
    unsigned int mContentFormatId;
    BOOL mGeneratedText;
    BOOL mAutomaticLabelDeleted;
    OADGraphicProperties * mGraphicProperties;
}

+ (NSArray *)trendlineLabelWithResources:(NSArray *)arg0;

- (void)dealloc;
- (NSString *)name;
- (NSDictionary *)graphicProperties;
- (unsigned int)contentFormatId;
- (EDContentFormat *)contentFormat;
- (NSString *)lastCachedName;
- (void)setContentFormatId:(unsigned int)arg0;
- (void)setGraphicProperties:(NSDictionary *)arg0;
- (CHDTrendlineLabel *)initWithResources:(NSArray *)arg0;
- (void)setLastCachedName:(NSString *)arg0;
- (void)setName:(NSString *)arg0 chart:(GQHChart *)arg1;
- (void)setGeneratedText:(BOOL)arg0;
- (void)setAutomaticLabelDeleted:(BOOL)arg0;
- (void)setContentFormat:(EDContentFormat *)arg0;
- (unsigned int)stringIndex;
- (void)setStringIndex:(unsigned int)arg0;
- (BOOL)isGeneratedText;
- (BOOL)isAutomaticLabelDeleted;

@end
