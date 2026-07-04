/* Runtime dump - CPLAlbumChange
 * Image: /System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLAlbumChange : CPLContainerChange <NSSecureCoding, NSCopying>
{
    NSString * _keyAssetIdentifier;
    char _albumSortAscending;
    unsigned int _albumType;
    NSString * _name;
    int _position;
    NSString * _parentIdentifier;
    unsigned int _albumSortType;
}

@property (nonatomic) unsigned int albumType;
@property (copy, nonatomic) NSString * name;
@property (nonatomic) int position;
@property (copy, nonatomic) NSString * parentIdentifier;
@property (nonatomic) unsigned int albumSortType;
@property (nonatomic) char albumSortAscending;

- (void)setName:(NSString *)arg0;
- (NSString *)name;
- (void)setPosition:(int)arg0;
- (int)position;
- (void).cxx_destruct;
- (NSString *)identifiersForMapping;
- (id)translateToCloudChangeUsingIDMapping:(id)arg0 error:(id *)arg1;
- (id)translateToClientChangeUsingIDMapping:(id)arg0 error:(id *)arg1;
- (NSString *)relatedIdentifier;
- (void)setRelatedIdentifier:(NSString *)arg0;
- (NSString *)propertiesDescription;
- (NSString *)parentIdentifier;
- (unsigned int)albumType;
- (char)albumSortAscending;
- (unsigned int)albumSortType;
- (void)setParentIdentifier:(NSString *)arg0;
- (void)setAlbumType:(unsigned int)arg0;
- (void)setAlbumSortType:(unsigned int)arg0;
- (void)setAlbumSortAscending:(char)arg0;

@end
