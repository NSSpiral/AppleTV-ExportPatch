/* Runtime dump - SAStockObject
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAStockObject : SADomainObject

@property (copy, nonatomic) NSNumber * averageDailyVolume;
@property (copy, nonatomic) NSNumber * change;
@property (copy, nonatomic) NSNumber * changePercent;
@property (copy, nonatomic) NSString * chartData;
@property (copy, nonatomic) NSString * currency;
@property (copy, nonatomic) NSString * displayStyle;
@property (copy, nonatomic) NSNumber * dividendYield;
@property (copy, nonatomic) NSNumber * earningsPerShare;
@property (copy, nonatomic) NSString * exchange;
@property (copy, nonatomic) NSNumber * high;
@property (copy, nonatomic) NSString * link;
@property (copy, nonatomic) NSNumber * low;
@property (copy, nonatomic) NSString * marketCap;
@property (copy, nonatomic) NSString * name;
@property (copy, nonatomic) NSNumber * open;
@property (copy, nonatomic) NSNumber * peRatio;
@property (copy, nonatomic) NSNumber * prevClose;
@property (copy, nonatomic) NSNumber * price;
@property (copy, nonatomic) NSNumber * realTimeChange;
@property (copy, nonatomic) NSNumber * realTimeChangePercent;
@property (copy, nonatomic) NSNumber * realTimePrice;
@property (copy, nonatomic) NSNumber * realTimeTS;
@property (copy, nonatomic) NSArray * requests;
@property (copy, nonatomic) NSNumber * status;
@property (copy, nonatomic) NSArray * stockNews;
@property (copy, nonatomic) NSString * symbol;
@property (copy, nonatomic) NSNumber * timeStamp;
@property (copy, nonatomic) NSNumber * volume;
@property (copy, nonatomic) NSString * yearRange;

+ (NSObject *)object;
+ (NSDictionary *)objectWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSNumber *)price;
- (NSString *)displayStyle;
- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (NSString *)symbol;
- (void)setSymbol:(NSString *)arg0;
- (NSNumber *)timeStamp;
- (void)setTimeStamp:(NSNumber *)arg0;
- (NSNumber *)status;
- (void)setStatus:(NSNumber *)arg0;
- (void)setLink:(NSString *)arg0;
- (NSString *)link;
- (NSNumber *)open;
- (NSArray *)requests;
- (void)setRequests:(NSArray *)arg0;
- (NSString *)chartData;
- (void)setChartData:(NSString *)arg0;
- (NSString *)encodedClassName;
- (void)updateUsingSet:(NSSet *)arg0 add:(int)arg1 remove:(NSIndexSet *)arg2;
- (NSNumber *)averageDailyVolume;
- (void)setAverageDailyVolume:(NSNumber *)arg0;
- (NSNumber *)change;
- (void)setChange:(NSNumber *)arg0;
- (NSNumber *)changePercent;
- (void)setChangePercent:(NSNumber *)arg0;
- (NSString *)currency;
- (void)setCurrency:(NSString *)arg0;
- (void)setDisplayStyle:(NSString *)arg0;
- (NSNumber *)dividendYield;
- (void)setDividendYield:(NSNumber *)arg0;
- (NSNumber *)earningsPerShare;
- (void)setEarningsPerShare:(NSNumber *)arg0;
- (NSString *)exchange;
- (void)setExchange:(NSString *)arg0;
- (NSNumber *)high;
- (void)setHigh:(NSNumber *)arg0;
- (NSNumber *)low;
- (void)setLow:(NSNumber *)arg0;
- (NSString *)marketCap;
- (void)setMarketCap:(NSString *)arg0;
- (NSNumber *)peRatio;
- (void)setPeRatio:(NSNumber *)arg0;
- (NSNumber *)prevClose;
- (void)setPrevClose:(NSNumber *)arg0;
- (void)setPrice:(NSNumber *)arg0;
- (NSNumber *)realTimeChange;
- (void)setRealTimeChange:(NSNumber *)arg0;
- (NSNumber *)realTimeChangePercent;
- (void)setRealTimeChangePercent:(NSNumber *)arg0;
- (NSNumber *)realTimePrice;
- (void)setRealTimePrice:(NSNumber *)arg0;
- (NSNumber *)realTimeTS;
- (void)setRealTimeTS:(NSNumber *)arg0;
- (NSArray *)stockNews;
- (void)setStockNews:(NSArray *)arg0;
- (NSString *)yearRange;
- (void)setYearRange:(NSString *)arg0;
- (NSNumber *)volume;
- (void)setVolume:(NSNumber *)arg0;
- (void)setOpen:(NSNumber *)arg0;

@end
