/* Runtime dump - ATVDefaultPhotos
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPhotoMediaCollection.h>
@interface ATVDefaultPhotos : BRPhotoMediaCollection
{
    int _photosType;
}

+ (ATVDefaultPhotos *)appleDefaultPhotosCollection:(int)arg0;
+ (int)unsetDefaultPhotosType;
+ (NSArray *)appleDefaultPhotos:(int)arg0;

- (NSArray *)mediaAssets;
- (ATVDefaultPhotos *)initWithPhotosType:(int)arg0;
- (NSString *)collectionID;
- (NSString *)collectionName;

@end
