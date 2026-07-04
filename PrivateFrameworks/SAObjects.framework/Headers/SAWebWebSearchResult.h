/* Runtime dump - SAWebWebSearchResult
 * Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAWebWebSearchResult : AceObject <SAAceSerializable>

@property (copy, nonatomic) NSArray * imageResults;
@property (copy, nonatomic) NSArray * newsResults;
@property (copy, nonatomic) NSArray * relatedSearchResults;
@property (copy, nonatomic) NSNumber * totalImageResults;
@property (copy, nonatomic) NSNumber * totalNewsResults;
@property (copy, nonatomic) NSNumber * totalVideoResults;
@property (copy, nonatomic) NSNumber * totalWebResults;
@property (copy, nonatomic) NSArray * videoResults;
@property (copy, nonatomic) NSArray * webResults;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

+ (NSObject *)webSearchResult;
+ (NSDictionary *)webSearchResultWithDictionary:(NSDictionary *)arg0 context:(NSObject *)arg1;

- (NSString *)groupIdentifier;
- (NSString *)encodedClassName;
- (NSArray *)imageResults;
- (void)setImageResults:(NSArray *)arg0;
- (NSArray *)newsResults;
- (void)setNewsResults:(NSArray *)arg0;
- (NSArray *)relatedSearchResults;
- (void)setRelatedSearchResults:(NSArray *)arg0;
- (NSNumber *)totalImageResults;
- (void)setTotalImageResults:(NSNumber *)arg0;
- (NSNumber *)totalNewsResults;
- (void)setTotalNewsResults:(NSNumber *)arg0;
- (NSNumber *)totalVideoResults;
- (void)setTotalVideoResults:(NSNumber *)arg0;
- (NSNumber *)totalWebResults;
- (void)setTotalWebResults:(NSNumber *)arg0;
- (NSArray *)videoResults;
- (void)setVideoResults:(NSArray *)arg0;
- (NSArray *)webResults;
- (void)setWebResults:(NSArray *)arg0;

@end
