/* Runtime dump - BRStreamingPhotoCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPhotoMediaCollection.h>

@class BRImageManager, BRMediaCollectionType;
@interface BRStreamingPhotoCollection : BRPhotoMediaCollection
{
    ATVDataCollection * _collection;
    NSArray * _atvItems;
    ATVDataClient * _dataClient;
    NSArray * _assets;
    BRMediaCollectionType * _type;
    char _useForScreenSaver;
}

@property (readonly) BRImageManager * preferredImageManager;

+ (BRStreamingPhotoCollection *)collectionWithATVMediaCollection:(id)arg0;
+ (NSArray *)collectionWithATVMediaItems:(NSArray *)arg0;

- (NSArray *)photoAssets;
- (BRStreamingPhotoCollection *)initWithStreamingAssets:(char)arg0 dataClient:(ATVDataClient *)arg1;
- (NSArray *)mediaAssets;
- (BRMediaCollectionType *)collectionType;
- (void)setUseForScreenSaver:(char)arg0;
- (BRStreamingPhotoCollection *)initWithATVItems:(NSArray *)arg0 dataClient:(ATVDataClient *)arg1;
- (id)atvCollection;
- (BRStreamingPhotoCollection *)initWithATVMediaCollection:(id)arg0;
- (BRImageManager *)preferredImageManager;
- (NSString *)keyAssetID;
- (char)useForScreenSaver;
- (char)isLocal;
- (void)dealloc;
- (int)count;
- (NSString *)description;
- (NSString *)title;
- (NSSet *)mediaTypes;
- (ATVDataClient *)dataClient;
- (id /* <BRImageProxy> */)imageProxy;
- (NSString *)collectionID;
- (char)isLibrary;
- (NSString *)collectionName;

@end
