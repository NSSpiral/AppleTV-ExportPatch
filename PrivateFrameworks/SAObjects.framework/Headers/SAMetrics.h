/* Runtime dump - SAMetrics
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMetrics : SABaseCommand <SAServerBoundCommand>

@property (copy, nonatomic) NSString * category;
@property (copy, nonatomic) NSString * originalCommandId;
@property (copy, nonatomic) NSDictionary * timings;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (copy, nonatomic) NSString * aceId;
@property (copy, nonatomic) NSString * refId;

+ (NSMutableArray *)metrics;
+ (NSDictionary *)metricsWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (void)setCategory:(NSString *)arg0;
- (NSString *)category;
- (NSString *)encodedClassName;
- (NSString *)originalCommandId;
- (void)setOriginalCommandId:(NSString *)arg0;
- (NSDictionary *)timings;
- (void)setTimings:(NSDictionary *)arg0;

@end
