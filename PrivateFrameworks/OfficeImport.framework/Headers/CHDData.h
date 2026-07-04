/* Runtime dump - CHDData
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDData : NSObject
{
    CHDDataValuesCollection * mDataValues;
    CHDFormula * mFormula;
    unsigned int mContentFormatId;
    unsigned int mDataValueIndexCount;
    EDResources * mResources;
}

+ (NSNumber *)dataWithDataPointCount:(unsigned int)arg0 resources:(NSArray *)arg1;
+ (NSArray *)dataWithResources:(NSArray *)arg0;

- (void)dealloc;
- (BOOL)isEmpty;
- (unsigned int)contentFormatId;
- (EDContentFormat *)contentFormat;
- (NSArray *)dataValues;
- (EDFormula *)formula;
- (void)setContentFormatId:(unsigned int)arg0;
- (void)setFormula:(EDArrayedFormula *)arg0 chart:(GQHChart *)arg1;
- (void)setDataValueIndexCount:(unsigned int)arg0;
- (CHDData *)initWithResources:(NSArray *)arg0;
- (void)setContentFormat:(EDContentFormat *)arg0;
- (CHDData *)initWithDataPointCount:(unsigned int)arg0 resources:(NSArray *)arg1;
- (unsigned int)countOfCellsBeingReferenced;
- (unsigned int)dataValueIndexCount;
- (unsigned int)averageDataPointDecimalCount;
- (id)firstValueContentFormatWithWorkbook:(EDWorkbook *)arg0;

@end
