/* Runtime dump - MSASPersonModelItem
 * Image: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

@interface MSASPersonModelItem : NSObject <NSCopying>
{
    int _errorCount;
    MSASAlbum * _album;
    NSString * _albumGUID;
    <NSObject> * _object;
}

@property (nonatomic) int errorCount;
@property (retain, nonatomic) MSASAlbum * album;
@property (retain, nonatomic) NSString * albumGUID;
@property (retain, nonatomic) <NSObject> * object;

- (char)isEqual:(NSObject *)arg0;
- (MSASPersonModelItem *)copyWithZone:(struct _NSZone *)arg0;
- (<NSObject> *)object;
- (void)setObject:(<NSObject> *)arg0;
- (void).cxx_destruct;
- (int)errorCount;
- (void)setErrorCount:(int)arg0;
- (void)setAlbum:(MSASAlbum *)arg0;
- (MSASAlbum *)album;
- (NSString *)albumGUID;
- (void)setAlbumGUID:(NSString *)arg0;

@end
