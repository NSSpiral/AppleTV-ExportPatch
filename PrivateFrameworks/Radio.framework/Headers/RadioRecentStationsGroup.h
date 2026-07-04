/* Runtime dump - RadioRecentStationsGroup
 * Image: /System/Library/PrivateFrameworks/Radio.framework/Radio
 */

@interface RadioRecentStationsGroup : NSObject <NSCopying, NSMutableCopying>
{
    char _active;
    NSString * _localizedTitle;
    NSArray * _stations;
}

@property (readonly, nonatomic) char active;
@property (readonly, copy, nonatomic) NSString * localizedTitle;
@property (readonly, copy, nonatomic) NSArray * stations;

- (NSArray *)stations;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSString *)description;
- (char)isActive;
- (RadioRecentStationsGroup *)copyWithZone:(struct _NSZone *)arg0;
- (RadioRecentStationsGroup *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSString *)localizedTitle;
- (NSObject *)_copyWithRecentStationsGroupClass:(Class)arg0;

@end
