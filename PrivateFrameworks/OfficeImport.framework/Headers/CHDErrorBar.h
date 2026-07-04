/* Runtime dump - CHDErrorBar
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDErrorBar : NSObject
{
    CHDChart * mChart;
    double mValue;
    int mType;
    int mValueType;
    int mDirection;
    BOOL mNoEndCap;
    CHDData * mMinusValues;
    CHDData * mPlusValues;
    OADGraphicProperties * mGraphicProperties;
}

+ (CHDErrorBar *)errorBarWithChart:(id)arg0;

- (void)dealloc;
- (void)setType:(int)arg0;
- (int)type;
- (double)value;
- (void)setValue:(double)arg0;
- (void)setDirection:(int)arg0;
- (int)direction;
- (NSDictionary *)graphicProperties;
- (CHDErrorBar *)initWithChart:(GQHChart *)arg0;
- (void)setGraphicProperties:(NSDictionary *)arg0;
- (void)setNoEndCap:(BOOL)arg0;
- (void)setPlusValues:(NSArray *)arg0;
- (void)setMinusValues:(NSArray *)arg0;
- (BOOL)isNoEndCap;
- (NSArray *)minusValues;
- (NSArray *)plusValues;
- (int)valueType;
- (void)setValueType:(int)arg0;

@end
