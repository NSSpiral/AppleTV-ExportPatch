/* Runtime dump - CHDDataValuesCollection
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDDataValuesCollection : NSObject
{
    struct __CFData * mPackedValues;
    unsigned int mDataValueCount;
    struct __CFDictionary * mIndexToDataValueMap;
    BOOL mContainsStringValue;
}

- (void)dealloc;
- (unsigned int)count;
- (CHDDataValuesCollection *)init;
- (void)cleanup;
- (NSObject *)dataValueAtIndex:(unsigned int)arg0;
- (BOOL)addDataPoint:(struct CHDDataPoint *)arg0;
- (void)finishReading;
- (CHDDataValuesCollection *)initWithDataPointCount:(unsigned int)arg0;
- (struct CHDDataPoint *)dataPointAtIndex:(NSObject *)arg0;
- (void)setupBufferForValues:(unsigned int)arg0;
- (struct CHDDataPoint *)dataPointWithIndex:(NSObject *)arg0;
- (void)resetWithDataPointCount:(unsigned int)arg0;
- (BOOL)addDataValue:(CHXDataValue *)arg0;
- (NSObject *)contentFormatAtIndex:(unsigned int)arg0 resources:(NSArray *)arg1;
- (NSObject *)dataValueWithIndex:(unsigned int)arg0;
- (BOOL)containsStringValue;

@end
