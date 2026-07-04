/* Runtime dump - MPMediaEntity
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPMediaEntity : NSObject <NSCopying, NSSecureCoding>
{
    MIPMultiverseIdentifier * _multiverseIdentifier;
}

@property (readonly, nonatomic) char isDownloadable;
@property (readonly, nonatomic) char isDownloadableStoreOffer;
@property (readonly, nonatomic) char isPurchasableStoreOffer;
@property (readonly, nonatomic) int preferredStoreOfferVariant;
@property (readonly, nonatomic) unsigned long long persistentID;
@property (readonly, nonatomic) MPMediaLibrary * mediaLibrary;
@property (readonly, nonatomic) MPMediaItem * representativeItem;
@property (readonly, nonatomic) MIPMultiverseIdentifier * multiverseIdentifier;

+ (char)canFilterByProperty:(NSObject *)arg0;
+ (char)supportsSecureCoding;

- (MPMediaLibrary *)mediaLibrary;
- (MPMediaEntity *)initWithMultiverseIdentifier:(MIPMultiverseIdentifier *)arg0;
- (NSObject *)cachedValueForProperty:(NSString *)arg0 isCached:(char *)arg1;
- (NSDictionary *)valuesForProperties:(NSDictionary *)arg0;
- (MPMediaItem *)representativeItem;
- (void)invalidateCachedProperties;
- (void)enumerateValuesForProperties:(NSDictionary *)arg0 usingBlock:(id /* block */)arg1;
- (int)preferredStoreOfferVariant;
- (id)buyOfferForVariant:(int)arg0;
- (char)isDownloadable;
- (id)buyOffer;
- (id)completionOfferForVariant:(int)arg0;
- (char)isDownloadableStoreOffer;
- (char)isPurchasableStoreOffer;
- (MPMediaEntity *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (char)isEqual:(NSObject *)arg0;
- (unsigned int)hash;
- (NSObject *)objectForKeyedSubscript:(id)arg0;
- (MPMediaEntity *)copyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (void *)valueForProperty:(NSString *)arg0;
- (unsigned long long)persistentID;
- (MIPMultiverseIdentifier *)multiverseIdentifier;

@end
