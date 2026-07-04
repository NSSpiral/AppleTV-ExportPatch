/* Runtime dump - HSCloudItemIDList
 * Image: /System/Library/PrivateFrameworks/HomeSharing.framework/HomeSharing
 */

@interface HSCloudItemIDList : NSObject <NSSecureCoding>
{
    NSMutableArray * _itemIDs;
    NSMutableArray * _idTypes;
}

@property (readonly, nonatomic) unsigned int count;

+ (char)supportsSecureCoding;

- (void)addCloudItemID:(unsigned long long)arg0 idType:(int)arg1;
- (HSCloudItemIDList *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (HSCloudItemIDList *)init;
- (NSString *)description;
- (void).cxx_destruct;
- (void)enumerateCloudItemIDsUsingBlock:(id /* block */)arg0;

@end
