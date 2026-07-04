/* Runtime dump - ATVFlickrCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/ATVInternetPhotosCollection.h>

@class BRMediaCollectionType;
@interface ATVFlickrCollection : ATVInternetPhotosCollection
{
    NSString * _keyImageFlickrIdentifier;
}

- (BRMediaCollectionType *)collectionType;
- (ATVFlickrCollection *)initWithCollectionInfo:(NSDictionary *)arg0;
- (void)setKeyImageFlickrIdentifier:(NSString *)arg0;
- (NSString *)keyImageFlickrIdentifier;
- (NSDictionary *)archivableCollectionInfo;
- (void)dealloc;
- (NSSet *)mediaTypes;

@end
