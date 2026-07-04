/* Runtime dump - ATVInternetPhotosCollection
 * Image: /Applications/AppleTV.app/AppleTV
 */


#import <BackRow/BRPhotoMediaCollection.h>
@interface ATVInternetPhotosCollection : BRPhotoMediaCollection
{
    NSDate * _modDate;
    NSDate * _lastCheckedDate;
    NSString * _parentAccountName;
    NSString * _parentAccountID;
    NSString * _previewURL;
}

- (void)setParentAccountID:(NSString *)arg0;
- (NSString *)parentAccountID;
- (NSDate *)lastCheckedDate;
- (void)setLastCheckedDate:(NSDate *)arg0;
- (NSString *)parentAccountName;
- (void)setParentAccountName:(NSString *)arg0;
- (NSDictionary *)collectionDictionary;
- (void)setPreviewURL:(NSString *)arg0;
- (NSString *)previewURL;
- (char)isLocal;
- (void)dealloc;
- (NSDate *)modDate;
- (void)setModDate:(NSDate *)arg0;
- (long)numberOfPhotos;

@end
