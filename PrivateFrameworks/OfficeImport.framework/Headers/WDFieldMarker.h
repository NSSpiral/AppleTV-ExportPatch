/* Runtime dump - WDFieldMarker
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDFieldMarker : WDRun
{
    WDCharacterProperties * mProperties;
    int mFieldPosition;
    int mMarkerType;
    unsigned char mFieldType;
    id mZombieEmbed;
    id mResultDirty;
    id mResultEdited;
    id mLocked;
    id mPrivateResult;
    id mNested;
    id mHasSeparator;
}

- (void)clearProperties;
- (void)dealloc;
- (void)setLocked:(char)arg0;
- (NSDictionary *)properties;
- (unsigned char)fieldType;
- (int)fieldMarkerType;
- (int)runType;
- (void)setFieldPosition:(int)arg0;
- (void)setFieldMarkerType:(int)arg0;
- (void)setFieldType:(unsigned char)arg0;
- (WDFieldMarker *)initWithParagraph:(CPParagraph *)arg0;
- (int)fieldPosition;
- (char)zombieEmbed;
- (void)setZombieEmbed:(char)arg0;
- (char)resultDirty;
- (void)setResultDirty:(char)arg0;
- (char)resultEdited;
- (void)setResultEdited:(char)arg0;
- (char)locked;
- (char)privateResult;
- (void)setPrivateResult:(char)arg0;
- (char)nested;
- (void)setNested:(char)arg0;
- (char)hasSeparator;
- (void)setHasSeparator:(char)arg0;

@end
