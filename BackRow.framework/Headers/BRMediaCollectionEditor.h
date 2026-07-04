/* Runtime dump - BRMediaCollectionEditor
 * Image: /Applications/AppleTV.app/AppleTV
 */


@class BRPhotoMediaCollection;
@interface BRMediaCollectionEditor : NSObject
{
    <BRMediaCollection> * _collection;
}

+ (void)setImplementationClass:(Class)arg0;
+ (BRMediaCollectionEditor *)editorForCollection:(id)arg0;

- (BRMediaCollectionEditor *)initWithMediaCollection:(BRPhotoMediaCollection *)arg0;
- (NSString *)collectionCopyWithName:(NSString *)arg0;
- (void)addMediaObjectToCollection:(id)arg0;
- (void)removeMediaObjectFromCollection:(id)arg0;
- (void)clearCollection;
- (<BRMediaCollection> *)collection;
- (void)dealloc;

@end
