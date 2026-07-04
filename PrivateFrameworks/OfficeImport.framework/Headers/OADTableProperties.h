/* Runtime dump - OADTableProperties
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADTableProperties : OADDrawableProperties <OADEffectsParent>
{
    OADTableStyle * mStyle;
    char mRightToLeft;
    char mFirstRow;
    char mFirstColumn;
    char mLastRow;
    char mLastColumn;
    char mBandRow;
    char mBandColumn;
    NSArray * mEffects;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (OADTableProperties *)defaultProperties;

- (void)dealloc;
- (NSDictionary *)style;
- (void)setStyle:(NSObject *)arg0;
- (char)rightToLeft;
- (char)lastColumn;
- (char)firstColumn;
- (char)firstRow;
- (char)lastRow;
- (void)setLastColumn:(char)arg0;
- (void)setFirstColumn:(char)arg0;
- (char)bandRow;
- (NSArray *)effects;
- (void)setEffects:(NSArray *)arg0;
- (void)setFirstRow:(char)arg0;
- (void)setLastRow:(char)arg0;
- (void)setBandColumn:(char)arg0;
- (void)setBandRow:(char)arg0;
- (void)setRightToLeft:(char)arg0;
- (OADTableProperties *)initWithDefaults;
- (char)hasEffects;
- (char)bandColumn;
- (char)hasBandsNormalToDir:(int)arg0;
- (char)hasVectorNormalToDir:(int)arg0 atExtremePos:(int)arg1;

@end
