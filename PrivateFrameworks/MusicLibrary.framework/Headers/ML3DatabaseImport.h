/* Runtime dump - ML3DatabaseImport
 * Image: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

@interface ML3DatabaseImport : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>
{
    NSString * _libraryPath;
    NSData * _trackData;
    NSData * _playlistData;
    NSFileHandle * _fileHandle;
    NSString * _syncAnchor;
    char _resetSync;
    char _sagaEnabled;
    long long _storeAccountID;
    long long _preferredVideoQuality;
    unsigned int _homeSharingBasePlaylistID;
    char _tracksAreLibraryOwnedContent;
    char _playlistsAreLibraryOwnedContent;
    char _pendingMatch;
}

@property (readonly, nonatomic) NSString * libraryPath;
@property (readonly, nonatomic) NSData * trackData;
@property (readonly, nonatomic) NSData * playlistData;
@property (readonly, nonatomic) NSFileHandle * fileHandle;
@property (readonly, nonatomic) NSString * syncAnchor;
@property (readonly, nonatomic) char resetSync;
@property (readonly, nonatomic) char sagaEnabled;
@property (readonly, nonatomic) long long storeAccountID;
@property (readonly, nonatomic) long long preferredVideoQuality;
@property (readonly, nonatomic) unsigned int homeSharingBasePlaylistID;
@property (readonly, nonatomic) char tracksAreLibraryOwnedContent;
@property (readonly, nonatomic) char playlistsAreLibraryOwnedContent;
@property (readonly, nonatomic) char pendingMatch;

+ (char)supportsSecureCoding;

- (ML3DatabaseImport *)initWithCoder:(NSCoder *)arg0;
- (void)encodeWithCoder:(NSCoder *)arg0;
- (ML3DatabaseImport *)init;
- (ML3DatabaseImport *)copyWithZone:(struct _NSZone *)arg0;
- (ML3DatabaseImport *)mutableCopyWithZone:(struct _NSZone *)arg0;
- (void).cxx_destruct;
- (NSData *)playlistData;
- (NSData *)trackData;
- (NSString *)libraryPath;
- (ML3DatabaseImport *)initWithLibraryPath:(NSString *)arg0 trackData:(NSData *)arg1 playlistData:(NSData *)arg2;
- (NSObject *)_copyWithZone:(struct _NSZone *)arg0 usingConcreteClass:(Class)arg1;
- (NSFileHandle *)fileHandle;
- (NSString *)syncAnchor;
- (char)isResetSync;
- (char)isSagaEnabled;
- (long long)storeAccountID;
- (long long)preferredVideoQuality;
- (unsigned int)homeSharingBasePlaylistID;
- (char)tracksAreLibraryOwnedContent;
- (char)playlistsAreLibraryOwnedContent;
- (char)isPendingMatch;

@end
