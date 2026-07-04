/* Runtime dump - MPConcreteMediaItem
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPConcreteMediaItem : MPMediaItem <NSCoding, NSCopying, MPMediaItemArrayPIDEncodableItem, MPCacheableConcreteMediaEntity>
{
    MPMediaLibrary * _library;
    unsigned long long _persistentID;
    MPConcreteMediaEntityPropertiesCache * _propertiesCache;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;
@property (readonly, retain, nonatomic) MPConcreteMediaEntityPropertiesCache * cachedPropertyValues;

+ (MPConcreteMediaItem *)concreteMediaItemWithPersistentID:(unsigned long long)arg0 library:(MPMediaLibrary *)arg1;
+ (MPConcreteMediaItem *)concreteMediaItemWithPersistentID:(unsigned long long)arg0;
+ (char)supportsSecureCoding;

- (MPMediaLibrary *)mediaLibrary;
- (MPConcreteMediaItem *)initWithPersistentID:(unsigned long long)arg0;
- (NSObject *)cachedValueForProperty:(NSString *)arg0 isCached:(char *)arg1;
- (NSDictionary *)valuesForProperties:(NSDictionary *)arg0;
- (void)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1 withCompletionBlock:(id /* block */)arg2;
- (void)noteWasPlayedToTime:(double)arg0 skipped:(char)arg1;
- (char)didSkipWithPlayedToTime:(double)arg0;
- (void)incrementPlayCountForPlayingToEnd;
- (char)incrementPlayCountForStopTime:(double)arg0;
- (void)invalidateCachedProperties;
- (void)enumerateValuesForProperties:(NSDictionary *)arg0 usingBlock:(id /* block */)arg1;
- (Class)itemArrayCoderPIDDataCodingClass;
- (void)markNominalAmountHasBeenPlayed;
- (void)incrementSkipCount;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id /* block */)arg0;
- (double)nominalHasBeenPlayedThreshold;
- (NSObject *)_initWithPersistentID:(unsigned long long)arg0 library:(MPMediaLibrary *)arg1 propertiesCache:(MPConcreteMediaEntityPropertiesCache *)arg2;
- (NSObject *)_nonBatchableOrCachedValueForProperty:(NSString *)arg0 needsFetch:(char *)arg1;
- (void)reallyIncrementPlayCount;
- (MPConcreteMediaItem *)initWithPersistentID:(unsigned long long)arg0 library:(MPMediaLibrary *)arg1;
- (MPConcreteMediaEntityPropertiesCache *)cachedPropertyValues;
- (void)dealloc;
- (MPConcreteMediaItem *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (MPConcreteMediaItem *)init;
- (NSString *)description;
- (MPConcreteMediaItem *)copyWithZone:(struct _NSZone *)arg0;
- (Class)classForCoder;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (unsigned long long)persistentID;
- (char)existsInLibrary;
- (char)setValue:(NSObject *)arg0 forProperty:(NSString *)arg1;

@end
