/* Runtime dump - MPConcreteMediaItemCollection
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPConcreteMediaItemCollection : MPMediaItemCollection <NSCoding, NSCopying, MPCacheableConcreteMediaEntity>
{
    long long _identifier;
    MPMediaQuery * _itemsQuery;
    int _grouping;
    MPMediaItem * _representativeItem;
    MPConcreteMediaEntityPropertiesCache * _propertiesCache;
}

@property (readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache * cachedPropertyValues;

- (MPMediaLibrary *)mediaLibrary;
- (MPConcreteMediaItemCollection *)initWithMultiverseIdentifier:(MIPMultiverseIdentifier *)arg0;
- (NSDictionary *)valuesForProperties:(NSDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1 withCompletionBlock:(id /* block */)arg2;
- (MPMediaItem *)representativeItem;
- (int)groupingType;
- (MPConcreteMediaItemCollection *)initWithIdentifier:(long long)arg0 itemsQuery:(MPMediaQuery *)arg1 grouping:(int)arg2;
- (MPConcreteMediaItemCollection *)initWithIdentifier:(long long)arg0 valuesForProperties:(NSDictionary *)arg1 itemsQuery:(MPMediaQuery *)arg2 grouping:(int)arg3 representativeItemIdentifier:(long long)arg4;
- (void)invalidateCachedProperties;
- (void)enumerateValuesForProperties:(NSDictionary *)arg0 usingBlock:(id /* block */)arg1;
- (MPMediaQuery *)itemsQuery;
- (MPConcreteMediaEntityPropertiesCache *)cachedPropertyValues;
- (NSString *)_initWithIdentifier:(long long)arg0 valuesForProperties:(NSDictionary *)arg1 itemsQuery:(MPMediaQuery *)arg2 grouping:(int)arg3 representativeItemIdentifier:(long long)arg4 propertiesCache:(MPConcreteMediaEntityPropertiesCache *)arg5;
- (void)dealloc;
- (MPConcreteMediaItemCollection *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (unsigned int)count;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (MPConcreteMediaItemCollection *)copyWithZone:(struct _NSZone *)arg0;
- (NSArray *)items;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (unsigned long long)persistentID;
- (char)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;

@end
