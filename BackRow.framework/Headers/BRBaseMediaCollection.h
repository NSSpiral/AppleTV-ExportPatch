/* Runtime dump - BRBaseMediaCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */


@protocol BRMediaCollection;

@class BRMediaCollectionType, BRMediaType;
@interface BRBaseMediaCollection : NSObject <BRMediaCollection>
{
    <BRMediaProvider> * _provider;
}

@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString * description;
@property (readonly, copy) NSString * debugDescription;

- (NSString *)titleForSorting;
- (NSString *)titleNoDefault;
- (NSString *)titleForSortingNoDefault;
- (NSString *)artistForSorting;
- (NSArray *)mediaAssets;
- (NSEnumerator *)assetEnumerator;
- (char)isSingleArtistCompilation;
- (BRMediaCollectionType *)collectionType;
- (void)willBeDeleted;
- (NSString *)mediaObjectID;
- (void)performSelector:(SEL)arg0 target:(NSObject *)arg1;
- (void)performSelector:(SEL)arg0 target:(NSObject *)arg1 withObject:(NSObject *)arg2;
- (BRBaseMediaCollection *)initWithMediaProvider:(NSObject *)arg0;
- (char)isLocal;
- (void)dealloc;
- (char)isHidden;
- (int)count;
- (unsigned int)hash;
- (long)duration;
- (char)isValid;
- (NSString *)title;
- (NSDate *)date;
- (NSSet *)mediaTypes;
- (id /* <BRImageProxy> */)imageProxy;
- (NSString *)collectionID;
- (<BRMediaProvider> *)provider;
- (NSString *)artist;
- (char)isCompilation;
- (NSArray *)childCollections;
- (char)isAvailable;
- (BRMediaType *)mediaType;
- (id /* <BRMediaCollection> */)parentCollection;

@end
