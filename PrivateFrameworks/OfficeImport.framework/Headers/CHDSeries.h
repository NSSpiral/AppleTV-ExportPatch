/* Runtime dump - CHDSeries
 * Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface CHDSeries : NSObject <EDKeyedObject>
{
    CHDChart * mChart;
    CHDChartType * mChartType;
    unsigned int mOrder;
    unsigned int mStyleIndex;
    CHDFormula * mName;
    CHDDataValue * mLastCachedName;
    CHDData * mValueData;
    CHDData * mCategoryData;
    EDKeyedCollection * mDataValuePropertiesCollection;
    EDCollection * mTrendlinesCollection;
    CHDErrorBar * mErrorBarX;
    CHDErrorBar * mErrorBarY;
    CHDDataLabel * mDefaultDataLabel;
    OADGraphicProperties * mGraphicProperties;
    BOOL mDateTimeFormattingFlag;
    BOOL mHiddenFlag;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (CHDSeries *)seriesWithChart:(id)arg0;

- (void)dealloc;
- (BOOL)isHidden;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (int)key;
- (BOOL)isEmpty;
- (void)setOrder:(unsigned int)arg0;
- (unsigned int)order;
- (NSData *)valueData;
- (void)setValueData:(NSData *)arg0;
- (NSDictionary *)graphicProperties;
- (NSString *)lastCachedName;
- (NSData *)categoryData;
- (BOOL)isDateTimeFormattingFlag;
- (TSCHChartType *)chartType;
- (id)dataValuePropertiesCollection;
- (NSString *)defaultDataLabel;
- (id)errorBarYAxis;
- (NSObject *)shallowCopy;
- (BOOL)chart;
- (CHDSeries *)initWithChart:(GQHChart *)arg0;
- (void)setChartType:(NSObject *)arg0;
- (void)setDefaultDataLabel:(NSString *)arg0;
- (void)setGraphicProperties:(NSDictionary *)arg0;
- (id)errorBarXAxis;
- (unsigned int)styleIndex;
- (void)setErrorBar:(CHBErrorBar *)arg0;
- (void)setLastCachedName:(NSString *)arg0;
- (void)setDateTimeFormattingFlag:(BOOL)arg0;
- (void)setStyleIndex:(unsigned int)arg0;
- (void)setErrorBarYAxis:(id)arg0;
- (void)setErrorBarXAxis:(id)arg0;
- (void)clearBackPointers;
- (void)setCategoryData:(NSData *)arg0;
- (unsigned int)categoryCount;
- (void)setDataValuePropertiesCollection:(id)arg0;
- (id)trendlineCollection;
- (void)setTrendlineCollection:(id)arg0;
- (BOOL)hasTrendlines;
- (BOOL)hasErrorBars;
- (void)setHiddenFlag:(BOOL)arg0;
- (NSObject *)defaultSeriesNameForIndex:(unsigned int)arg0;

@end
