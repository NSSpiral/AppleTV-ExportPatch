/* Runtime dump - RadioSearchResultCategory
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioSearchResultCategory : NSObject <NSCopying, NSMutableCopying>
{
    int _categoryType;
    char _hasMoreResults;
    NSString * _name;
    NSDictionary * _responseDictionary;
    NSArray * _stationResults;
}

@property (readonly, nonatomic) int categoryType;
@property (readonly, nonatomic) char hasMoreResults;
@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSDictionary * responseDictionary;
@property (readonly, copy, nonatomic) NSArray * stationResults;

- (NSDictionary *)_initWithResponseDictionary:(NSDictionary *)arg0;
- (NSString *)description;
- (NSString *)name;
- (RadioSearchResultCategory *)copyWithZone:(struct _NSZone *)arg0;
- (RadioSearchResultCategory *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (int)categoryType;
- (void).cxx_destruct;
- (NSDictionary *)responseDictionary;
- (char)hasMoreResults;
- (NSArray *)stationResults;

@end
