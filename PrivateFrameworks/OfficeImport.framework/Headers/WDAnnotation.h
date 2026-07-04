/* Runtime dump - WDAnnotation
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDAnnotation : WDRun
{
    int mType;
    WDCharacterRun * mReference;
    char mReferencePopertiesFixed;
    WDAnnotationData * mData;
    WDAnnotation * mOtherEndOfRangedAnnotation;
}

- (void)dealloc;
- (NSDate *)date;
- (NSString *)text;
- (NSData *)data;
- (void)setDate:(NSDate *)arg0;
- (NSString *)owner;
- (int)runType;
- (struct ?)reference;
- (char)referencePropertiesFixed;
- (void)setReferencePropertiesFixed;
- (void)setOtherEndOfRangedAnnotation:(NSObject *)arg0;
- (void)useDataFromOtherEnd;
- (WDAnnotation *)initWithParagraph:(CPParagraph *)arg0 type:(int)arg1;
- (int)annotationType;
- (NSObject *)otherEndOfRangedAnnotation;
- (void)setOwner:(NSObject *)arg0;

@end
