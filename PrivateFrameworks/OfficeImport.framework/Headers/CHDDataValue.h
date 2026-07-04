/* Runtime dump - CHDDataValue
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDataValue : NSObject
{
    struct CHDDataPoint mDataPoint;
}

+ (NSData *)dataValue;
+ (NSObject *)dataValueWithIndex:(int)arg0 value:(struct EDValue *)arg1;

- (CHDDataValue *)init;
- (struct EDValue *)value;
- (void)setValue:(struct EDValue *)arg0;
- (int)index;
- (void).cxx_construct;
- (void).cxx_destruct;
- (void)setIndex:(int)arg0;
- (unsigned int)contentFormatId;
- (void)setContentFormatId:(unsigned int)arg0;
- (CHDDataValue *)initWithIndex:(int)arg0 value:(struct EDValue *)arg1;
- (struct CHDDataPoint *)dataPoint;
- (void)setDataPoint:(struct CHDDataPoint *)arg0;
- (NSArray *)contentFormatWithResources:(NSArray *)arg0;
- (void)setContentFormatWithResources:(NSArray *)arg0 resources:(NSArray *)arg1;

@end
