/* Runtime dump - MPStoreCompletionOfferingLookupItem
 * Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@interface MPStoreCompletionOfferingLookupItem : NSObject
{
    char _wantsArtwork;
    MPMediaQuery * _albumItemsQuery;
    unsigned int _tokenID;
    id _responseBlock;
    NSNumber * _storeLookupID;
}

@property (readonly, nonatomic) MPMediaQuery * albumItemsQuery;
@property (readonly, nonatomic) char wantsArtwork;
@property (readonly, nonatomic) unsigned int tokenID;
@property (readonly, copy, nonatomic) id responseBlock;
@property (readonly, nonatomic) NSNumber * storeLookupID;
@property (readonly, nonatomic) NSString * storeLookupIDString;

+ (NSObject *)storeLookupIDForAlbumItemsQuery:(NSObject *)arg0;

- (char)wantsArtwork;
- (NSURLRequest *)_specificationForArtworkSizesToRequest;
- (NSString *)lookupRequestForStorePlaylistIdentifier:(NSString *)arg0;
- (NSString *)storeLookupIDString;
- (MPStoreCompletionOfferingLookupItem *)initWithAlbumItemsQuery:(MPMediaQuery *)arg0 tokenID:(int)arg1 wantsArtwork:(char)arg2 responseBlock:(id /* block */)arg3;
- (NSObject *)lookupRequestForAlbumWithRepresentativeItem:(MPMediaItem *)arg0;
- (NSURLRequest *)newLookupRequest;
- (MPMediaQuery *)albumItemsQuery;
- (unsigned int)tokenID;
- (id /* block */)responseBlock;
- (NSNumber *)storeLookupID;
- (void).cxx_destruct;

@end
