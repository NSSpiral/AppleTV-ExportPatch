/* Runtime dump - RadioHistoryCategory
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioHistoryCategory : NSObject <NSCopying, NSMutableCopying>
{
    NSString * _categoryDescription;
    NSArray * _items;
    NSString * _name;
    NSString * _stationHash;
    long long _stationID;
    int _type;
}

@property (readonly, copy, nonatomic) NSString * categoryDescription;
@property (readonly, copy, nonatomic) NSArray * items;
@property (readonly, copy, nonatomic) NSString * name;
@property (readonly, copy, nonatomic) NSString * stationHash;
@property (readonly, nonatomic) long long stationID;
@property (readonly, nonatomic) int type;

- (NSString *)stationHash;
- (long long)stationID;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (NSString *)name;
- (int)type;
- (RadioHistoryCategory *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)items;
- (RadioHistoryCategory *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)categoryDescription;

@end
