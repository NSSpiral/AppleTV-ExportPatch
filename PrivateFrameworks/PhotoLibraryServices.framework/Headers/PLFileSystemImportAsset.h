/* Runtime dump - PLFileSystemImportAsset
 * Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLFileSystemImportAsset : NSObject
{
    NSMutableSet * _urls;
    NSDate * _dateCreated;
    struct NSObject * _destinationAlbum;
    int assetKind;
}

@property (retain, nonatomic) NSMutableSet * urls;
@property (retain, nonatomic) NSDate * dateCreated;
@property (retain, nonatomic) NSObject<PLAlbumProtocol> * destinationAlbum;
@property (nonatomic) int assetKind;

- (void)dealloc;
- (NSString *)description;
- (int)compare:(NSObject *)arg0;
- (NSDate *)dateCreated;
- (void)setDateCreated:(NSDate *)arg0;
- (PLFileSystemImportAsset *)initWithURLs:(id)arg0 creationDate:(NSDate *)arg1 destinationAlbum:(struct NSObject *)arg2 assetKind:(int)arg3;
- (NSMutableSet *)urls;
- (struct NSObject *)destinationAlbum;
- (char)isCameraKit;
- (void)setUrls:(NSMutableSet *)arg0;
- (void)setDestinationAlbum:(struct NSObject *)arg0;
- (void)setAssetKind:(int)arg0;
- (int)assetKind;

@end
